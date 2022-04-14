#include <stdio.h>

int main(){
    float x;
    printf("Entre com um numero: \n");
    scanf("%f", &x);

    if (x>0.0)
        printf("Positivo!\n"); 
    else{
        if (x<0.0)
            printf("Negativo!\n");
        else
            printf("Zero!\n");
    }

    return 0;
}