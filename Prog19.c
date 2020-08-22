// Algoritmo Calculadora

#include<stdio.h>

void main(){
    char resp;
    float numA,numB,saida;

    printf("\nCALCULADORA\n");
    printf("\n( + ) para somar (A+B)\n");
    printf("\n( - ) para subtração (A-B)\n");
    printf("\n( * ) para multiplicacao (A*B)\n");
    printf("\n( / ) para divisao (A/B)\n ");
    printf("\nDigite a sua opcao: ");

    scanf("%s",&resp);
    if(resp=='+'||resp=='-'||resp=='*'||resp=='/'){
        printf("\nDigite numero: ");
        scanf("%f",&numA);
        printf("\nDigite numero: ");
        scanf("%f",&numB);
        if(resp=='+'){
            saida=numA+numB;
        }
        else if(resp=='-'){
            saida=numA-numB;
        }
        else if(resp=='*'){
            saida=numA*numB;
        }
        else if(resp=='/'){
            if(numB!=0){
                saida=numA/numB;
            }
            else{
                printf("\nDivisao por 0\n");
            }
        }
        else{
            printf("\nResultado: %0.3f\n",saida);
        }
    }
    else{
        printf("\nOPERACAO INVALIDA!\n\n");
    }
}
