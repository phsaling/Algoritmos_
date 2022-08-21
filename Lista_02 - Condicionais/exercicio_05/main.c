#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;

    printf("LISTA 02: Exercicio - 05.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Informe um numero:\n");
    scanf("%d",&n1);
    printf("-------------------------------------------------------------------------\n");

    if (n1 % 2 == 0) {
        printf("\nPor ser par, soma-se 5: %d.\n",n1 + 5);
        printf("-------------------------------------------------------------------------\n");
    } else{
        printf("Por ser impar, soma-se 8: %d.\n",n1 + 8);
        printf("-------------------------------------------------------------------------\n");
    }
}
