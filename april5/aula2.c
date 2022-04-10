#include <stdio.h>
/* 
Aula 2 de PRG1
 */
int main(){
    // Declaração de variáveis
    int altura=0, largura=0, comprimento=0, volume=0;
    float lucro=0.0, prejuizo=0.0;
    // Atribuição de valores
    printf("Altura: ");
    scanf("%d", &altura);
    printf("Largura: ");
    scanf("%d", &largura);
    printf("Comprimento: ");
    scanf("%d", &comprimento);
    printf("Lucro: ");
    scanf("%f", &lucro);
    printf("Prejuizo: ");
    scanf("%f", &prejuizo);
    // Calcular
    volume = altura*largura*comprimento;
    // Mostrar na tela
    printf("Dimensoes da caixa\nAltura: %d\nLargura: %d\nComprimento: %d\n",altura,largura,comprimento);
    printf("Volume: %d\n",volume);
    printf("Lucro: %.2f\nPrejuizo: %.2f\nMetade do lucro: %.2f\n",lucro,prejuizo,lucro/2.0);
    return 0;
}