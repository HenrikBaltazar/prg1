#include <stdio.h>

int main(){

    int num;

    do {
        printf("Entre com um numero positivo: ");
        scanf("%d", &num);
    } while ( num <= 0);

    printf("\nvoce entrou com %d, que eh um numero positivo\n", num);

    return 0;
}