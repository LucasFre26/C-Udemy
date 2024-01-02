/* Faca um programa que leia 3 numeros e retorne a soma entre eles */

#include <stdio.h>

int main(void) {

  int num1 = 0, num2 = 0, num3 = 0;

  printf("Digite o seu primeiro numero: ");
  scanf("%d", &num1);

  printf("Digite o seu segundo numero: ");
  scanf("%d", &num2);

  printf("Digite o seu terceiro numero: ");
  scanf("%d", &num3);

  printf("\n%d + %d + %d = %d", num1, num2, num3, num1 + num2 + num3);
  
  return 0;
}
