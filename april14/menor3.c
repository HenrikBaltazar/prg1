#include <stdio.h>

int main(){

    int a, b, c;

    printf("Insira os valores separados por enter: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b){
        if (a<c)
            printf ("\no primeiro valor eh o menor\n");
        else
            printf ("\no terceiro valor eh o menor\n");
    }else{
        if (b<c)
            printf ("\no segundo valor eh o menor\n");
        else
            printf ("\no terceiro valor eh o menor\n");

    }

    return 0;
}