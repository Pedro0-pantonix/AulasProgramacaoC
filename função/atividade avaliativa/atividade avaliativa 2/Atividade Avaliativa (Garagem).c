#include <stdio.h>
#include <stdlib.h>

int main () {
    struct garagem {
        int status,vaga;
        char placa[10];
    }vagas[10];

    int escolha, aux;

    do {
        printf("\n1 - Entrada de carro\n");
        printf("2 - Saida de carro\n");
        printf("3 - Consulta de vagas\n");
        printf("4 - Finalizar\n");
        scanf("%i", &escolha);

            if (escolha != 4) {
printf("---------------------------------------------------------\n");
               switch (escolha) {
                case 1:
                    printf("Vaga a ser ocupada: ");
                    scanf("%i", &aux);
                        if (aux>=1 && aux<=10 && vagas[aux].status != 1) {
                                vagas[aux].vaga = aux;
                            printf("Placa do carro: ");
                            scanf("%s", &vagas[aux].placa);
                            fflush(stdin);
                            vagas[aux].status = 1;
                        } else {
                            printf("Vaga indisponivel!");
                        }
printf("\n---------------------------------------------------------\n");
                    break;
                case 2:
                    printf("Vaga a ser desocupada: ");
                    scanf("%i", &aux);
                    vagas[aux].placa[10] = "0";
                    vagas[aux].status = 0;
printf("\n---------------------------------------------------------\n");
                    break;
                case 3:
                    printf("Vaga procurada: ");
                    scanf("%i", &aux);
                        printf("\nPlaca do carro: %s\n", vagas[aux].placa);
                            if(vagas[aux].status==1){
                                printf("Status da vaga: %i\n", vagas[aux].status);
                            } else {
                                vagas[aux].status=0;
                                printf("Status da vaga: %i\n", vagas[aux].status);
                            }
printf("\n---------------------------------------------------------\n");
                    break;
                default:
                    printf("Opcao invalida!");
printf("\n---------------------------------------------------------\n");
                    break;

               }
            }
    } while (escolha != 4);
    printf("\nFim da execucao do programa :)");
    printf("\nObrigado por utilizar os servicos da Mateus Inc.!!!\n");
}
