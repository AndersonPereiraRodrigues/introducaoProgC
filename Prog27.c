/*1) A contribuição para o INSS é calculada da seguinte forma:
a) salário bruto até três salários mínimos = INSS 8%
b) salário bruto acima de três salários mínimos = INSS 10%
c) para as contribuições que seriam maiores que o salário mínimo, a importância é
de um salário mínimo.
Elaborar um algoritmo que receba como entrada o salário bruto, calcule o INSS e o
salário líquido restante e informe-os.*/

#include <stdio.h>

int main(void)
{
    float salarioB,salarioL,inss;

    printf("Informe o valor do seu salario bruto: ");
    scanf("%f",&salarioB);

    if(salarioB <= 2040)
    {
        inss = salarioB * 8/100;
        salarioL = salarioB - inss;

        printf("O valor a ser pago para o INSS e de R$ %.2f e o salario liquido sera de R$ %.2f.\n",inss,salarioL);
    }
    else if(salarioB > 2040 && salarioB <=6800)
    {
        inss = salarioB * 10/100;
        salarioL = salarioB - inss;

        printf("O valor a ser pago para o INSS e de R$ %.2f e o salario liquido e de R$ %.2f.\n",inss,salarioL);
    }
    else if (salarioB > 6800)
    {
        salarioL = salarioB - 680;
        printf("O valor a ser pago ao INSS sera de R$ 680,00 e o salario liquido e de R$ %.2f.\n",salarioL);
    }
    return(0);
}
