#include<stdio.h>
#include<stdlib.h>
#include"DIRETORIO DO ARQUIVO LEITURA"

struct cadastro
{
    char nome[15];
    int ano;
    char cor[15];
    float valor;
};
int main(void)
{
    struct cadastro registro,ler;
    int opcao,i,e;
    int S;

    printf("1-Para cadastrar\n");
    printf("2-Para ler cadastro\n");
    printf("Sua opcao:");
    fflush(stdin);
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:
        {
            printf("Nome:");
            fflush(stdin);
            gets(registro.nome);
            printf("\nAno:");
            scanf("%d",&registro.ano);
            printf("\nCor:");
            fflush(stdin);
            gets(registro.cor);
            printf("\nValor:");
            scanf("%f",&registro.valor);
            FILE *arquivo;
            arquivo=fopen("DIRETORIO DO AQUIVO DE LEITURA","ab");
            S=fwrite(&registro,sizeof(struct cadastro),1,arquivo);

            fclose(arquivo);
            system("pause");
            return 0;
        }
        case 2:
        {

            FILE *arquivo;
            arquivo = fopen("DIRETORIO DO AQUIVO DE LEITURA","rb");
            if(arquivo==NULL)
            {
                printf("Erro na abertura\n");
                system("pause");
                exit(1);
            }

            fread(&ler,sizeof(struct cadastro),3,arquivo);

            printf("%s\n%d\n%s\n%0.2f\n\n",ler.nome,ler.ano,ler.cor,ler.valor);
            fclose(arquivo);
            system("pause");
            return 0;
        }
    }
}
