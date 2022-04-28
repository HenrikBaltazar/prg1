#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SEGREDO 10000

int main(){

    int segredo = 8, palpite,tentativas=0;
    srand(time(NULL)); //define a seed

    segredo = 1 + rand()%MAX_SEGREDO;
    //printf("%d\n", segredo);
    do {
        printf("Entre com seu palpite: ");
        scanf("%d", &palpite);
        if (palpite > segredo)
            printf("O segredo eh menor\n");
        if (palpite < segredo)
            printf("O segredo eh maior\n");
        tentativas++;
    } while (palpite != segredo && tentativas < 5);

    if (tentativas < 5)
        printf("Parabéns! Voce descobriu que o segredo eh %d!!\n", segredo);
    else
        printf("Voce perdeu, o numero era %d\n", segredo);
    return 0;
}