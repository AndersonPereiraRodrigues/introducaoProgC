//Ler nome e telefone e imprimi-lo

#include<stdio.h>

void main(){
    char nome[20],telefone[15];

    printf("Digite o nome: ");
    scanf("%s",nome);

    printf("Digite o Numero: ");
    scanf("%s",telefone);

    printf("Nome: %s\n",nome);
    printf("Telefone: %s\n",telefone);
}
