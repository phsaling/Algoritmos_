#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 10, passo = 0;
    int volante[tam], acertos[passo], min, aux;
    int loto[] = {8,21,40,41,55};

  for (int k = 1; k == 1; ){

    printf("\nInforme os valores jogados.\n");

    for (int i = 0; i < tam; i++){

        printf("\nVolante %d:\n",i);
        scanf("%d",&volante[i]);

    }
   // Confere se houve acertos e grava em um novo vetor "acertos".
   for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (loto[i] == volante[j]){
                acertos[passo] = loto[i];
                passo+=1;

            }
        }
    }

    // Coloca os acertos em ordem
    for(int i=0; i<passo; i++){

        // encontra o �ndice do menor valor a partir
        // da posi��o inicio
        min = i;
        for(int j=i+1; j<passo; j++){
            if(acertos[min] > acertos[j]) {
                min = j;
            }
        }

        // faz a troca entre a posic�o inicio e a posi��o do m�nimo
        aux = acertos[i];
        acertos[i] = acertos[min];
        acertos[min] = aux;
    }


    // Imprime os valores
    if (passo != 0){
        printf("\nParabens. Voce acertou %d numeros.\n",passo);
        printf("\nOs numeros foram:\n");

            for (int i = 0; i<passo; i++){

                printf("\n%d ",acertos[i]);

        }

    } else if (passo == 0){

        printf("\nInfelizmente não acertou. Tente outra vez!\n");

    } else if (passo == 5){

        printf("Parabens. Voce acertou todos");
    }

   printf("\n\n\nVoce deseja continuar?\n 1 -- Sim;\n 2 -- Nao;\n");
   scanf("%d",&k);

  }

  printf("\nVoce saiu!\n");

}
