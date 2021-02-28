/*1) Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os seguintes campos:
marca: string de tamanho 15
ano: inteiro
cor: string de tamanho 10
preço: real

a) Escrever a definição da estrutura carro.
b) Declarar o vetor vetcarros do tipo da estrutura definida de tamanho 5.

Crie um menu para:
a) Ler os dados para o vetor vetcarros.
b) Imprimir os carros (marca, cor e ano) que tenham preço igual ou um determinado preço informado pelo usuário.
c) Defina um bloco de programa que leia a marca de um carro e imprima as informações de todos os carros dessa marca (preço, ano e cor).
d) Defina um bloco de programa que leia uma marca, ano e cor e informe se existe ou não um carro com essas características. Se existir, informar o preço.
*/
#include<stdio.h>
#include<stdlib.h>
struct carros
{
    char marca[15];
    int ano;
    char cor[10];
    int preco;
};
struct carros2
{
    char marca[15];
    int ano;
    char cor[10];
};

void cadastros(struct carros cadastro[],int i);
void mostrarcadastro(struct carros cadastro[],int i);
int compararmarcas(char S1[],char S2[]);
int compararstring(int S,int S2);

int main(void)
{
    char continuar,marca[15];
    int opcao,o;
    int i=1,valor,e;
    struct carros revendedoras[30];
    struct carros2 procura[1];


    do
    {
        system("cls");
        printf("Opcoes\n");
        printf("1-Cadastrar o carro\n");
        printf("2-Procurar por preco\n");
        printf("3-Procurar por marca\n");
        printf("4-Procurar o veiculo por marca, ano, cor\n");
        printf("0-Sair");
        printf("\nInforme sua opcao: ");
        scanf("%d",&opcao);

        switch(opcao)
        {
            case 1:
            {
                do
                {
                    cadastros(revendedoras,i);
                    mostrarcadastro(revendedoras,i);
                    i++;
                    printf("Caso queira efetuar outro cadastro (s/S para sim): ");
                    fflush(stdin);
                    scanf("%c",&continuar);
                }while(continuar=='s'||continuar=='S');
                break;
            }
            case 2:
            {
                do
                {
                    o=0;
                    system("cls");
                    printf("Informe o valor que esta procurando: ");
                    scanf("%d",&valor);
                    for(e=0;e<i;e++)
                    {
                        if(revendedoras[e].preco==valor)
                        {
                            o++;
                            mostrarcadastro(revendedoras,e);
                        }
                    }
                    if(o==0)
                    {
                        printf("\n\tNAO TEM NENHUM RESISTRO DE VEICULOS COM ESTE VALOR!!\n\n ");
                    }
                    printf("Caso queira fazer outra busca pro pelo nome (s/S para sim): ");
                    fflush(stdin);
                    scanf("%c",&continuar);
                }while(continuar=='s'||continuar=='S');
                break;

            }
            case 3:
            {
                do
                {
                    printf("Informe a marca procurada: ");
                    fflush(stdin);
                    gets(procura[1].marca);
                    compararmarcas(marca,revendedoras[15].marca);
                    if(compararmarcas>=0)
                    {
                        mostrarcadastro(revendedoras,i);
                    }
                    else
                    {
                        printf("\n\tNAO TEM NENHUM RESISTRO DE VEICULO COM ESTA MARCA!!\n\n\n");
                    }


                    printf("Caso queira fazer outra busca pro pelo nome (s/S para sim): ");
                    fflush(stdin);
                    scanf("%c",&continuar);
                }while(continuar=='s'||continuar=='S');
                break;


            }
            case 4:
            {
                do
                {
                    i=0;
                    printf("Digite a marca do veiculo: ");
                    fflush(stdin);
                    gets(procura[1].marca);
                    printf("\nDigite o ano do veiculo: ");
                    scanf("%d",&procura[1].ano);
                    printf("\nDigite a cor do veiculo: ");
                    fflush(stdin);
                    gets(procura[1].cor);

                    if(i==0)
                    {
                        while(revendedoras[i].marca!='\0')
                        {
                            int tam1=0,tam2=0,o=0,e=0;
                            while(revendedoras[i].marca[tam1]!='\0')
                            {
                                tam1++;
                            }
                            while(procura[1].marca[tam2]!='\0')
                            {
                                tam2++;
                            }
                            if(tam1 != tam2)
                            {
                                break;
                            }
                            else
                            {
                                while(revendedoras[i].marca[e]!='\0')
                                {
                                    if(revendedoras[i].marca[e]!= procura[i].marca[e])
                                    {
                                        o++;
                                        break;
                                    }
                                    e++;
                                }
                                if(o==0)
                                {
                                    int tam1=0,tam2=0,e=0;
                                    while(revendedoras[i].cor[tam1]!='\0')
                                    {
                                        tam1++;
                                    }
                                    while(procura[1].cor[tam2]!='\0')
                                    {
                                        tam2++;
                                    }
                                    if(tam1 != tam2)
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        while(revendedoras[i].cor[e]!='\0')
                                        {
                                            if(revendedoras[i].cor[e]!= procura[1].cor[e])
                                            {
                                                o++;
                                                break;
                                            }
                                            e++;
                                        }
                                        if(o==0)
                                        {
                                            if(procura[1].ano==revendedoras[i].ano)
                                            {
                                                mostrarcadastro(revendedoras,i);
                                            }
                                            else
                                            {
                                                break;
                                            }

                                        }

                                    }
                                }
                            }
                            i++;
                        }
                    }
                    else
                    {
                        printf("\n\tNAO TEM NENHUM RESISTRO DESTE VEICULO!!\n\n");
                    }

                printf("Caso queira fazer outra busca pela marca, cor e ano (s/S para sim): ");
                fflush(stdin);
                scanf("%c",&continuar);
            }while(continuar=='s'||continuar=='S');
            break;
            case 0:
            {
                exit(0);
            }

            }
        }
        printf("Para trocar de opicao precione (S/s para sim): ");
        fflush(stdin);
        scanf("%c",&continuar);
    }while(continuar=='s'||continuar=='S');

}
void cadastros(struct carros cadastro[],int i)
{
    printf("\nDigite a marca do veiculo: ");
    fflush(stdin);
    gets(cadastro[i].marca);
    printf("\nDigite o ano do veiculo: ");
    scanf("%d",&cadastro[i].ano);
    printf("\nDigite a cor do veiculo: ");
    fflush(stdin);
    gets(cadastro[i].cor);
    printf("\nDigite o preco do veiculo: ");
    scanf("%d",&cadastro[i].preco);

}
void mostrarcadastro(struct carros cadastro[],int i)
{
    printf("\n\nVeiculo cadastrado:\n%s\n%d\n%s\n%d\n",cadastro[i].marca,cadastro[i].ano,cadastro[i].cor,cadastro[i].preco);
}
int compararmarcas(char S1[],char S2[])
{
    int tam1=0,tam2=0,i=0;
    while(S1[tam1]!='\0')
    {
        tam1++;
    }
    while(S2[tam2]!='\0')
    {
        tam2++;
    }
    if(tam1!= tam2)
    {
        return('a');
    }
    else
    {
        while(S1[i]!='\0')
        {
            if(S1[i]!= S2[i])
            {
                return('a');
            }
            i++;
        }
        return(i);
    }
}
int compararstring(int S,int S2)
{
    if(S==S2)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}


