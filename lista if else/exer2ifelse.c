#include <stdio.h>
#include <math.h>

void main (){
int age;
printf("informe sua idade");
scanf("%d", &age);
if (age == 16 || age == 17){
    printf("seu voto eh facultativo");
    }else if (age < 70){
        printf("seu voto eh obrigtorio");
}else{
    printf("seu voto eh facultativo");
}
}
