#include <stdio.h>

void main(){
int c, f;
printf("informe a temperatura em Celsius");
scanf("%d", &c);
f = (9 * c + 160)/ 5;
printf("%d celsius eh %d fahrenheit", c, f);
}
