#include <stdio.h>

void main(){
int x, r, s;
//using variable X to receive A B C values, and sums to R and S as we use scanf//
printf("informe valor de A");
scanf("%d", &x);
r = x;
printf("informe valor de B");
scanf("%d", &x);
r += x;
r = r * r;
s = x;
printf("informe o valor de C");
scanf("%d", &x);
s += x;
s = s * s;
printf("resultado de S + R / 2 eh %d", (r + s) / 2);

}
