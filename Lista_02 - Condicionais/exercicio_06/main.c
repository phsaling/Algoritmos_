#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("LISTA 02: Exercicio - 06.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Informe tres valores inteiros diferentes:\n");
    printf("N1:\n");
    scanf("%d",&n1);
    printf("\nN2:\n");
    scanf("%d",&n2);
    printf("\nN3:\n");
    scanf("%d",&n3);
    printf("-------------------------------------------------------------------------\n");

    if (n1 == n2 || n2 == n3 || n1 == n3){
        printf("\nInforme valores diferentes\n.");
        printf("-------------------------------------------------------------------------\n");
    } else if (n1 > n2 && n1 > n3 && n2 > n3) {
        printf("\nA ordem eh: %d, %d, %d.\n",n1,n2,n3);
        printf("-------------------------------------------------------------------------\n");
    } else if (n1 > n2 && n1 > n3 && n3 > n2){
        printf("\nA ordem eh: %d, %d, %d.\n",n1,n3,n2);
        printf("-------------------------------------------------------------------------\n");
    } else if (n2 > n1 && n2 > n3 && n1 > n3){
        printf("\nA ordem eh: %d, %d, %d.\n",n2,n1,n3);
        printf("-------------------------------------------------------------------------\n");
    } else if (n2 > n1 && n2 > n3 && n3 > n1){
        printf("\nA ordem eh: %d, %d, %d.\n",n2,n3,n1);
        printf("-------------------------------------------------------------------------\n");
    } else if (n3 > n1 && n3 > n2 && n1 > n2){
        printf("\nA ordem eh: %d, %d, %d.\n",n3,n1,n2);
        printf("-------------------------------------------------------------------------\n");
    } else if (n3 > n1 && n3 > n2 && n2 > n1){
        printf("\nA ordem eh: %d, %d, %d.\n",n3,n2,n1);
        printf("-------------------------------------------------------------------------\n");
    }


}
