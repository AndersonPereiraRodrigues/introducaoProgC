//Entre com 2 valores e informe qual a condição dos valores se é maior, menor, ou igual.

#include <stdio.h>

void main()
{
    int x;
    int y;

    printf("Informe valor x: ");
    scanf("%d", &x);
    printf("Informe valor y: ");
    scanf("%d", &y);

    if (x < y)
    { // se verdade entra
        printf("X e menor que Y\n");
        printf("%d < %d", x, y);
    }
    else if (x > y)
    {
        printf("X e maior que Y\n");
        printf("%d > %d", x, y);
    }
    else
    {
        printf("X e igual a Y\n");
        printf("%d = %d", x, y);
    }
}
