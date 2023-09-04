#include <stdio.h>

  int main(){

    int total, horas, minutos, segundos;

    printf("digite segundo, quantos você quiser\n");
    scanf("%d", &total);

    horas=total/3600;
    minutos=(total%3600)/60;
    segundos=(total%3600)%60;

    printf("Bom, a conversão foi essa: %d hora(s),%d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);
  
  return 0;
    
  }