#include <stdio.h>

#include "../src/window.h"

int numero_de_testes = 0, acertos = 0, falhas = 0;
void imprime_resultado(void){
  printf("\n%d tests: %d sucess, %d fails\n\n",
	 numero_de_testes, acertos, falhas);
}

int main(int argc, char **argv){
  imprime_resultado();
  return 0;
}
