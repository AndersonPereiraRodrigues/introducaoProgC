//Crie um algoritmo que imprima todos os numeros de 1 até 100 e a soma deles

#include <stdio.h>

void main()
{
    int i, soma = 0;

    for (i = 1; i <= 100; i++)
    {
        printf("%d  ", i);
        soma += i; //soma=soma+i;
    }
    printf("\n\nSoma: %d\n\n", soma);
}
