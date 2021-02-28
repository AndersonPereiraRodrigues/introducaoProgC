
#include <stdio.h>


int main(void)
{
    int ano;
    int dia, mes;

    printf("Informe dia/mes/ano(usando / para separar): ");
    scanf("%d/%d/%d",&dia,&mes,&ano);

    if(((ano % 4 == 0)&&(ano / 100 != 0))||(ano % 400 ==0))
    {
        printf("Ano bissesto\n");

        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if(dia>=1 && dia<=31 )
            {
                printf("Mes valido com 31 dias\n");
            }
            else
            {
                printf("Dia invalido\n");
            }
        }
        else if(mes==4 || mes==6 || mes==9 || mes==11)
        {
            if(dia>=1 && dia<=30)
            {
                printf("Mes valido com 30 dias\n");
            }
            else
            {
                printf("Dia invalido\n");
            }
        }
        else if(mes==2)
        {
            if(dia>=1 && dia<=29)
            {
                printf("Mes valido com 29 dias\n");
            }
            else
            {
                printf("Dia invalido\n");
            }
        }
        else
        {
            printf("Mes invalidos\n");
        }
    }
    else
    {
        printf("Nao Bissexto.\n");
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if(dia>=1 && dia<=31 )
            {
                printf("Mes valido com 31 dias\n");
            }
            else
            {
                printf("Dia invalido\n");
            }
        }
        else if(mes==4 || mes==6 || mes==9 || mes==11)
        {
            if(dia>=1 && dia<=30)
            {
                printf("Mes valido com 30 dias\n");
            }
            else
            {
                printf("Dia invalido\n");
            }
        }
        else if(mes==2)
        {
            if(dia>=1 && dia<=28)
            {
                printf("Mes valido com 28 dias\n");
            }
            else
            {
                printf("Dia invalido\n");
            }
        }
        else
        {
            printf("Mes invalidos\n");
        }

    }
    return(0);
}

