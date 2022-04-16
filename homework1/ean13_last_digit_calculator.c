#include <stdio.h>

/*Rules:
enter first digit
enter second to seventh digits
enter last five digits
the verification digit is:
Sum(1): first + third + fifth + seventh + ninth + eleventh
Sum(2): second + fourth + sixth + eight + tenth +twelfth
last_digit = (((Sum(1) + 3*Sum(2))-1)%10)-9
*/

int main(){

    //Declacaracao de variaveis
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12, lastDigit;
    
    //Apresentacao
    printf("\n\n#                              ######                       #####                                                                \n#         ##    ####  #####    #     # #  ####  # #####    #     #   ##   #       ####  #    # #        ##   #####  ####  #####  \n#        #  #  #        #      #     # # #    # #   #      #        #  #  #      #    # #    # #       #  #    #   #    # #    # \n#       #    #  ####    #      #     # # #      #   #      #       #    # #      #      #    # #      #    #   #   #    # #    # \n#       ######      #   #      #     # # #  ### #   #      #       ###### #      #      #    # #      ######   #   #    # #####  \n#       #    # #    #   #      #     # # #    # #   #      #     # #    # #      #    # #    # #      #    #   #   #    # #   #  \n####### #    #  ####    #      ######  #  ####  #   #       #####  #    # ######  ####   ####  ###### #    #   #    ####  #    # \n\n\n");
    
    //Entrada de dados
    printf("Insira o codigo de barras sem o digito verificador: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);
    
    //Calculo do ultimo digito
    lastDigit = (d1+d3+d5+d7+d9+d11);
    lastDigit += ((d2+d4+d6+d8+d10+d12)*3);
    lastDigit -= 1;
    lastDigit %=10;
    lastDigit -=9;

    //Sempre positivo
    if (lastDigit<0)
        lastDigit *= (-1);

    //Resultado
    printf("\nDigito verificador: %d\n\n", lastDigit);

    return 0;
    
}