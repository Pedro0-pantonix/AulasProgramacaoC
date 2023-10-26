#include <stdio.h>
#include <math.h>

void main(){
int x1, x2, y1, y2;
printf("informe o x1 e o x2");
scanf("%d", &x1);
scanf("%d", &x2);
printf("informe o y1 e o y2");
scanf("%d", &y1);
scanf("%d", &y2);
printf("a distancia entre os pontos eh:%d", sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2))));

}
