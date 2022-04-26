#include <stdio.h>

int main(){

    int fator, i, resultado=1;

    printf("Realizar o fator de: ");
    scanf("%d", &fator);
    i = fator;
    while (i>1){
        resultado *= i;
        i--;
    }

    printf("\n%d! = %d\n", fator, resultado);

    return 0;
}