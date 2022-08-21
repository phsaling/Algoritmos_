#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;

    printf("LISTA 02: Exercicio - 04.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Informe um numero:");
    scanf("%d",&n1);
    printf("-------------------------------------------------------------------------\n");

    if (n1 > 0){
        printf("\nComo eh positivo, dobra o valor: %d.\n",n1 * 2);
        printf("-------------------------------------------------------------------------\n");
    } else {
        printf("\nPor ser negativo, triplica o valor: %d.\n",n1 * 3);
        printf("-------------------------------------------------------------------------\n");
    }
}
