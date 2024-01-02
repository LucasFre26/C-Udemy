#include <stdio.h>

// O compilador (GCC) faz a leitura do codigo fonte, verifica as bibliotecas importadas e gera um executavel para o SO que está executando

int main(void) {

  // Declaração e inicialização de variavel
  int idade = 0;

  // Função para imprimir algo na tela
  printf("Qual a sua idade: "); 

  scanf("%d", &idade); // Receber dados

  printf("\nA sua idade é %d", idade); // Saida de dados
  
  return 0;
}
