//declarando, iniciando e imprimindo variaveis int,float,double,char,vetor int, string
#include<stdio.h>

void main(){
    int x=1;
    float y=3.4;
    double z=4.5;
    char a='D';
    int v[5]={15,2,6,7,3};
    char va[5]="ande";

    printf("Impressao das variaveis\n");
    printf("inteiro %d\n",x);
    printf("float %.3f\n",y);
    printf("double %.3lf\n",z);
    printf("char %c\n",a);
    printf("sting %s\n",va);
    printf("vetor numerico %d,%d,%d,%d,%d",v[0],v[1],v[2],v[3],v[4]);

}
