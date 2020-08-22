//entre com 2 numeros e efetue a soma, subtração, multiplicamçãoo e divisão dos dois numeros

#include <stdio.h>

void main()
{
    int x;
    int y;
    int soma;
    int subtracao;
    int multiplicacao;
    float divisao;

    printf("Informe valor x: ");
    scanf("%d", &x);
    printf("Informe valor y: ");
    scanf("%d", &y);

    soma = x + y;
    printf("Soma = %d\n", soma);

    subtracao = x - y;
    printf("Subtracao = %d\n", subtracao);

    multiplicacao = x * y;
    printf("Multiplicacao = %d\n", multiplicacao);

    divisao = (float)x / y; // caso especial
    printf("Divisao = %.3f\n", divisao);
}
