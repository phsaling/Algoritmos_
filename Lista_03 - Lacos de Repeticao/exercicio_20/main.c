#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroAnimais = 0, numeroCachorro = 0, numeroGato = 0, tipoAnimal = 0;

    printf("\nInforme a quantidade de animais na loja:\n");
    scanf("%d",&numeroAnimais);

    for (int i = 1; i <= numeroAnimais; i++){

        printf("\nInforme o tipo do animal %d:\n 1 - Cachorro; 2 - Gato.\n",i);
        scanf("%d",&tipoAnimal);

            if (tipoAnimal == 1)
            {
                numeroCachorro++;

            }else if (tipoAnimal == 2)
            {
                ++numeroGato;

            }else
            {
                printf("\nCodigo de animal invalido. Favor refazer.\n");
                i--;
            }
    }

    printf("\nPrograma finalizado!\nO numero de cachorro eh: %d;\nO numero de gatos eh: %d.\n",numeroCachorro,numeroGato);
}
