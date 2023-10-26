#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main (){
float prod;
printf("informe o valor do produto");
scanf("%f", &prod);

if (prod <= 20){
    printf("produto de valor %f tem preco de %f com 45 por cento de lucro", prod, prod +(prod/100)* 45);
    }else{
        printf("produto de valor %f tem preco de %f com 30 por cento de lucro",prod, prod + (prod/100) * 30);
    }
}
