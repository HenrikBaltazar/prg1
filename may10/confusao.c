#include <stdio.h>

int main()
{
    int i = -10;
    unsigned int u = 10;

    printf("%u\n",(unsigned int)i);

    if (u>i){
        printf("A\n");
    }else{
        printf("B\n");
    }

    return 0;
}