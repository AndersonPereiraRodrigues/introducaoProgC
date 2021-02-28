/*1) A contribui��o para o INSS � calculada da seguinte forma:
a) sal�rio bruto at� tr�s sal�rios m�nimos = INSS 8%
b) sal�rio bruto acima de tr�s sal�rios m�nimos = INSS 10%
c) para as contribui��es que seriam maiores que o sal�rio m�nimo, a import�ncia �
de um sal�rio m�nimo.
Elaborar um algoritmo que receba como entrada o sal�rio bruto, calcule o INSS e o
sal�rio l�quido restante e informe-os.*/

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
