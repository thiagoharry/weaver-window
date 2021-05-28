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
  SLEEP(1);
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
  _Wcreate_window();
  const GLubyte *str = glGetString(GL_VERSION);
  assert("OpenGL is running", str != NULL);
  char message[128];
  memcpy(message, "Getting OpenGL Version: ", 25);
  memcpy(&(message[24]), str, strlen((const char *) str) + 1);
  assert(message, glGetError() == GL_NO_ERROR);
  _Wdestroy_window();
}

int main(int argc, char **argv){
  test_create_destroy_window();
  test_opengl();
  imprime_resultado();
  return 0;
}
