/*  Estruturas de repetição  - For,  while,    do-while
                            para, enquanto, faça-enquanto */

/* Faca um programa que recebe 5 numeros e exiba a soma entre eles [Implementação do For] */

/* Faca um programa no qual receba e some os numeros inteiros ate que a entrada seja 0 [Implementação do While]*/

/* Faca um programa no qual receba e some os numeros inteiros ate que a entrada seja 0 [Implementacao do Do-while]*/

#include <stdio.h>

int main(void) {
  
  // Variaveis de entrada 
  int numero, soma = 0, op;

  printf("Qual implementacao quer analisar: \n(Para o FOR = 1, WHILE = 2, DO-WHILE = 3): ");
  scanf("%d", &op);

  switch(op){
    case 1:
    // Usando o FOR
    for(int i = 0; i < 5; i++){
      // Entrada
      printf("Informe um numero: ");
      scanf("%d", &numero);
  
      // processamento
      soma = numero + soma;
    }
      
    break;
    case 2: 
      // Usando o while
      while(numero != 0){
        // Entrada
        printf("Informe um numero: ");
        scanf("%d", &numero);
    
        // processamento
        soma = numero + soma;
      };
      
    break;
    case 3:
      // Usando o do-while

      do{
        // Entrada
        printf("Informe um numero: ");
        scanf("%d", &numero);

        // processamento
        soma = numero + soma;
      } while (numero != 0);
      
    break; 
    default: printf("Opcao invalida");
  };

  // saida
  printf("A soma e %d", soma);
  return 0;
}
