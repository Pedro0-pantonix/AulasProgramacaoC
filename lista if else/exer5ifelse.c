#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main (){
int x;
printf("informe um numero");
scanf("%d", &x);

if (x % 2 == 0){
    printf("%d eh par", x);
    }else{
        printf("%d eh impar", x);
    }
}
