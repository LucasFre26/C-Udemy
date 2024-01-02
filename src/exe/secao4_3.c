// Leia quanto cada apostador apostou e retorne o valor respectivo que cada apostador recebera conforme a proporcao que gastou
#include <stdio.h>

int main(void) {

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
}
