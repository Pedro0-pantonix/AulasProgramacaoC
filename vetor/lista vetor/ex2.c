#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
int vet[6], soma = 0, i;

printf("informe 5 numeros");
for(i = 0; i < 5; i++){
    scanf("%i", &vet[i]);
    soma = soma + vet[i];
}
printf("soma dos numeros eh %i", soma);
}
