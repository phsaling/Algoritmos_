#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];

    printf("Informe seu nome:\n");
    scanf("%s", nome);

    for(int i = 0; i < 10; i++){

        printf("\n%s - %d.\n",nome,i);

    }
}
