#include <stdio.h>

void main(){
int num;
printf("escreva um numero.\n");
scanf("%d", &num);

printf("antecessor de %d eh %d\n", num, num - 1);
printf("sucessor de %d eh %d", num, num + 1);
}
