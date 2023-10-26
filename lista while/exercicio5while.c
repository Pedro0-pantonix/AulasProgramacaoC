#include <stdio.h>
#include <math.h>


void main(){
int num, aux = 1;

printf("informe a tabuada");
scanf("%i", &num);

while (aux <= 10){
    printf("%i x %i eh %i\n", num, aux, num * aux);
    aux = aux + 1;
}
}
