#include <stdio.h>

int main() {

    int num_medidas=0;
    float medida=0, minimo=0, maximo=0, media;

    do{
        printf("entre com a quantidade de medidas: ");
        scanf("%d", &num_medidas);
    }while(num_medidas<=0);

    for (int i=1;i<=num_medidas;i++){
        do{
            printf("insira a medida (%d): ", i);
            scanf("%f", &medida);
        }while(medida<=0);
        media += medida;
        if (i == 1){
            minimo = medida;
            maximo = medida;
        }
        if (medida<minimo)
            minimo = medida;
        else if (medida>maximo)
            maximo = medida;
    }

    media /= num_medidas;

    printf("\nMinimo: %.2f\nMaximo: %.2f\nMedia: %.2f\n", minimo, maximo, media);


    return 0;
}