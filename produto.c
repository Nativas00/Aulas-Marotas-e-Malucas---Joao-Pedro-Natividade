#include <stdio.h>

int main() {

  int resposta, numero1, numero2;

  printf("Hora da multiplicação, Insira um numero:\n");
  scanf("%d", &numero1);
  
  printf("Agora insira outro numero:\n");
  scanf("%d", &numero2);

  resposta = numero1*numero2;
  
  printf("O resulado do seu produto é:\n%d\n",resposta);
  return 0;
  
}