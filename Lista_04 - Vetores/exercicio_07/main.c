#include <stdio.h>
#include <stdlib.h>


void ordenar_vetor (int x[]);
int main()
{
    int r[10], s[10],passo=0, passo1 = 0, passo2 = 0;
    int x[passo];
    int r1[passo1], s1[passo2];



    for (int i = 0; i < 10; i++)
    {

        printf("\nInforme os valores para o vetor S[%d]:\n",i);
        scanf("%d",&s[i]);

    }
 // Aqui servirá para pular os numeros iguais, em S, e salvar em S1.
    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
        if (s[i] != s[j]){


             s1[passo1] = s[i];
        }
        }

    }
    for(int i =0; i < passo1; i++){
    printf("\n%d ",s1[i]);
    }

    for (int i = 0; i < 10; i++)
    {

        printf("\nInforme os valores para o vetor R[%d]:\n",i);
        scanf("%d",&r[i]);

    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (r[i] == s[j]){
                x[passo] = r[i];
                passo+=1;

            }
        }
    }

   //     ordenar_vetor (x);

        for (int i = 0; i < passo; i++){

            if (x[i] == x[i+1]){

                x[i+1]= 32123;
            }

        }

        for (int i = 0; i < passo; i++)
        {
            if (x[i] != 32123){

            printf("\nO valor do vetor x[%d] eh: %d.\n",i,x[i]);

            }

        }

}

/*void ordenar_vetor (int x[]){

    int tam = sizeof(x)/sizeof(int);
    int min,aux;

    for(int inicio=0; inicio<tam; inicio++){

        // encontra o �ndice do menor valor a partir
        // da posi��o inicio
        min = inicio;
        for(int j=inicio+1; j<tam; j++){
            if(x[min] < x[j]) {
                min = j;
            }
        }

        // faz a troca entre a posic�o inicio e a posi��o do m�nimo
        aux = x[inicio];
        x[inicio] = x[min];
        x[min] = aux;
    }
    for(int i=0;i<tam;i++) {
        printf("%d ", x[i]);
    }

}
*/


