//Entrar com numeros positivos e imprimir a media dos numeros digitados ao digitar um numero negativo

#include<stdio.h>

void main(){
    int cont=0;
    float soma=0.0,num;
    printf("Digite numero: ");
    scanf("%f",&num);
    while(num > 0){
        cont++;
        soma=soma+num; //soma+=num
        printf("Digite numero: ");
        scanf("%f",&num);
    }
    printf("\nMEDIA: %0.3f\n\n",(soma/cont));
}
