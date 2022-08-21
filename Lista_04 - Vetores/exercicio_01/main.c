#include <stdio.h>
#include <stdlib.h>

void ler_vetor1 (int v[],int tam);
void ler_vetor2 (int v[],int tam);
void soma_vetor3 (int v1[],int v2[],int v3[],int tam);
void print_vetor3 (int v[],int tam);

int main()
{
    int tam;

    printf("\nInforme o tamanho dos vetores:");
    scanf("%d",&tam);

    int vetor1[tam], vetor2[tam], vetor3[tam];

        ler_vetor1(vetor1,tam);

        ler_vetor2(vetor1,tam);

        soma_vetor3(vetor1,vetor2,vetor3,tam);

        print_vetor3(vetor3,tam);


}

void ler_vetor1 (int v[],int tam){

    for (int i = 0; i < tam; i++){

        printf("\nInforme o valor do vetor1[%d].\n",i);
        scanf("%d",&v[i]);
    }
}

void ler_vetor2 (int v[],int tam){

    for (int i = 0; i < tam; i++){

        printf("\nInforme o valor do vetor2[%d].\n",i);
        scanf("%d",&v[i]);
    }
}

void soma_vetor3 (int v1[],int v2[],int v3[],int tam){

    for (int i = 0; i < tam; i++){

        v3[i] = v1[i] + v2[i];
    }
}

void print_vetor3 (int v[],int tam){

    for (int i = 0; i < tam; i++){

        printf("\nVetor 3 [%d] = %d;\n", i, v[i]);

    }

}


