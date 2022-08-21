#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroFatorial, resposta;

    resposta = 1;
    for (int j = 0; j<=1;)
    {
        printf("\nInforme um numero para fazer o fatorial.\n");
        scanf("%d",&numeroFatorial);

        for (int i = 1; i <= numeroFatorial; i++)
        {


            resposta = resposta * i;


        }

        printf("\nO fatorial de %d eh = %d.\n",numeroFatorial, resposta);

        resposta = 1;

        printf("\n\nVoce deseja continuar? \n 1 - Sim;\n 2 - Nao;\n");
        scanf("%d",&j);

        while (j != 1 && j != 2)
        {
            printf("\nOpcao incorreta, favor responder corretamente.\n");

            printf("\n\nVoce deseja continuar? \n 1 - Sim;\n 2 - Nao;\n");
            scanf("%d",&j);
        }
    }
    printf("\nVoce saiu!\n");
}
