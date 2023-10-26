#include <stdio.h>
#include <math.h>


void main(){
int num, maior = 0, aux = 1;

printf("informe 10 valores\n");

while (aux <= 10){
    printf("informe um valor");
    scanf("%i", &num);
    if (num > maior){
        maior = num;
    }
    aux = aux + 1;
}
printf("o maior numero eh %i", maior);
}
