#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 10;
    int d[tam];
    int contador;

    printf("\nInforme os valores para o vetor.\n");

    for (int i = 0; i < tam; i++){

        printf("\nInforme o valor do vetor[%d]:\n",i);
        scanf("%d",&d[i]);
        contador++;

    }

    for (int i = 0; i < contador; i++){

        if(d[i] > 0){

            printf("\nVetor [%d] = %d;",i,d[i]);
        }

    }
}
