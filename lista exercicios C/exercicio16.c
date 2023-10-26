#include <stdio.h>
#include <math.h>

void main(){
int x, area;
printf("informe a altura");
scanf("%d", &x);
area = x;
printf("informe a base");
scanf("%d", &x);
area = area * x;
printf("area do triangulo eh: %d", area / 2);
}
