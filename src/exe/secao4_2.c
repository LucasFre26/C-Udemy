// Leia quatro notas, calcule a media atritmetica e imprima o resultado

#include <stdio.h>

int main(void) {

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
}
