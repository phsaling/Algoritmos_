#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mesasNaoFumantes, mesasFumantes, mesasNaoFumantes_Restantes = 25, mesasFumantes_Restantes = 25, tipoLocal;


    for (int i = 1; i <= 50; i++) {

        printf("\nInforme a opcao de mesa desejada:\n 1 - Fumantes;\n 2 - Nao Fumantes;\n");
        scanf("%d",&tipoLocal);

            if (tipoLocal == 1){

                mesasFumantes++;
                mesasFumantes_Restantes--;
                    if (mesasFumantes_Restantes < 0){

                        printf("\nTotal de mesas neste local atingido, favor escolher outra area.\n");

                    } else
                    {

                printf("\nMesa no local de fumantes selecionada.\nTotal de mesas nesta area restantes = %d;\nTotal de mesas nesta area selecionadas = %d;\n",mesasFumantes_Restantes,mesasFumantes-16);

                    }
            } else if (tipoLocal == 2){

                mesasNaoFumantes++;
                mesasNaoFumantes_Restantes--;
                    if (mesasNaoFumantes_Restantes < 0){

                        printf("\nTotal de mesas neste local atingido, favor escolher outra area.\n");

                    } else
                    {

                printf("\nMesa no local de nao fumantes selecionada.\nTotal de mesas nesta area restantes = %d;\nTotal de mesas nesta area selecionadas = %d;\n",mesasNaoFumantes_Restantes,mesasNaoFumantes);

                    }
            }
    }

    printf("\nTodas as mesas foram reservadas!\n");
}
