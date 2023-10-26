#include <stdio.h>
#include <math.h>

void main(){
int j, x;
printf("informe valor a ser finaciado");
scanf("%d", &x);
j = x;
printf("informe a taxa de juros");
scanf("%d", &x);
x = x/100;
j += j * x;
printf("informe o periodo");
scanf("%d", &x);
j += j * x;
printf("juros de: %d reais\n", j);

}
