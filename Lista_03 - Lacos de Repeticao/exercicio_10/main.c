#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosUsuario, numerosPares;


    printf("\nInforme 20 numeros.\n");

    for (int i = 0; i < 20; i++){


        printf("\nNumero %d:\n",i);
        scanf("%d",&numerosUsuario);

        if (numerosUsuario % 2 == 0){

            numerosPares++;

        }

    }

    printf("\n%d numeros sao Pares.\n",numerosPares);
}
