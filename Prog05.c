//desição dupla operação &&

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

    if (x > y && x > z)
    { //verdade se os dois forem verdade
        printf("X e maior que Y E X e maior que Z\n");
        printf("%d > %d E %d > %d", x, y, x, z);
    }
    else if (x > y && y > z)
    {
        printf("X e maior que Y E Y e maior que Z\n");
        printf("%d > %d E %d > %d", x, y, y, z);
    }
    else if (x == y && y == z)
    {
        printf("X igual a Y e Y igual a Z\n");
        printf("%d = %d E %d = %d", x, y, y, z);
    }
}
