#include <stdio.h>

int main(void)
{
    int i=0, soma=0,triangular;

    printf("\n Insira o valor triangular: ");
    scanf("%d", &triangular);
    
    while(soma <= triangular){
        i++;
        soma+=i;
    }

    printf("O proximo triangular e: %d\n", soma);

    return 0;
}