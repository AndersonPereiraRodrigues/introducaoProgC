/*  4.	Elabore um programa que, a partir de um dia, mês e ano fornecidos,
valide se eles compoem uma data valida. Não deixe de considerar os meses
com 30 ou 31 dias, e o ano tratamento de ano bissexto. Todas as variáveis
criadas devem ser do tipo int.
*/
#include <stdio.h>

int main()
{
    int dia=0; /*Variavel para receber o dia do mês*/
    int mes=0; /*Variavel para receber o mês do ano*/
    int ano=0; /*Variavel para receber o ano*/
    int bissexto;

    printf ("Digite o dia, mes e ano no formato ddmmaaaa: \n"); /*Entrada do dia, do mês e do ano*/
    scanf ("%i %i %i", &dia, &mes , &ano); /*Leitura do dia, do mês e do ano*/

    if(((ano % 4) == 0) && ((ano % 100) !=0 ) || ((ano%400)==0))
        bissexto = 1;
    else
        bissexto = 0;

    if (mes>12||mes<1) /*Conferir se o mes é maior que 12 e menor que 1*/
    {
        printf ("\nMes invalido!\n"); /*Solicita digitar o mês novamete caso esteja fora do padrão*/
    }

    if(dia > 31)
    {
        printf("\n %i / %i / %i valor nao válido.\n\n",dia,mes,ano);
    }

    if(bissexto == 1 && (mes == 2))
    {
        if(dia <= 29)
        {
            printf("\n %i / %i / %i compoem uma data valida.\n\n",dia,mes,ano);
        }
        else if(dia > 29)
        {
            printf("\n %i / %i / %i nao compoem uma data valida.\n\n",dia,mes,ano);
        }
    }
    else if(bissexto == 0 && (mes == 2))
    {
        if(dia <= 28)
        {
            printf("\n %i / %i / %i compoem uma data valida.\n\n",dia,mes,ano);
        }
        else if(dia > 28)
        {
            printf("\n %i / %i / %i nao compoem uma data valida.\n\n",dia,mes,ano);
        }
    }

    if ((mes == 12 || mes == 10 || mes == 8 || mes == 7 || mes == 5 || mes == 3 ||
        mes == 1 ) && (dia <=31))/*Conferir se o mes é maior que 12 e menor que 1*/
        printf ("\n valor valido!\n");
    else if (dia > 31)
        printf ("\n valor nao valido!\n"); /*Solicita digitar o mês novamete caso esteja fora do padrão*/
    else if (mes == 11 || mes == 9 || mes == 6 || mes == 4 && (dia <=30))/*Conferir se o mes é maior que 12 e menor que 1*/
        printf ("\n valor valido!\n");
    else if (dia > 30)
        printf ("\n valor nao valido!\n"); /*Solicita digitar o mês novamete caso esteja fora do padrão*/

    return 0;

}
