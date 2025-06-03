#include <stdio.h>
#include <stdlib.h>
#if !defined(_WIN32)
#include <unistd.h>
#else
#include <Windows.h>
#endif
#include <stdbool.h>
#include <string.h>
#if defined(__EMSCRIPTEN__)
#include <emscripten.h>
#define SLEEP(x) emscripten_sleep(x * 1000)
#elif defined(_WIN32)
#define SLEEP(x) Sleep(x * 1000)
#else
#define SLEEP(x) sleep(x)
#endif
#if !defined(_WIN32)
#include <GLES3/gl3.h>
#include <time.h>
#else
#include <GL/gl.h>
#endif


#include "../src/window.h"

static struct _Wkeyboard keyboard;
static struct _Wmouse mouse;

int numero_de_testes = 0, acertos = 0, falhas = 0;
void imprime_resultado(void){
  printf("\n%d tests: %d sucess, %d fails\n\n",
	 numero_de_testes, acertos, falhas);
}

void assert(char *descricao, bool valor){
  char pontos[72], *s = descricao;
  size_t tamanho_string = 0;
  int i;
  while(*s)
    tamanho_string += (*s++ & 0xC0) != 0x80;
  pontos[0] = ' ';
  for(i = 1; i < 71 - (int) tamanho_string; i ++)
    pontos[i] = '.';
  pontos[i] = '\0';
  numero_de_testes ++;
  printf("%s%s", descricao, pontos);
  if(valor){
#if defined(__unix__) && !defined(__EMSCRIPTEN__)
    printf("\e[32m[OK]\033[0m\n");
#else
    printf("[OK]\n");
#endif
    acertos ++;
  }
  else{
#if defined(__unix__) && !defined(__EMSCRIPTEN__)
    printf("\033[0;31m[FAIL]\033[0m\n");
#else
    printf("[FAIL]\n");
#endif
    falhas ++;
  }
}

void test_create_destroy_window(void){
  bool ret;
  ret = _Wcreate_window(&keyboard, &mouse);
  //SLEEP(1);
  assert("Creating window", ret);
  ret = _Wcreate_window(&keyboard, &mouse);
  assert("Not creating window if it exists", ret == false);
  ret = _Wdestroy_window();
  assert("Destroying window", ret);
  ret = _Wdestroy_window();
  assert("Do not try to destroy window twice", ret == false);
  ret = _Wcreate_window(&keyboard, &mouse);
  if(ret)
    ret = _Wdestroy_window();
  assert("Can create successive windows", ret);
}

void test_resolution(void){
  int res_x, res_y;
  int size_x, size_y, dpi_x, dpi_y;
  bool ret;
  char message[128], message2[128];
  ret = _Wget_screen_resolution(&res_x, &res_y);
  snprintf(message, 128, "Getting screen resolution: %dx%d", res_x, res_y);
  assert(message, ret && (res_x > 0) && (res_y > 0));
  //////
  _Wcreate_window(&keyboard, &mouse);
  _Wget_window_size(&size_x, &size_y);
  assert("Fullscreen window have same size than screen", size_x == res_x &&
	 size_y == res_y);
  /////
  ret = _Wget_screen_dpi(&dpi_x, &dpi_y);
  snprintf(message2, 128, "Getting screen dot density: %dx%d DPI",
	   dpi_x, dpi_y);
  assert(message2, ret && (dpi_x > 0) && (dpi_y > 0));
  _Wdestroy_window();
}

void test_resizing(void){
  int width, height;
  bool ret;
  _Wcreate_window(&keyboard, &mouse);
  ret = _Wresize_window(800, 600);
  assert("Do not resize a fullscreen window", !ret);
  _Wtoggle_fullscreen();
  ret = _Wresize_window(900, 700);
  _Wget_window_size(&width, &height);
  assert("Resizing the window", ret && width == 900 && height == 700);
  _Wtoggle_fullscreen();
  ret = _Wresize_window(100, 200);
  _Wtoggle_fullscreen();
  _Wget_window_size(&width, &height);
  // In EXWM sometimes this fails. Width becomes 904 for unknown reasons.
  assert("Window remembers its size when toggling fullscreen",
	 width == 900 && height == 700);
  _Wdestroy_window();
}


static int counter = 0;
void update_counter(int old_width, int old_height, int new_width, int new_height){
  if(new_width != old_width || new_height != old_height)
    counter ++;
}
void test_resizing_function(void){
  int counter0, counter1, counter2, counter3, counter4;
  _Wcreate_window(&keyboard, &mouse);
  counter0 = counter;
  _Wset_resize_function(update_counter);
  _Wtoggle_fullscreen();
  counter1 = counter;
  _Wresize_window(900, 700);
  counter2 = counter;
  _Wtoggle_fullscreen();
  counter3 = counter;
  _Wset_resize_function(NULL);
  _Wtoggle_fullscreen();
  _Wresize_window(900, 700);
  counter4 = counter;
  _Wdestroy_window();
  assert("Testing resizing function", counter0 == 0 && counter1 == 1 &&
	 counter2 == 2 && counter3 == 3 && counter4 == 3);
}

void test_opengl_simple(void){
  char message[1024];
  time_t initial_time, current_time;
  _Wcreate_window(&keyboard, &mouse);
  const GLubyte *version = glGetString(GL_VERSION);
  const GLubyte *vendor = glGetString(GL_VENDOR);
  const GLubyte *renderer = glGetString(GL_RENDERER);
  const GLubyte *shading = glGetString(GL_SHADING_LANGUAGE_VERSION);
  assert("OpenGL is running", version != NULL && renderer != NULL &&
	 vendor != NULL && shading != NULL);
  memcpy(message, "Getting OpenGL Version: ", 25);
  memcpy(&(message[24]), version, strlen((const char *) version) + 1);
  assert(message, glGetError() == GL_NO_ERROR);
  memcpy(message, "Getting Renderer: ", 19);
  memcpy(&(message[18]), renderer, strlen((const char *) renderer) + 1);
  assert(message, glGetError() == GL_NO_ERROR);
  memcpy(message, "Shading Language Version: ", 27);
  memcpy(&(message[26]), shading, strlen((const char *) shading) + 1);
  assert(message, glGetError() == GL_NO_ERROR);
  memcpy(message, "Getting OpenGL Vendor: ", 24);
  memcpy(&(message[23]), vendor, strlen((const char *) vendor) + 1);
  assert(message, glGetError() == GL_NO_ERROR);
  {
    int count;
    glGetIntegerv(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS, &count);
    sprintf(message, "Textures per vertex shader: %d", count);
    assert(message, glGetError() == GL_NO_ERROR);
    glGetIntegerv(GL_MAX_TEXTURE_IMAGE_UNITS, &count);
    sprintf(message, "Textures per fragment shader: %d", count);
    assert(message, glGetError() == GL_NO_ERROR);
    glGetIntegerv(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS, &count);
    sprintf(message, "Max active textures: %d", count);
    assert(message, glGetError() == GL_NO_ERROR);
  }
  current_time = initial_time = time(NULL);
  while(current_time < initial_time + 2){
    glClearColor(1.0, 0.5, 0.5, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    current_time = time(NULL);
    _Wrender_window();
#if defined(__EMSCRIPTEN__)
    emscripten_sleep(10);
#endif
  }
  _Wdestroy_window();
}

void test_opengl_buffers(void){
  unsigned int vbo, vertex_shader, fragment_shader, shader_program;
  time_t initial_time, current_time;
  int ret;
  float vertices[] = {
    -1.0f, -1.0f, 0.0f,
    1.0f, -1.0f, 0.0f,
    -1.0f, 1.0f, 0.0f};
  const char *vertex_shader_source =
      "#version 100\n"
      "attribute vec3 position;\n"
      "void main() {\n"
      "  gl_Position = vec4(position, 1.0);\n"
      "}\n";
  const char *fragment_shader_source =
    "#version 100\n"
    "precision mediump float;\n"
    "void main() {\n"
    "  gl_FragColor = vec4(1.0, 0.5, 0.2, 1.0);\n"
    "}\n";
  _Wcreate_window(&keyboard, &mouse);
  _Wtoggle_fullscreen();
  _Wtoggle_fullscreen();
  glGenBuffers(1, &vbo);
  glBindBuffer(GL_ARRAY_BUFFER, vbo);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
  vertex_shader = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vertex_shader, 1, &vertex_shader_source, NULL);
  glCompileShader(vertex_shader);
  glGetShaderiv(vertex_shader, GL_COMPILE_STATUS, &ret);
  assert("Compiling shader with explicit attribute layout", ret);
  {
    GLint info_len = 0;
    glGetShaderiv(vertex_shader, GL_INFO_LOG_LENGTH, &info_len);
    if(info_len > 1){
      char *info_log = (char *) malloc(sizeof(char) * info_len);
      glGetShaderInfoLog(vertex_shader, info_len, NULL, info_log);
      fprintf(stderr, "Error compiling vertex shader:\n%s\n", info_log);
      free(info_log);
    }
  }
  fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(fragment_shader, 1, &fragment_shader_source, NULL);
  glCompileShader(fragment_shader);
  glGetShaderiv(vertex_shader, GL_COMPILE_STATUS, &ret);
  {
    GLint info_len = 0;
    glGetShaderiv(fragment_shader, GL_INFO_LOG_LENGTH, &info_len);
    if(info_len > 1){
      char *info_log = (char *) malloc(sizeof(char) * info_len);
      glGetShaderInfoLog(fragment_shader, info_len, NULL, info_log);
      fprintf(stderr, "Error compiling fragment shader:\n%s\n", info_log);
      free(info_log);
    }
  }
  shader_program = glCreateProgram();
  glAttachShader(shader_program, vertex_shader);
  glAttachShader(shader_program, fragment_shader);
  glBindAttribLocation(shader_program, 0, "position");
  glLinkProgram(shader_program);
  glGetProgramiv(shader_program, GL_LINK_STATUS, &ret);
  assert("Linking simple shader program", ret);
  {
    GLint info_len = 0;
    glGetProgramiv(shader_program, GL_INFO_LOG_LENGTH, &info_len);
    if(info_len > 1){
      char *info_log = (char *) malloc(sizeof(char) * info_len);
      glGetProgramInfoLog(shader_program, info_len, NULL, info_log);
      fprintf(stderr, "Error linking shader:\n%s\n", info_log);
      free(info_log);
    }
  }
  glUseProgram(shader_program);
  glDeleteShader(vertex_shader);
  glDeleteShader(fragment_shader);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *) 0);
  glEnableVertexAttribArray(0);
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  current_time = initial_time = time(NULL);
  while(current_time < initial_time + 2){
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float),
			  (void *) 0);
    glEnableVertexAttribArray(0);
    glUseProgram(shader_program);
    glClear(GL_COLOR_BUFFER_BIT);
    glDrawArrays(GL_TRIANGLES, 0, 3);
    current_time = time(NULL);
    _Wrender_window();
#if defined(__EMSCRIPTEN__)
    emscripten_sleep(10);
#endif
  }
  glDeleteProgram(shader_program);
  assert("Rendering program with vertex buffer", glGetError() == GL_NO_ERROR);
  _Wdestroy_window();

}

void test_opengl_shader(void){
  GLint shader_program, pos = 0;
  _Wcreate_window(&keyboard, &mouse);
  _Wtoggle_fullscreen();
  _Wresize_window(800, 600);
  {
    GLint vertex_shader, fragment_shader;
    GLint ret;
    const char *vertex_shader_source =
      "#version 100\n"
      "attribute vec3 position;\n"
      "void main() {\n"
      "  gl_Position = vec4(position, 1.0);\n"
      "}\n";
    const char *fragment_shader_source =
      "#version 100\n"
      "precision mediump float;\n"
      "void main() {\n"
      "  gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);\n"
      "}\n";
    vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    assert("Creating vertex shader", vertex_shader != 0);
    glShaderSource(vertex_shader, 1, &vertex_shader_source, NULL);
    assert("No errors while using loaded functions", glGetError() == GL_NO_ERROR);
    glCompileShader(vertex_shader);
    glGetShaderiv(vertex_shader, GL_COMPILE_STATUS, &ret);
    assert("Compiling simple vertex shader", ret);
    if(!ret){
      GLint info_len = 0;
      glGetShaderiv(vertex_shader, GL_INFO_LOG_LENGTH, &info_len);
      if(info_len > 1){
	char *info_log = (char *) malloc(sizeof(char) * info_len);
	glGetShaderInfoLog(vertex_shader, info_len, NULL, info_log);
	fprintf(stderr, "Error compiling vertex shader:\n%s\n", info_log);
	free(info_log);
      }
    }
    fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
    assert("Creating fragment shader", fragment_shader != 0);
    glShaderSource(fragment_shader, 1, &fragment_shader_source, NULL);
    glCompileShader(fragment_shader);
    glGetShaderiv(fragment_shader, GL_COMPILE_STATUS, &ret);
    assert("Compiling simple fragment shader", ret);
    if(!ret){
      GLint info_len = 0;
      glGetShaderiv(fragment_shader, GL_INFO_LOG_LENGTH, &info_len);
      if(info_len > 1){
	char *info_log = (char *) malloc(sizeof(char) * info_len);
	glGetShaderInfoLog(fragment_shader, info_len, NULL, info_log);
	fprintf(stderr, "Error compiling fragment shader:\n%s\n", info_log);
	free(info_log);
      }
    }
    shader_program = glCreateProgram();
    assert("Creating shader program", shader_program != 0);
    glAttachShader(shader_program, vertex_shader);
    glAttachShader(shader_program, fragment_shader);
    glLinkProgram(shader_program);
    glGetProgramiv(shader_program, GL_LINK_STATUS, &ret);
    assert("Linking simple shader program", ret);
    if(!ret){
      GLint info_len = 0;
      glGetProgramiv(shader_program, GL_INFO_LOG_LENGTH, &info_len);
      if(info_len > 1){
	char *info_log = (char *) malloc(sizeof(char) * info_len);
	glGetProgramInfoLog(shader_program, info_len, NULL, info_log);
	fprintf(stderr, "Error compiling fragment shader:\n%s\n", info_log);
	free(info_log);
      }
    }
    glDeleteShader(vertex_shader);
    glDeleteShader(fragment_shader);
  }
  {
    //GLuint vbo;
    time_t initial_time, current_time;
    const GLfloat vertices[] = {
      0.0f, 0.5f, 0.0f,
      0.5f, -0.5f, 0.0f,
      -0.5f, -0.5f, 0.0f
    };
    //pos = glGetAttribLocation(shader_program, "position");
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    //glGenBuffers(1, &vbo);
    //glBindBuffer(GL_ARRAY_BUFFER, vbo);
    //glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    //glVertexAttribPointer(pos, 3, GL_FLOAT, GL_FALSE, 0, (GLvoid *) 0);
    //glBindBuffer(GL_ARRAY_BUFFER, 0);
    current_time = initial_time = time(NULL);
    while(current_time < initial_time + 2){
      glClear(GL_COLOR_BUFFER_BIT);
      glUseProgram(shader_program);
      glVertexAttribPointer(pos, 3, GL_FLOAT, GL_FALSE, 0, (GLvoid *) vertices);
      glEnableVertexAttribArray(pos);
      glDrawArrays(GL_TRIANGLES, 0, 3);
      current_time = time(NULL);
      _Wrender_window();
#if defined(__EMSCRIPTEN__)
      emscripten_sleep(10);
#endif
    }
    //glDeleteBuffers(1, &vbo);
    glDeleteProgram(shader_program);
  }
  assert("Rendering simple program", glGetError() == GL_NO_ERROR);
  _Wdestroy_window();
}

void test_fullscreen(void){
  _Wcreate_window(&keyboard, &mouse);
  bool full = _Wis_fullscreen();
  assert("Window begin in fullscreen mode", full);
  _Wtoggle_fullscreen();
  full = _Wis_fullscreen();
  _Wtoggle_fullscreen();
  assert("Toggling fullscreen mode", !full && _Wis_fullscreen());
  _Wdestroy_window();
}

int main(void){
  test_create_destroy_window();
  test_resolution();
  test_fullscreen();
  test_resizing();
  test_resizing_function();
  test_opengl_simple();
  test_opengl_shader();
  test_opengl_buffers();
  imprime_resultado();
  return 0;
}
