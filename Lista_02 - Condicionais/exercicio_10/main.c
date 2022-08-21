#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    printf("LISTA 02: Exercicio - 10.\n\n");

    printf("-------------------------------------------------------------------------\n");

    printf("Informe dois numeros inteiros.\n");
    printf("\nN1:");
    scanf("%d",&n1);
    printf("\nN2:");
    scanf("%d",&n2);

    printf("-------------------------------------------------------------------------\n");

    if (n1 > n2 && n1 != n2) {

        printf("\nO maior eh = %d. A diferenca entre eles eh = %d.\n",n1,n1-n2);
        printf("-------------------------------------------------------------------------\n");

    }else if (n1 < n2 && n1 != n2){

        printf("\nO maior eh = %d. A diferenca entre eles eh = %d.\n",n2,n2-n1);
        printf("-------------------------------------------------------------------------\n");

    }else
    printf("\nOs numeros sao iguais. Diferenca = 0.\n");
    printf("-------------------------------------------------------------------------\n");

}
