/* Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo seu valor na tela, ate que seu valor seja 1000000 */

#include <stdio.h>

int main(void) {

  int cont = 0;

  while(cont < 1000000){
    cont = cont + 100;
    printf("- %d -\n", cont);
  }
  
  return 0;
}
