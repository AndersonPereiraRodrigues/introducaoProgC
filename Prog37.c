/*
) Ler dois números float. Fazer o resto da divisão do primeiro pelo segundo.
Do primeiro separar a parte inteira da parte dedcimal e mostrar.
Do segundo, apresentar a parte decimal como um inteiro de três dígitos.

*/

# include <stdio.h>

int main(void)
{
   float numA,numB;
   int resto,inteiroA,inteiroB,decimalB;

   printf("Informe o primeiro valor: ");
   scanf("%f",&numA);
   printf("Informe o segundo valor: ");
   scanf("%f",&numB);

   resto = (int)numA %(int)numB;

   inteiroA = (int)numA;

   inteiroB = (int)numB;

   decimalB = (numB - inteiroB)*1000;


   printf(" A resto da divisao es: %d\n",resto);
   printf(" A parte inteira do primeiro numero: %d\n",inteiroA);
   printf(" A parte decimal do segundo numero: %d\n",decimalB);

   return(0);

}
