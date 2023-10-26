#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
int vetorA[5] = {1, 2, 3, 4, 5}, vetorB[5] = {6, 7, 8, 9, 1}, i, vetorSOMA[5];

for(i = 0; i < 5; i++){
    vetorSOMA[i] = vetorA[i] + vetorB[i];
}
printf("%i\n", vetorSOMA[0]);
printf("%i\n", vetorSOMA[1]);
printf("%i\n", vetorSOMA[2]);
printf("%i\n", vetorSOMA[3]);
printf("%i\n", vetorSOMA[4]);
}
