#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int delta(a, b, c){
    int result;
    result = pow(b, 2) - 4 * a * c;
    printf("%i", result);
    return result;
};

int main(){
int a, b, c;
printf("informe o valor de a, b e c");
scanf("%i %i %i" , &a, &b, &c);
delta(a, b, c);
};
