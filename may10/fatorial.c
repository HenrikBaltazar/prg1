#include <stdio.h>

int main()
{
    int num, i;
    long fat;

    printf("Entre com um inteiro: ");
    scanf("%d", &num);

    i = 1;
    fat = 1;
    while (i <= num) {
        fat *= i;
        i++;
    }

    printf("%d! = %ld\n", num, fat);

    return 0;
}
