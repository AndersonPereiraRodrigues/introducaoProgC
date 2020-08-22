//Ler 3 numeros reais e imprimir o maior

#include<stdio.h>

/*
void main(){
    float A,B,C;

    printf("Digite o 1-numero: ");
    scanf("%f",&A);
    printf("Digite o 2-numero: ");
    scanf("%f",&B);
    printf("Digite o 3-numero: ");
    scanf("%f",&C);

    if(A > B){
        if(A > C){
            printf("\nMAIOR: %0.3f\n",A);
        }
        else{
            printf("\nMAIOR: %0.3f\n",C);
        }
    }
    else{
        if(B > C){
            printf("\nMAIOR: %0.3f\n",B);
        }
        else{
            printf("\nMAIOR: %0.3f\n",C);
        }
    }
}*/

void main(){
    float A,B,C;

    printf("Digite o 1-numero: ");
    scanf("%f",&A);
    printf("Digite o 2-numero: ");
    scanf("%f",&B);
    printf("Digite o 3-numero: ");
    scanf("%f",&C);

    if(A > B && A > C){
        printf("\nMAIOR: %0.3f\n",A);
    }
    else{
        if(B > C){
            printf("\nMAIOR: %0.3f\n",B);
        }
        else{
            printf("\nMAIOR: %0.3f\n",C);
        }
    }
}
