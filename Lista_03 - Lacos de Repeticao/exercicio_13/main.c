#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosUsuario = 1, acumulador;

    printf("\nInforme uma sequencia numerica infinita.\n");

    for (int i = 0; numerosUsuario > 0 ;i++){

        printf("\nNumero %d:",i);
        scanf("%d", &numerosUsuario);

        acumulador = acumulador + numerosUsuario;

        printf("\nAte o momento a soma eh: %d.", acumulador);

    }

    printf("\n\nPrograma Finalizado!\nA soma final ficou: %d.\n",acumulador);
}
