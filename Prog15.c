//Ler um numero inteiro e imprimir a sua terça parte (num/3)

#include <stdio.h>

void main()
{
    int num;
    float result;

    printf("Digite o numero: ");
    scanf("%d", &num);

    result = (num / 3.0);

    printf("A terca parte e: %0.3f\n\n", result);

    printf("A terca parte e: %0.3f\n", num / 3);
}
