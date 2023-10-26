#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int decimetros = 0, centimetros = 0, milimetros = 0, metros;

int tamanho(int metros){
    centimetros = metros * 100;
    milimetros = metros * 1000;
    decimetros = metros * 10;
    return centimetros, decimetros, milimetros;
}

int main(){
printf("informe um valor em metros");
scanf("%i", &metros);
tamanho(metros);
printf("%i\n", &centimetros);
printf("%i\n", &milimetros);
printf("%i\n", &decimetros);
};
