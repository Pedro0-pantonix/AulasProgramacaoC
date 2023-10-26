#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
char sexo[5];
float altura,alturaM = 0,alturaF = 0;
int aux = 1, M, F;

while(aux <= 10){
    printf("qual sexo?");
    scanf("%s", &sexo);
    printf("informe a altura");
    scanf("%f", &altura);
    if(sexo == 'm'){
        alturaM = alturaM + altura;
        M = M + 1;
    }else{
        alturaF = alturaF + altura;
        F = F + 1;
    }
aux = aux + 1;
printf("%i", aux);
}
printf("media de altura masculina eh %f", alturaM / M);
printf("media de altura feminina eh %f", alturaF / F);
}
