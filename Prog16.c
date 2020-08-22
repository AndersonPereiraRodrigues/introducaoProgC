//Entrar com 2 numeros reais e imprimir a media aritmetica e imprimir o resultado

#include<stdio.h>

void main(){
    float nota1, nota2,media;

    printf("Digite nota 1: ");
    scanf("%f",&nota1);

    printf("Digite nota 2: ");
    scanf("%f",&nota2);

    media=(nota1+nota2)/2;

    printf("\nMedia: %0.3f\n\n",media);

    printf("Media: %0.3f\n",((nota1+nota2)/2));
}
