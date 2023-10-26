#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main (){
int maca;
printf("vamo faze feirinha :)\n");
printf("quantas maca quer comprar?\n");
scanf("%d", &maca);

if (maca >= 12){
    printf("preco total de %d", maca * 1);
    }else{
        printf("preco total de %f", maca * 1.30);
    }
}
