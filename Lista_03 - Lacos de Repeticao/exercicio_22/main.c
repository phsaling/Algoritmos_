#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quilometragem, quilometragemTotal;
    char cidade[50];

    for (int i = 0; quilometragemTotal < 4000; i++){

        printf("\nInforme o nome da cidade de parada %d.\n",i);
        scanf("%s", cidade);

        printf("\nInforme a quilometragem percorrida:\n");
        scanf("%d",&quilometragem);

        quilometragemTotal = quilometragemTotal + quilometragem;

        printf("\nRestam ainda %d para chegar.\n",4000 - quilometragemTotal);

    }

    printf("\nParabens, voce concluiu a sua jornada pela BR 101.\n");
}
