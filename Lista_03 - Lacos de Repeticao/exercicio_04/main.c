#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int n;

    printf("Informe seu nome:\n");
    scanf("%s", nome);
    printf("Informe quantas vezes deve ser repetido:\n");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){

        printf("\n%s - %d.\n",nome,i);

    }
}
