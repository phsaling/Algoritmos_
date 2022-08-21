#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 10;

    int maior_idade, menor_idade, i, posicao_maior, posicao_menor;

    int vetor[tamanho];

    i=0;
    printf("\nInforme a idade do vetor[%d]:\n",i);
        scanf("%d",&menor_idade);
            posicao_menor=i;

    i=1;
    printf("\nInforme a idade do vetor[%d]:\n",i);
        scanf("%d",&maior_idade);
            posicao_maior=i;

    for (i = 2; i < tamanho; i++)
    {

        printf("\nInforme a idade do vetor[%d]:\n",i);
        scanf("%d",&vetor[i]);

        if (vetor[i] < menor_idade)
        {

            menor_idade = vetor[i];
            posicao_menor = i;

        }
        if (vetor[i] > maior_idade)
        {

            maior_idade = vetor[i];
            posicao_maior = i;

        }
    }

    printf("\nA maior idade eh a %d - vetor[%d];\nA menor idade eh a %d - vetor[%d];\n", maior_idade,posicao_maior,menor_idade,posicao_menor);
}
