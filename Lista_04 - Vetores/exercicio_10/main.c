#include <stdio.h>
#include <stdlib.h>

int selection_sort(int vetor[],int tam);

int main()
{

    int tam = 10;
    int vetor[tam];

    printf("\nInforme os valores do vetor.\n");

    for (int i = 0; i < tam; i++){

        printf("\nInforme o valor do vetor[%d]",i);
        scanf("%d", &vetor[i]);

    }

    selection_sort(vetor,tam);

    for (int i = 0; i < tam; i++){

        printf("\nVetor[%d] = %d.",i,vetor[i]);

    }
}

int selection_sort (int vetor[],int tam){

    int auxiliar;
    int min;

    // Colocar em ordem.
    for (int i = 0; i < tam; i++){

        min = i;

        for(int j = i + 1; j < tam; j++){

            if (vetor[min] > vetor[j]){

                min = j;
            }
        }

        // faz a troca entre os vetores e ordena.
        auxiliar = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = auxiliar;
    }

    return vetor[tam];
}
