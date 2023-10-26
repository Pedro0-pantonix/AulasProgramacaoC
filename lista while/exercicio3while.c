#include <stdio.h>
#include <math.h>


void main(){
int soma = 0, aux = 1;

printf("informe 10 numeros\n");

while (aux <= 10){
    printf("informe um numero\n");
    scanf("%i", &soma);
    soma = soma + soma;
    aux = aux + 1;
}
printf("media dos numeros eh %i", soma / 10);
}
