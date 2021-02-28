/*
Tendo a quantidade de dados que serão armazendados em Gibibyte e a capacidade de cada disco rídigo (HD),
 determine quantos discos serão necessários para armazenar a quantidade de dados informada
*/

#include <stdio.h>
#include <math.h>

int main (void)

{
    float dados,dadohd;

    int hd;

    printf(" Informe a quantia de dados: ");
    scanf("%f",&dados);

    printf(" Informe a capacidade de cada hd: ");
    scanf("%f",&dadohd);


    hd = ceil(dados / dadohd);


    printf("A quantidade de hds e de : %d",hd);


    return(0);


}
