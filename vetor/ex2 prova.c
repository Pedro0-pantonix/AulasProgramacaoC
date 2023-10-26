#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
char nome[30], email[30];
int i = 0, j = 0;

printf("informe seu nome completo");
gets(nome);
fflush(stdin);


    for(i = 0; i != '\0'; i++){
        if(nome[i] == 0){
            email[j] += nome[i];
        }else if(nome[i] == ' '){
        j++;
        email[j] += nome[i];
        }
    }

strcat (email, "@gmail.com");
printf("%s", email);
}
