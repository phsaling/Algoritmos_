#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tam = 5;
    char nome[tam][50];
    char nomeMenor[50];
    int idade[tam], idadeMenor = 1000;

    printf("\nInforme um nome e uma idade, o programa retornara o nome da menor idade.\n");

    for (int i = 0; i < 3; i++){

        printf("\nNome %d.\n",i);
        scanf("%s", nome[i][50]);
        printf("\nIdade %d.\n",i);
        scanf("%d", &idade[i]);

        if (idade < idadeMenor){

            idadeMenor = idade;

            strcpy(nomeMenor,nome); // Realiza a troca entre as strings, uma passa a "captar" os dados da outra, da mesma forma como ocorre com "idadeMenor" na linha superior.

        }


    }

    printf("\nO nome %s eh o que possui a menor idade, %d anos.\n", nomeMenor, idadeMenor);

}

