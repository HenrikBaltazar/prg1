#include <stdio.h>

int main(){

    int i=10;

    printf("Contagem regressiva:");
    while (i>0) {
        printf(" %d ", i--);
    }
    printf("\n");
    return 0;
}