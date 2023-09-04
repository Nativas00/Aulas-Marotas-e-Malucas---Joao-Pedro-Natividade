#include <stdio.h>

  int main(){

    int total, ano, mes, dia;

    printf("digite dias, quantos dias quiser:\n");
    scanf("%d",&total);

    ano=total/365;
    mes=(total%365)/30;
    dia=(total%365)%30;

    printf("Bom, a conversão foi essa: %d Ano(s),%d mes(es) e %d dia(s)\n", ano, mes, dia);
  
  return 0;
    
  }