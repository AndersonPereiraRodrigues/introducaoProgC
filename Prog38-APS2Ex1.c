/*1) Ler a quantidade de horas que uma pessoa utiliza por semana para estudar, trabalhar e dormir.
Calcular e mostrar o percentual que as horas utilizadas para essas atividades representam de uma semana.
Por exemplo:
Estudar = 30 horas
Trabalhar = 40 horas
Dormir = 70 horas
Calcular o percentual que cada umas dessas atividades representa considerando o total de horas de uma semana.*/

#include<stdio.h>
 int main(void)
 {
     float horas1, horas2, horas3;
     float perc1, perc2, perc3;

     printf("Informe a quantidade total de horas de estudo por semanal: ");
     scanf("%f",& horas1);
     printf("Informe a quantidades total de horas trabalha por semana: ");
     scanf("%f",& horas2);
     printf("Informe a quantidade total de horas semanais dormidas: ");
     scanf("%f",& horas3);

     perc1 = (168 * horas1)/100;
     printf("Percentual de estudo semanal: %.2f %%\n", perc1);
     perc2 = (168 * horas2) / 100;
     printf("Percentual de trabalho semanal: %.2f %%\n", perc2);
     perc3 = (168 * horas3) / 100;
     printf("Percentual hora dormida semanal: %.2f %%\n", perc3);

     return(0);
 }
