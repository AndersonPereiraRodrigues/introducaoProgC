//Ler um numero inteiro e imprimir seu sucessor e antecessor.
#include<stdio.h>

void main(){
    int num;
    int ant,suc;

    printf("Digite um numero inteiro: ");

    scanf("%d",&num);

    ant=num-1;
    suc=num+1;

    //Primeira Impressão

    printf("Numero: %d\n",num);
    printf("Antecessor: %d\n",ant);
    printf("Sucessor: %d\n\n",suc);

    //Segunda impressão
    printf("Numero: %d\nAntecessor: %d\nSucessor: %d\n",num,ant,suc);

}
