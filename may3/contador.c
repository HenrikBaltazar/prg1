#include <stdio.h>
#include <math.h>

int main(){

    int n, i;

    printf("Entre com o valor de n: ");
    scanf("%d", &n);

    printf("\nContar de 0 a %d: ", n);
    for(i=0;i<=n;i++){
        printf("%d ",i);
    }
    printf("\nContar de %d a 0: ", n);
    for(i=n;i>=0;i--){
        printf("%d ",i);
    }
    printf("\nContar de %d a 0: ", n-1);
    for(i=n-1;i>=0;i--){
        printf("%d ",i);
    }
    printf("\nContar de 0 a %d de 3 em 3: ", n);
    for(i=0;i<=n;i+=3){
        printf("%d ",i);
    }
    printf("\nContar potencias de 2: ");
    for(i=1;i<=512;i*=2){
        printf("%d ", i);
    }
    printf("\nQuadrados: ");
    for(i=1;i<=10;i++){
        printf("%d ", i*i);
    }
    printf("\nQuintas potencias: ");
    for(i=1;i<=10;i++){
        printf("%d ", (int) pow(i, 5));
    }
    printf("\n");

    return 0;
}