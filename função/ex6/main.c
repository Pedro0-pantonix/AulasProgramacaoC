#include <stdio.h>
#include <stdlib.h>
#include "potencia.h"

int main()
{
    int x, n;
    printf("informe o numero de baixo");
    scanf("%i", &x);
    printf("informe o valor enesimo");
    scanf("%i", &n);
    potencia(x, n);
}
