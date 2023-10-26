#include <stdio.h>
#include <math.h>


void main(){
int peso, altura, imc;
printf("informe seu peso");
scanf("%d", &peso);

printf("informe sua altura");
scanf("%d", &altura);

altura = altura * altura;
imc = altura / peso;

printf("seu imc eh de %d", imc);
}
