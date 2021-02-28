/*2) Fazer um algoritmo para ler o sal�rio de uma pessoa, o percentual de aumento e o percentual de descontos.
Os descontos s�o informados em percentual e incidem sobre o sal�rio com aumento.
Calcular o novo sal�rio e mostr�-lo na forma: Sal�rio de 1234 reais e 65 centavos.
Observa��es:
a)	Orientar o usu�rio na forma como deve ser informado o percentual
(por exemplo, 10 para 10% ou 0.1 para 10%), ou seja, como que o programa espera que o valor seja informado. Isso � importante para definir a f�rmula.
b)	C�lculos de percentual podem ser realizados por meio de regras de tr�s.*/

#include<stdio.h>

int main(void)
{
    int salarioint,salarioresto;
    float salarioI, salarioA, salarioF;
    float taxaA, taxaD;


    printf("Informe o valor do salario inicial: ");
    scanf("%f",& salarioI);
    printf("Informe o percentual de aumento (10 para 10%): ");
    scanf("%f",& taxaA);
    printf("Informe o precentual de desconto(10 para 10%): ");
    scanf("%f",& taxaD);

    salarioA = salarioI + (salarioI * taxaA / 100 );
    salarioint = salarioA - (salarioA * taxaD / 100 );
    salarioF =  salarioA - (salarioA * taxaD / 100 );
    salarioresto = salarioF - salarioint;

    printf("Salario de %d reais e %d centavos", salarioint,salarioresto );

    return(0);
}

