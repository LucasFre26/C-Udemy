/* Faca um programa que deteremine e mostre os cinco primeiros multiplos de 3, coseiderando numeros maiores que 0 */

#include <stdio.h>

int main(void) {

  int mul3 = 1, j = 1;

  printf("Os 3 primeiros múltiplos de 3 são: ");
  
  for(int i = 0; i < 3; i++){
    printf("- %d -", mul3);
    
    mul3 = 3 * j;

    j++;
  }
  
  return 0;
}

// Exercicio 2
/* Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo seu valor na tela, ate que seu valor seja 1000000 */

/* int main(void) {

  int cont = 0;

  while(cont < 1000000){
    cont = cont + 100;
    printf("- %d -\n", cont);
  }
  
  return 0;
} */

/* Faca um programa que leia 10 numeros e escreva o maior e menor valor lido */

// Exercicio 3
/* int main(void) {

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
 */
