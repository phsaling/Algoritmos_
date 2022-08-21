#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("LISTA 02: Exercicio - 03.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Informe dois numeros:\n");
    printf("A:\n");
    scanf("%d",&a);
    printf("B:\n");
    scanf("%d",&b);
    printf("-------------------------------------------------------------------------\n");

    if (a == b){
        printf("\nComo sao iguais, soma-se os valores: %d.\n", a+b);
        printf("-------------------------------------------------------------------------\n");
    } else {
        printf("\nComo sao diferentes, multiplica-se os valores: %d.\n", a*b);
        printf("-------------------------------------------------------------------------\n");
    }
}
