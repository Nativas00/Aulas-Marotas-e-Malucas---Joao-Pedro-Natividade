#include <stdio.h>

int main() {

  int num1, num2, num3, num4, DIFF;

  printf("Calcule a diferença de resultado entre os numeros, digite dois numeros\n");
  scanf("%d", &num1);
  scanf("%d", &num2);
  
  printf("Agora digite outros dois numeros\n");
  scanf("%d", &num3);
  scanf("%d", &num4);

  DIFF = (num1*num2) - (num3*num4);

  printf("A diferença entre eles é:\n%d\n", DIFF);
  return 0;
  
}