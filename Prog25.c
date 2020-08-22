//Entrar com um numeros inteiros enquanto forem positivos e imprimir quantos numeros foram digitados

#include<stdio.h>

void main(){
    int i;
    int cont=0;
    printf("Digite numero: ");
    scanf("%d",&i);
    while(i > 0){
        cont++;
        printf("Digite numero: ");
        scanf("%d",&i);
    }
    printf("\nTotal: %d\n\n",cont);
}
