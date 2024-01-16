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

// Exercicio 2
// Leia quatro notas, calcule a media atritmetica e imprima o resultado
/* int main(void) {

  float n1 = 0, n2 = 0, n3 = 0, n4 = 0;

  printf("Entre com a primeira nota: ");
  scanf("%f", &n1); 
  
  printf("Entre com a segunda nota: ");
  scanf("%f", &n2); 

  printf("Entre com a terceira nota: ");
  scanf("%f", &n3); 

  printf("Entre com a quarta nota: ");
  scanf("%f", &n4); 

  printf("\nA media aritmetica das notas é: %.2f", (n1 + n2 + n3 + n4) / 4);

  return 0;
} */

// Exercicio 3
// Leia quanto cada apostador apostou e retorne o valor respectivo que cada apostador recebera conforme a proporcao que gastou

/* int main(void) {

  float a1 = 0, a2 = 0, a3 = 0, premio = 0;

  printf("Qual o valor do premio: ");
  scanf("%f", &premio);

  printf("\nEntre com a primeira o valor que o primeiro apostador gastou: ");
  scanf("%f", &a1); 

  printf("\nEntre com a primeira o valor que o segundo apostador gastou: ");
  scanf("%f", &a2);

  printf("\nEntre com a primeira o valor que o terceiro apostador gastou: ");
  scanf("%f", &a3);
  
  printf("\nO apostador 1 ganhara: %.2f\nO apostador 2 ganhara: %.2f\nO apostador 3 ganhara: %.2f\n", a1 / (a1 + a2 + a3) * premio, 
    a2 / (a1 + a2 + a3) * premio, a3 / (a1 + a2 + a3) * premio);

  return 0;
} */
