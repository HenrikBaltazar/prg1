#include <stdio.h>

int main(){

    int n,i=1;

    printf("entre com o valor de n: ");
    scanf("%d", &n);

    while (i<=n) {
        i*=2;
    }
    printf("\nPotencia de 2 até n: %d\n", i);
    return 0;
}