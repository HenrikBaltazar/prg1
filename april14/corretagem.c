#include <stdio.h>

int main(){

    float valor, minimo = 30.00;

    printf("Insira o valor da transacao: ");
    scanf("%f",&valor);

    if (valor < 1000)
        printf("\nTaxa: R$%.2f\n", minimo);
    else if (valor < 2500.00)
        printf("\nTaxa: R$%.2f\n", minimo+30.00+valor*0.17);
    else if (valor <=6250.00)
        printf("\nTaxa: R$%.2f\n", minimo+56.00+valor*0.066);
    else if (valor <= 50000.00)
        printf("\nTaxa: R$%.2f\n", minimo+76.00+valor*0.034);
    else if (valor <= 500000.00)
        printf("\nTaxa: R$%.2f\n", minimo+155.00+valor*0.011);
    else
        printf("\nTaxa: R$%.2f\n", minimo+255.00+valor*0.009);
    return 0;
}