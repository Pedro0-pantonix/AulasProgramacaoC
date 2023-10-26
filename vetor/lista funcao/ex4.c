#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int maior(x, y){
    if (x > y){
        printf("%i eh o maior", x);
    }else{
        printf("%i eh o maior", y);
    }
}

int main(){
int x, y;

printf("informe 2 numeros");
scanf("%i %i", &x, &y);
maior(x, y);
}
