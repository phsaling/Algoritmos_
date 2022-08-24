#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


#define TAM 5

// STRUCTS

struct Livraria {
    char titulo[50];
    char autor[50];
    char editora[50];
    int ano_publicacao;
    int num_paginas;
    int cadastrado;
};

// PROTÓTIPOS DAS FUNÇÕES

struct Livraria le_livro ();
int menu ();
int cadastra_livro(struct Livraria livro[], int tam, struct Livraria novo_livro);
void imprime_livros (struct Livraria livro[], int tam);
void zera_cadastro(struct Livraria livro[], int tam);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    struct Livraria livro[TAM];
    int opcao;
    struct Livraria aux;

    zera_cadastro(livro,TAM);

    do{

    opcao = menu();

        switch (opcao){
        case 1:
            {
                 aux = le_livro();
                 cadastra_livro(livro, TAM, aux);
                 break;
            }
        case 2:
            {
                imprime_livros (livro, TAM);
                break;
            }
        case 3:
            {
                printf("\nVocê Saiu!");
            }
        }
    }while(opcao != 3);

} // FIM MAIN

struct Livraria le_livro (){

    struct Livraria aux;

    printf("\nInforme os dados do livro.\n");
    printf("\nTítulo: ");
    gets(aux.titulo);
    fflush(stdin);

    printf("\nNome do autor: ");
    gets(aux.autor);
    fflush(stdin);

    printf("\nNome da editora: ");
    gets(aux.editora);
    fflush(stdin);

    printf("\nAno de publicação: ");
    scanf("%d", &aux.ano_publicacao);
    fflush(stdin);

    printf("\nNº de páginas: ");
    scanf("%d", &aux.num_paginas);
    fflush(stdin);

    aux.cadastrado = 1;

    return aux;

}

int menu (){

    int opcao = 0;

    printf("\n\n--------------- MENU ---------------");
    printf("\n\n- 1 - Cadastrar Livro;");
    printf("\n\n- 2 - Imprime Livros Cadastrados;");
    printf("\n\n- 3 - Sair;");
    printf("\n\n------------------------------------");

    do
    {
        printf("\n\nInforme sua opção:");
        scanf("%d", &opcao);
        fflush(stdin);
    }
    while (opcao < 1 || opcao > 4);

    return opcao;

}

void imprime_livros (struct Livraria livro[], int tam){

    for (int i = 0; i < tam; i++)
    {
        if(livro[i].cadastrado == 1)
        {
            printf("\n\n---------------------------------------------");
            printf("\nLivro %d: ", i);
            printf("\nTítulo: %s;", livro[i].titulo);
            printf("\nAutor: %s;", livro[i].autor);
            printf("\nEditora: %s;", livro[i].editora);
            printf("\nNº de páginas: %d;", livro[i].num_paginas);
            printf("\nAno de publicação: %d;", livro[i].ano_publicacao);
        }
    }

}

int cadastra_livro(struct Livraria livro[], int tam, struct Livraria novo_livro){

    for (int i = 0; i < tam; i++){

        if(livro[i].cadastrado == 0){
            printf("\n%d\n",i);
            livro[i] = novo_livro;

            printf("\n%d\n", livro[i].cadastrado);

            return 1;

        }

    }

    return 0;

}

void zera_cadastro(struct Livraria livro[], int tam){

    for (int i = 0; i < tam; i++){

        livro[i].cadastrado = 0;
    }

}
