/*1) Criar uma estrutura para armazenar uma data, como dia, mês e ano em variáveis separadas.
a) Criar um vetor desse tipo de estrutura.
b) Fazer uma funçao que armazenará os dados no vetor.
c) Fazer uma função que mostra os dados do vetor.
d) Fazer uma função que retorne a estrutura que contém o maior ano.*/

#include<stdio.h>
struct data//dado do tipo data
{
    int dia;//dados membros
    int mes;
    int ano;
};
void lerDados(struct data datas[],int tam);
void mostrarDados(struct data datas[],int tam);
struct data maiorAno(struct data datas[],int tam);

int main(void)
{
  int tam=3;
  struct data datas[tam];
  struct data maiorData;
  lerDados(datas,tam);
  mostrarDados(datas,tam);
  maiorData=maiorAno(datas,tam);
  printf("Maior data: \n");
  printf("%d/%d/%d\n",maiorData.dia,maiorData.mes,maiorData.ano);

}

void lerDados(struct data datas[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Informe a data (dd/mm/aaaa): ");
        scanf("%d/%d/%d",&datas[i].dia,&datas[i].mes,&datas[i].ano);
    }
}

void mostrarDados(struct data datas[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d/%d/%d\n",datas[i].dia,datas[i].mes,datas[i].ano);
    }
}
struct data maiorAno(struct data datas[],int tam)
{
    int i;
    struct data retorno;
    retorno=datas[0];
    for(i=1;i<tam;i++)
    {
        if(datas[i].ano>retorno.ano)
        {
            retorno = datas[i];
        }
    }
    return(retorno);
}
