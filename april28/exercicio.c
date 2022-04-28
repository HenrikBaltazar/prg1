#include <stdio.h>

int main(){

    int n,soma=1,i=1;

    do{
        printf("Insira um numero inteiro entre 10 e 20: ");
        scanf("%d", &n);
    } while (n<10 || n>20);

    while(i<n){
        i++;
        soma+=i;
    }

    printf("O resultado da soma eh: %d\n", soma);

    return 0;
}