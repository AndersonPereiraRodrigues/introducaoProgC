/*5) Implemente o operador OU exclusivo.
Por exemplo: Ler a informa��o se uma pessoa recebe vale alimenta��o (sim/n�o) e se
recebe auxilio transporte (sim/n�o). A pessoa s� pode receber um desses benef�cios.
Informar que ela est� regularizada se recebe somente um desses benef�cios.*/

#include <stdio.h>

int main(void)
{
    char valeAL,valeTrans;

    printf("Voce recebe vale alimentacao(S/N): ");
    scanf("%c",&valeAL);
    printf("Voce recebe vale transporte(S/N): ");
    scanf("%c",&valeTrans);


    if((valeAL == 'S' || valeAL == 's')&&(valeTrans == 'N' || valeTrans == 'n'))
    {
        printf("Regularizada.\n");
    }
    else if((valeAL == 'N' || valeAL == 'n')&&(valeTrans == 'S' ||valeTrans == 's'))
    {
        printf("Regularizada.\n");
    }
    else if((valeAL == 'S' || valeAL == 's')&&(valeTrans == 'S'||valeTrans == 's'))
    {
        printf("Irregular.\n");
    }
    return(0);
}
