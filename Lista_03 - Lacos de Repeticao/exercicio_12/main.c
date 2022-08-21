#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosUsuario, numerosEntre0e100, numeros_101e200, numerosAcima200;



    printf("\nInforme 20 numeros.\n");

    for (int i = 0; i < 20; i++){


        printf("\nNumero %d:\n",i);
        scanf("%d",&numerosUsuario);

        if (numerosUsuario >= 0 && numerosUsuario <= 100){

            numerosEntre0e100++;

        }

        if ((numerosUsuario >= 101) && (numerosUsuario <= 200)) {

            numeros_101e200++;

        }
        if (numerosUsuario > 200) {

            numerosAcima200++;

        }

    }

    printf("\n%d numeros estao entre 0 e 100.\n",numerosEntre0e100);
    printf("\n%d numeros estao entre 101 e 200.\n",numeros_101e200 - 16); // Este código esta somando a variavel "numeros_101e200" a partir do 16, não entendo de onde a variavel esta puxando este valor.
    printf("\n%d numeros estao acima de 200.\n",numerosAcima200);
}
