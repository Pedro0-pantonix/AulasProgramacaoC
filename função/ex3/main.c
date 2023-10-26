#include <stdio.h>
#include <stdlib.h>
#include "delta.h"

int main()
{
    int a, b, c;

    printf("informe a, b e c");
    scanf("%i %i %i", &a, &b, &c);
    delta(a, b, c);
}
