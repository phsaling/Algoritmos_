#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroAnimais, numeroGato, numeroCachorro, tipoAnimal;

    printf("\nInforme o numero de animais existentes na loja:\n");
    scanf("%d",&numeroAnimais);

    for (int i = 1; i <= numeroAnimais; i++){

        printf("\nInforme o tipo do animail %d.\nSendo:\n 1 - Cachorro;\n 2 - Gato;\n",i);
        scanf("%d",&tipoAnimal);

            if (tipoAnimal == 1){

                numeroCachorro++;
            }

            if (tipoAnimal == 2){

                numeroGato++;
            }
    }
    printf("\nNesta loja ha %d animais. Em que:\n%d Cachorros;\n%d Gatos.",numeroAnimais,numeroCachorro - 16,numeroGato);
}
/* Por algum motivo, o numero de cachorros está sendo acrescido em 16. O que fazer? */
