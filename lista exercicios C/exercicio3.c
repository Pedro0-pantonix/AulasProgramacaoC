#include <stdio.h>

void main(){
float comb, km;

printf("informe o combustivel gasto\n");
scanf("%f", &comb);
printf("informe quantos km foi percorrido\n");
scanf("%f", &km);



printf("consumo medio de: %f litros\n", km / comb);
}

