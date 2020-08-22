//ler um numero e informar se é POSITIVO NEGATIVO ou NULO

#include <stdio.h>

void main()
{
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("\nNEGATIVO\n");
    }
    else if (num > 0)
    {
        printf("\nPOSITIVO\n");
    }
    else
    {
        printf("\nNULO\n");
    }
}
