// Faca um programa que leia três valores e apresente como resultado a soma dos quadrados dos três valores lidos.

#include <stdio.h>

int main(void) {

  int a = 0, b = 0, c = 0;

  printf("Entre com o seu primeiro numero: ");
  scanf("%d", &a); 
  a = a * a;

  printf("Entre com o seu segundo numero: ");
  scanf("%d", &b); 
  b = b * b;

  printf("Entre com o seu terceiro numero: ");
  scanf("%d", &c); 
  c = c * c;

  printf("A soma dos quadrado dos valores digitados e: %d + %d + %d = %d", a, b, c, a + b + c);

  return 0;
}
