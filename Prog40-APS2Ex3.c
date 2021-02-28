/*3) Faca um programa para calcular a quantidade necessária de latas de tinta para pintar
uma parede com X metros de largura por H metros de altura. Também é informada a altura e largura da
porta e das janelas e a quantidade de janelas. As janelas possuem o mesmo tamanho.
O usuário informa o consumo de tinta por metro quadrado e a quantidade de litros de tinta de uma lata.
Indicar a quantidade inteira para o número de latas de tinta necessário (arredondar o valor para o próximo inteiro).*/

#include<stdio.h>

int main(void)

{
    float largP, alturaP, TotalP, PinturaTotal;
    float largJan, alturaJan, TotalJan;
    int numPort, numJan, NumTdLatas;
    float largPort, alturaPort, TotalPort;
    float consTintM4, litrosLata, NumerDTinta;

    printf("Informe a largura da parede: ");
    scanf("%f",& largP);
    printf("Informe a altura da parede: ");
    scanf("%f",& alturaP);
    printf("Informe o numero de janelas: ");
    scanf("%d",& numJan);
    printf("Informe a largura da janela: ");
    scanf("%f",& largJan);
    printf("Informe a altura da janela: ");
    scanf("%f",& alturaJan);
    printf("Informe o numero de portas: ");
    scanf("%d",& numPort);
    printf("Informe a altura da porta: ");
    scanf("%f",& alturaPort);
    printf("Informe a largura da porta: ");
    scanf("%f",& largPort);
    printf("Informe o consumo de tinta por metro quadrado: ");
    scanf("%f",& consTintM4);
    printf("Informe quantos litros vem em um lata de tinta: ");
    scanf("%f",& litrosLata);

    TotalP = largP * alturaP;
    TotalJan = numJan * (largJan * alturaJan);
    TotalPort = numPort * (largPort * alturaPort);
    PinturaTotal = (TotalP - TotalJan) - TotalPort;
    NumerDTinta = PinturaTotal / consTintM4;
    NumTdLatas = (int)((NumerDTinta / litrosLata) + 0.999999);
    printf("Numero de latas de tintas: %d",NumTdLatas);

    return(0);
}
