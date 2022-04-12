#include <stdio.h>

int main(){

    int i = 5, j;
    j = 3*i + 2;

    printf("%d %d\n", i, j);

    printf("Antes: %d\n", i);


    i = 2 * i;

    printf("Depois: %d\n", i);

    return 0;
}