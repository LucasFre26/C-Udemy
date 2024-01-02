/* Estruturas condicionais if, else, else if
                           se, entao, entao se  */

#include <stdio.h>

int main(void) {

  // Declaracao de variaveis
  int idade = 0;

  // Entrada
  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  // Saida
  printf("Sua idade e %d, então voce e", idade);

  // Processamento e saida
  if(idade < 18){
    printf(" menor de idade.\n");
  } else if(idade > 18 && idade < 60){
    printf(" maior de idade.\n");
  } else {
    printf(" idoso");
  }
  
  return 0;
}
