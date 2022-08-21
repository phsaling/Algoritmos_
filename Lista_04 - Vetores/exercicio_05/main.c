#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 10;
    int vetorA[tamanho], acumular_m15, acumular_i15, acumular_M15, contador_M15;
    acumular_m15 = 0;
    acumular_i15 = 0;
    acumular_M15 = 0;


    for(int i = 0; i < tamanho; i++){

        printf("\nInforme o valor do vetor[%d].",i);
        scanf("%d",&vetorA[i]);

        if (vetorA[i] < 15){

            acumular_m15 = acumular_m15 + vetorA[i];

        }
        if (vetorA[i] == 15){

            acumular_i15++;

        }
        if (vetorA[i] > 15){

            acumular_M15 = acumular_M15 + vetorA[i];
            contador_M15++;

        }
    }

    if (contador_M15 == 0){

        contador_M15 = 1;
    }

    printf("\na) A soma dos elementos armazenados que sao menores que 15: %d;\nb) A quantidade dos elementos armazenados que sao iguais a 15: %d;\nc) A media dos elementos armazenados no vetor que sao maiores que 15: %d.",acumular_m15,acumular_i15,(acumular_M15/contador_M15));
}
