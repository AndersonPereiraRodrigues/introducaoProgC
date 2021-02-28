/*
) Ler o valor de fábrica de produto, o percentual de impostos e o percentual de lucro.
 Calcular o valor ao consumidor deste produto. Apresentar o valor ao consumidor e o valor dos impostos.
Desafio: Fazer utilizando apenas 3 variáveis ou 4.

*/

#include <stdio.h>

int main (void)

{
    float Pimposto, Plucro, salario;

    printf("Informe o salario: ");
    scanf("%f",&salario);

    printf("Informe o percentual de impostos, ex: 10 para 10%: ");
    scanf("%f",&Pimposto);

    printf("Informe o percentual de lucros , ex: 10 para 10%: ");
    scanf("%f",&Plucro);

    Pimposto = salario * Pimposto/100;

    salario = salario - Pimposto;

    salario = salario + (salario * Plucro/100);


    printf("O total do valor do salario es de R$: %.2f\n",salario);
    printf("O total do valor do imposto es de R$: %.2f\n",Pimposto);
    return(0);

}
