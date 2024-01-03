/* Faca um programa que deteremine e mostre os cinco primeiros multiplos de 3, coseiderando numeros maiores que 0 */

#include <stdio.h>

int main(void) {

  int mul3 = 1, j = 1;

  printf("Os 3 primeiros múltiplos de 3 são: ");
  
  for(int i = 0; i < 3; i++){
    printf("- %d -", mul3);
    
    mul3 = 3 * j;

    j++;
  }
  
  return 0;
}
