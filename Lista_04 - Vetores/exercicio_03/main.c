#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 8;
    int vetorA[tamanho], vetorB[tamanho];

    for(int i = 0; i < tamanho; i++){

        printf("\nInforme o valor do vetorA[%d].",i);
        scanf("%d",&vetorA[i]);

        vetorB[i] = vetorA[i] * 2;
    }
    for(int i = 0; i < tamanho; i++){

        printf("\nO valor do vetorB[%d] eh: %d.",i,vetorB[i]);

    }
}
