/*4) Um ano é bissexto se for divisível por 4 e não for divisível por 100. Também são
bissextos os divisíveis por 400. Escreva um algoritmo que determina se um ano
informado pelo usuário é bissexto.*/

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
