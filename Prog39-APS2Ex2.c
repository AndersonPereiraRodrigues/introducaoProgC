/*2) Fazer um algoritmo para ler o salário de uma pessoa, o percentual de aumento e o percentual de descontos.
Os descontos são informados em percentual e incidem sobre o salário com aumento.
Calcular o novo salário e mostrá-lo na forma: Salário de 1234 reais e 65 centavos.
Observações:
a)	Orientar o usuário na forma como deve ser informado o percentual
(por exemplo, 10 para 10% ou 0.1 para 10%), ou seja, como que o programa espera que o valor seja informado. Isso é importante para definir a fórmula.
b)	Cálculos de percentual podem ser realizados por meio de regras de três.*/

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

