#include <stdio.h>
#define TAU 6.28
#define DUZIA 12
/* 
Aula 3 de PRG1
 */
int main(){
    int grosa;

    printf(".2%f\n", TAU / 4.0);

    grosa = DUZIA * DUZIA;

    printf("O valor de uma grosa %d.\n", grosa);
    return 0;
}