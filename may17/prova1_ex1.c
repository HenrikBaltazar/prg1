#include <stdio.h>

int main(void)
{
    int num,dezena,unidade;

    printf("\n Insira um valor inteiro entre 1-99: ");
    scanf("%d", &num);
    //divisão entre dezena e unidade
    dezena=num/10;
    unidade=num%10;
    printf("Numero por extenso: \"");
    if ( dezena == 1 ){
        switch (unidade)
        {
        case 0:
            printf("dez");
            break;
        case 1:
            printf("onze");
            break;
        case 2:
            printf("doze");
            break;
        case 3:
            printf("treze");
            break;
        case 4:
            printf("quatorze");
            break;
        case 5:
            printf("quinze");
            break;
        case 6:
            printf("dezesseis");
            break;
        case 7:
            printf("dezessete");
            break;
        case 8:
            printf("dezoito");
            break;
        case 9:
            printf("dezenove");
            break;
        default:
            break;
        }

    }else if (dezena > 1){
        switch (dezena)
        {
        case 2: printf("vinte");break;
        case 3: printf("trinta");break;
        case 4: printf("quarenta");break;
        case 5: printf("cinquenta");break;
        case 6: printf("sessenta");break;
        case 7: printf("setenta");break;
        case 8: printf("oitenta");break;
        case 9: printf("noventa");break;
        }
        if (unidade != 0){
            printf(" e ");
        }
    }
    if (dezena != 1){
        switch (unidade)
        {
        case 1: printf("um");break;
        case 2: printf("dois");break;
        case 3: printf("tres");break;
        case 4: printf("quatro");break;
        case 5: printf("cinco");break;
        case 6: printf("seis");break;
        case 7: printf("sete");break;
        case 8: printf("oito");break;
        case 9: printf("nove");break;
        }

    }
    printf("\"\n");
    return 0;
}