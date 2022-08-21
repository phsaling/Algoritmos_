#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosUsuario, numerosMaiores8;


    printf("\nInforme 20 numeros.\n");

    for (int i = 0; i < 20; i++){


        printf("\nNumero %d:\n",i);
        scanf("%d",&numerosUsuario);

        if (numerosUsuario > 8){

            numerosMaiores8++;

        }

    }

    printf("\n%d numeros sao maiores que 8.\n",numerosMaiores8);
}
