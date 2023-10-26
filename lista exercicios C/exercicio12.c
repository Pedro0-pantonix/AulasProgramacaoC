#include <stdio.h>

void main(){
int nota, aux;
printf("informe primeira nota");
scanf("%d", &aux);
nota = aux;
printf("informe segunda nota");
scanf("%d", &aux);
nota += aux;
printf("informe a terceira nota");
scanf("%d", &aux);
nota += aux;
nota = nota / 3;
printf("media final de %d", nota);


}
