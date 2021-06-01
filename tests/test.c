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
  for(i = 1; i < 71 - tamanho_string; i ++)
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
  ret = _Wcreate_window();
  //SLEEP(1);
  assert("Creating window", ret);
  ret = _Wcreate_window();
  assert("Not creating window if it exists", ret == false);
  ret = _Wdestroy_window();
  assert("Destroying window", ret);
  ret = _Wdestroy_window();
  assert("Do not try to destroy window twice", ret == false);
  ret = _Wcreate_window();
  if(ret)
    ret = _Wdestroy_window();
  assert("Can create successive windows", ret);
}

void test_opengl(void){
  char message[128];
  GLint shader_program, pos;
  _Wcreate_window();
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
  memcpy(message, "Getting Shading Language Version: ", 35);
  memcpy(&(message[34]), renderer, strlen((const char *) shading) + 1);
  assert(message, glGetError() == GL_NO_ERROR);
  memcpy(message, "Getting OpenGL Vendor: ", 24);
  memcpy(&(message[23]), renderer, strlen((const char *) vendor) + 1);
  assert(message, glGetError() == GL_NO_ERROR);
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
      "void main() {\n"
      "  gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);\n"
      "}\n";
    vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex_shader, 1, &vertex_shader_source, NULL);
    glCompileShader(vertex_shader);
    glGetShaderiv(vertex_shader, GL_COMPILE_STATUS, &ret);
    assert("Compiling simple vertex shader", ret);
    fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment_shader, 1, &fragment_shader_source, NULL);
    glCompileShader(fragment_shader);
    glGetShaderiv(fragment_shader, GL_COMPILE_STATUS, &ret);
    assert("Compiling simple fragment shader", ret);
    shader_program = glCreateProgram();
    glAttachShader(shader_program, vertex_shader);
    glAttachShader(shader_program, fragment_shader);
    glLinkProgram(shader_program);
    glGetProgramiv(shader_program, GL_LINK_STATUS, &ret);
    assert("Linking simple shader program", ret);
    glDeleteShader(vertex_shader);
    glDeleteShader(fragment_shader);
  }
  {
    GLuint vbo;
    time_t initial_time, current_time;
    const GLfloat vertices[] = {
      0.0f, 0.5f, 0.0f,
      0.5f, -0.5f, 0.0f,
      -0.5f, -0.5f, 0.0f
    };
    pos = glGetAttribLocation(shader_program, "position");
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glViewport(0, 0, 1366, 768);
    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    glVertexAttribPointer(pos, 3, GL_FLOAT, GL_FALSE, 0, (GLvoid *) 0);
    glEnableVertexAttribArray(pos);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    current_time = initial_time = time(NULL);
    while(current_time < initial_time + 2){
      glClear(GL_COLOR_BUFFER_BIT);
      glUseProgram(shader_program);
      glDrawArrays(GL_TRIANGLES, 0, 3);
      current_time = time(NULL);
      _Wrender_window();
#if defined(__EMSCRIPTEN__)
      emscripten_sleep(10);
#endif
    }
    glDeleteBuffers(1, &vbo);
    glDeleteProgram(shader_program);
  }
  assert("Rendering simple program", glGetError() == GL_NO_ERROR);
  _Wdestroy_window();
}

int main(int argc, char **argv){
  test_create_destroy_window();
  test_opengl();
  imprime_resultado();
  return 0;
}
