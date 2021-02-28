#include<stdio.h>
#include<stdlib.h>
#define comprimento C
#define largura L
#define PI 3,141592653589793

void main(){
    float C,L,total=0,r;

    while(scanf("%f %f",&C,&L)&&(C!=0||L!=0)){
        r=L/2;
        printf("%0.3f\n",r);
        r=r*r;
        r=r*C;
        printf("%0.3f\n",r);
        total=r*PI;
    }
    printf("%0.3f",total);
}
