#include <stdio.h> // Biblioteca padrão de entrada e saída

// O compilador (GCC) faz a leitura do codigo fonte, verifica as bibliotecas importadas e gera um executavel para o SO que está executando

// Uma função que a partir do main que se executa o programa em C é executado
int main(void) {

  // Declaração e inicialização de variavel
  int idade = 0;

  // Função para imprimir algo na tela
  printf("Qual a sua idade: "); 

  scanf("%d", &idade); // Receber dados

  printf("\nA sua idade é %d", idade); // Saida de dados
  
  return 0;
}

// Em um projeto so se tem um main 
