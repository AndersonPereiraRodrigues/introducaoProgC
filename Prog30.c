/*4) Um ano � bissexto se for divis�vel por 4 e n�o for divis�vel por 100. Tamb�m s�o
bissextos os divis�veis por 400. Escreva um algoritmo que determina se um ano
informado pelo usu�rio � bissexto.*/

#include <stdio.h>


int main(void)
{
    int ano;

    printf("Calculadora de Anos Bissestos.\n\n");
    printf("Informe um ano: ");
    scanf("%i",&ano);

    if(((ano % 4 == 0)&&(ano / 100 != 0))||(ano % 400 ==0))
    {
        printf("Ano bissesto");
    }
    else
    {
        printf("Nao Bissexto.\n");
    }
    return(0);
}
