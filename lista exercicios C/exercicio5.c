#include <stdio.h>

void main () {
int idade, aux;
printf("informe sua idade em anos, meses e dias respectivamente");
scanf("%d",&aux);
idade=aux*365;
scanf("%d", &aux);
idade+=aux*30;
scanf("%d", &aux);
idade+=aux;
printf("sua idade em dias eh: %d\n", idade);
}

