#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main (){
int idade, peso;
printf("informe a idade");
scanf("%d",&idade);
scanf("%d", &peso);
if (idade > 18 && idade < 67 && peso > 50){
    printf("voce pode doar");
}else{
printf("voce nao pode doar");
}
}
