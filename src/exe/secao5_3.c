/* Faca um programa que leia 10 numeros e escreva o maior e menor valor lido */

#include <stdio.h>

int main(void) {

  int num, maior, menor;

  for(int cont = 0; cont < 10; cont++){
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(cont == 0){
      maior = num;
      menor = num;
    };

    if(num > maior){
      maior = num;
    }; 
    
    if(num < menor){
      menor = num;
    };
  };

  printf("O maior numero foi %d \nO menor numero foi %d", maior, menor);
  
  return 0;
}
