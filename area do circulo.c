#include <stdio.h>

int main() {

  double raio, resultado;

  printf("calcule a área de um circulo, Insira um numero:\n");
  scanf("%lf", &raio);
  resultado = 3.14159*(raio*raio);
  printf("A área do seu circulo é: %lf.4", resultado);
  return 0;
  
}