#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int opcao, i;
    struct vaga{
        int numero, placa[10];
        int status;
    }park[10];
do{
    printf("escolha dentre as opcoes disponiveis:\n");
    printf("1 para entrada de carro\n");
    printf("2 para saida de carro\n");
    printf("3 para consulta de vagas\n");
    printf("4 para sair");
    scanf("%i", &opcao);

    switch(opcao)
    {
        case 1:
            printf("informe a placa");
            scanf("%i", &i);
            if (i > 0 && i < 10 && park[i].status != 1) {
                            park[i].numero = i;
                            printf("Placa do carro: ");
                            scanf("%i", &park[i].placa);
                            fflush(stdin);
                            park[i].status = 1;
            } else {
                printf("Vaga indisponivel");
            }
        break;
        case 2:
            printf("Vaga a ser desocupada: ");
                    scanf("%i", &i);
                    park[i].placa[10] = "0";
                    park[i].status = 0;
        break;
        case 3:
            printf("Vaga procurada: ");
                    scanf("%i", &i);
                    printf("\nPlaca do carro: %s\n", park[i].placa);
                    if(park[i].status==1){
                            printf("Status da vaga: %i\n", park[i].status);
                    } else {
                        park[i].status=0;
                        printf("Status da vaga: %i\n", park[i].status);
                    }
        break;
        }
}while (opcao != 4);
printf("obrigado por utilizar");
}


