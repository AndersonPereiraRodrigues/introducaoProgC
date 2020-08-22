//Desição duplas utilisando || e restrição com &&

#include <stdio.h>

void main()
{
    int x;
    int y;
    int z;

    printf("Informe valor x: ");
    scanf("%d", &x);
    printf("Informe valor y: ");
    scanf("%d", &y);
    printf("Informe valor z: ");
    scanf("%d", &z);

    if (x > y || x == z)
    { //verdade se 1 ou os 2 forem verdade
        if (x != z && x > y)
        { //verdade se os dois forem verdade
            printf("X e maior que Y\n");
            printf("%d > %d", x, y);
        }
        else if (x < y && x == z)
        {
            printf("X e igual a Z\n");
            printf("%d = %d", x, z);
        }
        else
        {
            printf("X maoir que Y e X igual a Z\n");
            printf("%d > %d , %d = %d", x, y, x, z);
        }
    }
    else if (z < y || y == x)
    {
        if (z < y && y != x)
        {
            printf("Z e menor que Y\n");
            printf("%d < %d", z, y);
        }
        else if (z > y && y == x)
        {
            printf("Y e igual a X\n");
            printf("%d = %d", y, x);
        }
        else
        {
            printf("Y e igual a X e Z menor que Y\n");
            printf("%d = %d , %d < %d", y, x, z, y);
        }
    }
    else
    {
        printf("Nao identificado\n");
    }
}
