#include <stdio.h>


int main(){

    int idade=0, eleitor, teenager;
    
    printf("Put your age here: ");
    scanf("%d", &idade);
    teenager = (idade >= 13) && (idade <=19);
    eleitor = idade >= 16;
    printf ("\n1 is true, 0 is false:\nAre you a teenager?: %d\nAre you able to vote in Brazil? %d\n", teenager, eleitor);

    return 0;
}