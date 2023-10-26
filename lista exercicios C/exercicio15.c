#include <stdio.h>
#include <math.h>

void main(){
int custo;
printf("informe o valor do carro");
scanf("%d", &custo);
printf("valor do percentual do distribuidor: %d RS\n", (custo/100)*28);
printf("valor dos impostos: %d RS\n", (custo/100)*45);
printf("valor final com os impostos eh de: %d RS\n", custo + (custo/100*28) + (custo/100*45));

}
