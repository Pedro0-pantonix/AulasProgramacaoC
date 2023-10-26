#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int positivo(int x){
    int tipo;
    if (x > 0){
            printf("positivo");
    return ("%i eh positivo", x);
    }else{
        printf("negativo");
    return ("%i eh negativo", x);
    }

}

int main(){
int x;
printf("informe um valor");
scanf("%i", &x);
positivo(x);
}
