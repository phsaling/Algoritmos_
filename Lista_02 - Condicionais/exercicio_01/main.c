#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("LISTA 02: Exercicio - 01.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Informe dois numeros inteiros:\n");
    printf("N1:\n");
    scanf("%d",&n1);
    printf("N2:\n");
    scanf("%d",&n2);
    printf("-------------------------------------------------------------------------\n");

    if ((n1 > n2) && (n1 != n2)){

        printf("\n N1 eh o maior.\n");
        printf("-------------------------------------------------------------------------\n");

    } else if ((n2 > n1) && (n1 != n2)){

        printf("\n N2 eh o maior.\n");
        printf("-------------------------------------------------------------------------\n");

    } else

        printf("\nOs numeros sao iguais.\n");



}
