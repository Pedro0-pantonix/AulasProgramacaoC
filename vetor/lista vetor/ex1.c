#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
int A[6] = {1, 0, 5, -2, 100, 7}, i, soma = 0;

for(i = 0; i < 6; i++){
    soma = soma + A[i];
}
printf("%i\n", soma);
printf("%i\n", A[0]);
printf("%i\n", A[1]);
printf("%i\n", A[2]);
printf("%i\n", A[3]);
printf("%i\n", A[4]);
printf("%i\n", A[5]);
}


