#include <stdio.h>
#include <math.h>


void main(){
int x;
printf("informe varios numeros\n");
printf("digite um numero negativo para parar\n");

do{
    printf("digite um numero");
    scanf("%i", &x);
}while(x > 0);
}
