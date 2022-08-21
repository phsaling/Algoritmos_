#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 20;
    int vetor[tamanho], par, impar, maior50, menor7;

    for(int i = 0; i < tamanho; i++){

        printf("\nInforme vetor[%d].",i);
        scanf("%d",&vetor[i]);

        if (vetor[i] % 2 == 0){

            par++;

        }

        if (vetor[i] % 2 != 0){

            impar++;

        }

        if (vetor[i] > 50){

            maior50++;
        }

        if(vetor[i] < 7){

            menor7++;

        }


    }

    printf("\na) Quantidade de numeros pares: %d;\nb) Quantidade de numeros impares: %d;\nc) Quantidade de numeros maiores que 50: %d;\nd) Quantidade de numeros menores que 7: %d.\n",par,impar,maior50,menor7);
}
