#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altu, peso;
    char sexo;

    printf("LISTA 02: Exercicio - 07.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Informe o sexo (M ou F):\n");
    scanf("%c",&sexo);
    printf("\nInforme a altura:\n");
    scanf("%f",&altu);
    printf("-------------------------------------------------------------------------\n");

    if (sexo  == 'M' || sexo == 'm'){

        peso = (72.7 * altu) - 58.0;

        printf("\nO peso ideal para homem eh: %.1f kg.\n",peso);
        printf("-------------------------------------------------------------------------\n");

    } else if (sexo == 'F' || sexo == 'f'){

        peso = (62.1 * altu) - 44.7;

        printf("\nO peso ideal para homem eh: %.1f kg.\n",peso);
        printf("-------------------------------------------------------------------------\n");

    } else

        printf("\nSexo fora do padrao, digite novamente");
        printf("-------------------------------------------------------------------------\n");
}
