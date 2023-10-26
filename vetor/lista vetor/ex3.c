#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
int vetor[8], i = 0;

printf("informe 8 numeros");

for(i = 0; i < 8; i++){
    scanf("%i", &vetor[i]);
}
printf("numeros informados na ordem inversa");

printf("%i\n", vetor[7]);
printf("%i\n", vetor[6]);
printf("%i\n", vetor[5]);
printf("%i\n", vetor[4]);
printf("%i\n", vetor[3]);
printf("%i\n", vetor[2]);
printf("%i\n", vetor[1]);
printf("%i\n", vetor[0]);

}
