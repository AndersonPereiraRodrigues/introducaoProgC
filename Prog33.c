/*7) Ler um n�mero float. Se a parte decimal � maior ou igual a 0.5 arredond�-lo para o
pr�ximo inteiro, caso contr�rio trunc�-lo. N�o � permitido utilizar fun��es prontas.
Por exemplo:
Informado: 5.45
Mostrar: 5
Informado: 5.987
Mostrar: 6*/

#include <stdio.h>

int main(void)
{
    float A,parted,mostrar;

    printf("Informe um numero: ");
    scanf("%f",&A);

    parted = A - (int)A;

    if(parted > 0.5)
    {
       mostrar = (A - parted) + 1;
       printf("Arredondado: %.f\n",mostrar);
    }
    else
    {
        mostrar = A - parted;
        printf("Numero arredondado: %.f\n",mostrar);
    }
    return(0);
}
