#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosUsuario, numerosEntre0e100;


    printf("\nInforme 20 numeros.\n");

    for (int i = 0; i < 20; i++){


        printf("\nNumero %d:\n",i);
        scanf("%d",&numerosUsuario);

        if (numerosUsuario >= 0 && numerosUsuario <= 100){

            numerosEntre0e100++;

        }

    }

    printf("\n%d numeros estao entre 0 e 100.\n",numerosEntre0e100);
}
