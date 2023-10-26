#include <stdio.h>
#include <math.h>

void main(){
int A[10], B[10], C[10], i;

for(i = 0; i < 9; i++){
    if(A[i] > B[i]){
     C[i] = 1;
    }else if(A[i] == B[i]){
        C[i] = 0;
    }else if(A[i] > B[i]){
        C[i] = -1;
    }
}
printf("%i", C[i]);
}
