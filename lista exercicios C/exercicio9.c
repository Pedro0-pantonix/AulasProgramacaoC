#include <stdio.h>

void main(){
int branco,valido,nulo,tot;
printf("informe o total de votos brancos");
scanf("%d", &branco);
printf("informe o total de votos validos");
scanf("%d", &valido);
printf("informe o total de votos nulos");
scanf("%d", &nulo);

tot = branco + nulo + valido;

printf("percentual de votos brancos eh: %d %" ,tot/100*branco);
printf("percentual de votos validos eh: %d %" ,tot/100*valido);
printf("percentual de votos nulos eh: %d %" ,tot/100*nulo);

}
