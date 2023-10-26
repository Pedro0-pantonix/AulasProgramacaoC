#include <stdio.h>

void main(){
int valor,cot;
printf("informe o valor em real e a cotacao do dolar");
scanf("%d", &valor);
scanf("%d", &cot);
valor = (valor * cot);
printf("%d dolares\n", valor);
}
