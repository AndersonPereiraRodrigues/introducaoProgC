/*4) Fazer um algoritmo que leia um valor float que representa o sal�rio de uma pessoa.
Apresente separadamente os reais (parte inteira) e os centavos (parte decimal).
Observa��o: apresentar os centavos como inteiro de dois d�gitos (98 em vez de 0.98)
Exemplo:
Sal�rio informado: 1345.98
Reais: 1345
Centavos: 98*/

#include<stdio.h>

int main(void)
{
    float real, salario, decimal;
    int inteiro;

    printf("Informe o salario: ");
    scanf("%f",& salario);
    real = salario;
    inteiro = salario;
    decimal = salario - inteiro;
    salario = (float)decimal;
    printf("Salario infomado: %.2f\n", real);
    printf("Reais: %d\n", inteiro);
    printf("Centavos: %0.2f\n",decimal);

    return(0);
}
