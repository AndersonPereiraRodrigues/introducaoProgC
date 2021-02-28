/*
Leia dois valores que representam a velocidade (ciclos de processamento) de um processador.
 Determine o quanto por cento um é mais rápido que o outro.

*/

#include <stdio.h>

int main (void)

{

    float valorA, valorB,percentualA,percentualB;

    printf("Informe o primeiro valor: ");
    scanf("%f",&valorA);

    printf("Informe o segundo valor: ");
    scanf("%f",&valorB);


    percentualA = valorA / valorB * 100;

    percentualB = valorB / valorA * 100;



    if (percentualA > percentualB)
    {
        printf("O percentual do primeiro valor es %.2f%% maior do que o segundo valor",percentualB);

    }


    else
    {
         printf("O percentual do segundo valor es %.2f%% maior do que o primeiro valor",percentualA);
    }


    return(0);

}

