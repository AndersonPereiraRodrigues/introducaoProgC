/*6) Ler um n�mero float, se o mesmo possui parte decimal arredond�-lo para o pr�ximo
inteiro. N�o � permitido utilizar fun��es prontas.
Por exemplo:
Informado: 5.005
Mostrar: 6
Informado: 5.00
Mostrar: 5*/

#include <stdio.h>


int main(void)
{
    float A,inteiro;

    printf("Informe um numero: ");
    scanf("%f",&A);

    if(A > (int) A)
    {
        inteiro = (int)A +1;
        printf("Numero arredondado: %.f\n",inteiro);
    }
    else
    {
        printf("Numero arredondado : %.f\n",A);
    }
    return(0);
}
