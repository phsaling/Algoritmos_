#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char resposta[50]; // buscar uma função que possibilite a comparação de uma string com uma resposta.

   while (strcmp(resposta,"sim") ){


        printf("\nOla tudo bem?\n");
        scanf(" %s", resposta);

    }

    printf("\nFico feliz que esteja bem!\n");

}
