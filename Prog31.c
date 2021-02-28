/*5) Implemente o operador OU exclusivo.
Por exemplo: Ler a informação se uma pessoa recebe vale alimentação (sim/não) e se
recebe auxilio transporte (sim/não). A pessoa só pode receber um desses benefícios.
Informar que ela está regularizada se recebe somente um desses benefícios.*/

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
