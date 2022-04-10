#include <stdio.h>
/* 
Aula 3 de PRG1
 */
int main(){
    int d1, d2, d3, n1, n2, n3;
    printf("\ninsira a primeira fracao: ");
    scanf("%d/%d", &n1, &d1);
    printf("\ninsira a segunda fracao: ");
    scanf("%d/%d", &n2, &d2);
/*     printf("\ninsira a terceira fracao: ");
    scanf("%d/%d", &n3, &d3);
    printf("\n\nvoce montou as fracoes: %d/%d; %d/%d; %d/%d\n", n1, d1, n2, d2, n3, d3); */
    printf("\nA soma das fracoes eh: %d/%d\n", n1 * d2 + n2 * d1, d1*d2);
    return 0;
}