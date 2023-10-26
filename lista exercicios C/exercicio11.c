#include <stdio.h>

void main(){
int nota, aux;
printf("informe a primeira nota");
scanf("%d", &aux);
nota = aux * 2;
printf("informe a segunda nota");
scanf("%d", &aux);
nota += aux * 3;
printf("informe a terceira nota");
scanf("%d", &aux);
nota += aux * 5;
nota = nota / 10;
printf("sua nota final eh de: %d", nota);
}
