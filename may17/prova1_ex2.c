#include <stdio.h>

int main(void)
{
    int n,i;
    float a,b,soma=0.0;

    printf("\n Insira a quantidade de valores do vetor: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++){
        printf("\n Insira o elemento %d do vetor A: ", i);
        scanf("%f", &a);
        printf("\n Insira o elemento %d do vetor B: ", i);
        scanf("%f", &b);
        soma+=a*b;
    }

    printf("Produto interno: %g\n", soma);

    return 0;
}