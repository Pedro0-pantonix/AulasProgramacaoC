#include <stdio.h>

void main(){
int area, aux;
printf("informe a base maior");
scanf("%d", &aux);
area = aux;
printf("informe a base menor");
scanf("%d", &aux);
area += aux;
area = area / 2;
printf("informe a altura");
scanf("%d", &aux);
area = area * aux;
printf("a area do trapezio eh %d", area);

}
