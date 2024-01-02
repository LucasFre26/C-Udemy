#include <stdio.h>

int main(void) {

  int idade = 0;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  printf("Sua idade e %d, então voce e", idade);

  if(idade < 18){
    printf(" menor de idade.\n");
  } else if(idade > 18 && idade < 60){
    printf(" maior de idade.\n");
  } else {
    printf(" idoso");
  }
  
  return 0;
}
