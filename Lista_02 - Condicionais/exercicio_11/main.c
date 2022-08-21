#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nV, nHA;
    float sal, vHA;

    printf("LISTA 02: Exercicio - 11.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Informe o nivel do professor (1,2 ou 3):\n");
    scanf("%d",&nV);

    printf("-------------------------------------------------------------------------\n");



    if (nV != 1 && nV != 2 && nV != 3){

        printf("\nNivel invalido. Favor informar uma das opcoes.");

    }else {

        printf("\nInforme a quantidade de horas-aula exercidas pelo professor:\n");
    scanf("%d",&nHA);
    printf("-------------------------------------------------------------------------\n");

        if (nV == 1){

    vHA = 12.00;

    } if (nV == 2){

    vHA = 17.00;

    } if (nV == 3){

    vHA = 25.00;

    }

    sal = vHA * nHA * 4.5;

    printf("\nO profissional nivel %d, com hora-aula de R$ %.2f, recebe o salario de R$ %.2f.\n",nV,vHA,sal);
    printf("-------------------------------------------------------------------------\n");

    }
}
