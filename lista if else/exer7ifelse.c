#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main (){
char sex;
char nome[10];
int age;
printf("informe o nome");
scanf("%s", &nome);
printf("informe o sexo");
scanf("%s", &sex);
printf("informe a idade");
scanf("%d", &age);

if (sex == 'F' && age <= 25){
    printf("eu aceito vc %s", nome);
    }else{
        printf("nao aceito");
    }
}

