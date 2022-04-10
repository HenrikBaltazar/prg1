#include <stdio.h>

/* 
Programa para converter Fahrenheit para celsius
Formula
fahrengeit = (celsius - 32)*(5/9)
 */

int main(){
    float c,f;
    printf("Digite a Temperatura em Fahrenheit: ");
    scanf("%f",&f);
    c = (f - 32.0) * (5.0 / 9.0);
    printf("%.2f celsius\n", c);
    return 0;
}