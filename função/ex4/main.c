#include <stdio.h>
#include <stdlib.h>
#include "maior.h"

int main()
{
    int num1, num2;

    printf("informe dois numeros");
    scanf("%i %i", &num1, &num2);
    maior(num1, num2);
}
