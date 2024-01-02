#include <stdio.h>

int main(void) {

  // Declaração e inicialização de variavel
  int idade = 0;

  // Função para imprimir algo na tela
  printf("Qual a sua idade: "); 

  scanf("%d", &idade); // Receber dados

  printf("\nA sua idade é %d", idade); // Saida de dados
  
  return 0;
}
