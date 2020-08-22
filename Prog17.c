//ler um numero inteiro se for maior ou igual a 20, então imprimir a metade do numero se menor imprimir "Menor que 20"

#include <stdio.h>

void main()
{
    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);

    if (num >= 20)
    {
        float div;

        div = num / 2.0;
        printf("\nMetade: %0.3f\n", div);

        printf("\nMetade: %0.3f\n", num / 2.0);
    }
    else
    {
        printf("\nMenor que 20\n");
    }
}
