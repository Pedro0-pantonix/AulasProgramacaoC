#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int parimpar(int x){
    if(x % 2 == 0){
    printf("numero eh par");
    }else{
    printf("numero eh impar");
    }
}

int main(){
int x;
printf("informe o valor");
scanf("%i", &x);
parimpar(x);
}
