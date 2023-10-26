#include <stdio.h>
#include <math.h>

void main(){
int vet[8], x, y, i, soma = 0;
printf("informe 8 valores ao vetor");

for(i = 0; i < 8; i++){
    scanf("%i", &vet[i]);
}
printf("%i ", vet[0]);
printf("%i ", vet[1]);
printf("%i ", vet[2]);
printf("%i ", vet[3]);
printf("%i ", vet[4]);
printf("%i ", vet[5]);
printf("%i ", vet[6]);
printf("%i ", vet[7]);

printf("informe valores x e y para somar");
scanf("%i", &x);
scanf("%i", &y);

for(i = 0; i < 8; i++){
    if(i == x){
        soma += vet[i];
    }else if(i == y){
        soma += vet[i];
    }
}
printf("%i", soma);
}


