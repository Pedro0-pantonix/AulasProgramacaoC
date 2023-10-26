#include <stdio.h>
#include <math.h>

void main (){
int x;
printf("informe um numero");
scanf("%d", &x);
if (x > 0){
printf("o triplo do numero eh: %d", x * 3);
}else{
printf("%d elevado ao quadrado eh %d", x, x * x);
}
}
