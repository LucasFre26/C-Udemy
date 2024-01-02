/*  Faca um programa que leio uma número e retorne o quadrado dele  */

#include <stdio.h>

int main(void) {

  int num1 = 0;

  printf("Digite o seu numero: ");
  scanf("%d", &num1);

  printf("\n%d^2 = %d", num1, num1* num1);
  
  return 0;
}
