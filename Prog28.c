/*2) Faça um programa que leia três valores representando os lados de um triângulo. Ordene esses valores em ordem crescente. Por exemplo: a para o maior valor, b para o subseqüente e c para o menor valor. A seguir determine e mostre o tipo de triângulo que esses lados formam de acordo com as seguintes definições:
	Se a > b + c – valores não formam um triângulo;
	Se a2 == b2 + c2 – triângulo retângulo;
	Se a2 > b2 + c2 – triângulo obtusângulo;
	Se a2 < b2 + c2 – triângulo acutângulo;
	Se a == b == c – triângulo eqüilátero;
	Se a == b e a != c, se a == c e a != b, e b == c e b != a – triângulo isósceles;
	Se a != b != c – triângulo escaleno;
Observação: um mesmo triângulo pode ser classificado em mais de um tipo. Portanto, utilizar ifs separados ao invés de ifs combinado em else ifs
*/
#include <stdio.h>


int main(void)
{
    int valor1,valor2,valor3,A,B,C;

    printf("Tamanho de um lado do triangulo: ");
    scanf("%i",&valor1);
    printf("Tamanho do segundo lado do triangulo: ");
    scanf("%i",&valor2);
    printf("Tamanho do terceiro lado do triangulo: ");
    scanf("%i",&valor3);

    //menor
    if(valor1 < valor2 && valor1 < valor3)
    {
        C = valor1;
    }
    else if(valor2 < valor3)
    {
        C = valor2;
    }
    else
    {
        C = valor3;
    }

    //meio
    if((valor1 > valor2 && valor1 < valor3) || (valor1 < valor2 && valor1 >valor3))
    {
        B = valor1;
    }
    else if((valor2 > valor1 && valor2 < valor3) || (valor2 < valor1 && valor2 > valor3))
    {
        B = valor2;
    }
    else
    {
        B = valor3;
    }

    //maior
    if(valor1 > valor2 && valor1 > valor3)
    {
        A = valor1;
    }
    else if(valor2 > valor1 && valor2>valor3)
    {
        A = valor2;
    }
    else
    {
        A = valor3;
    }

    //comparações
    if(A > B + C)
    {
        printf("Nao e triangulo.\n");
    }
    if(A * A == B * B + C * C)
    {
        printf("Triangulo retangulo.\n");
    }
    if(A * A > B * B + C * C)
    {
        printf("Triangulo obtusangulo.\n");
    }
    if(A * A < B * B + C * C)
    {
        printf("Triangulo acutangulo.\n");
    }
    if(A == B == C)
    {
        printf("Triangulo equilatero.\n");
    }
    if(A != B != C)
    {
        printf("Triangulo escaleno.\n\n");
    }
    return(0);
}
