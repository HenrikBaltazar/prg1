#include <stdio.h>
/* 
Aula 3 de PRG1
 */
int main(){
    int i = 3, j = 5, k = 2;
    float x = 5.0, y = 2.1;
    //Operacoes unarias
    printf("%d; %d\n", +i, -i);
    //Operacoes binarias
    printf("%d %d %d %d %d\n", i+j, i-j, i*j, i/j, i%j);
    printf("%.2f %.2f %.2f %.2f\n", x+y, x-y, x*y, x/y);
    printf ("%d\n", (i + j) * k);
    return 0;
}