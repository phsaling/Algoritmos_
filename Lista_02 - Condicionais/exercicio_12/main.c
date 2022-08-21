#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("LISTA 02: Exercicio - 12.\n\n");

    printf("-------------------------------------------------------------------------\n");

    printf("Informe os 3 lados de um triangulo.\n");
    printf("\n\nOBS: O lado de um triangulo nao pode ser maior que a soma dos outros dois lados.\n\n");
    printf("X:\n");
    scanf("%d",&x);
    printf("Y:\n");
    scanf("%d",&y);
    printf("Z:\n");
    scanf("%d",&z);

    printf("-------------------------------------------------------------------------\n");


    if ((x > (y + z)) || (y > (x + z)) || (z > (x + y))){

        printf("\nEssas medidas nao respeitam as condicoes de um triangulo. Informar outros valores.\n");
        printf("-------------------------------------------------------------------------\n");

    }else if (x == y && y == z && x == z){

    printf("\nO triangulo eh do tipo EQUILATERO.\n");
    printf("-------------------------------------------------------------------------\n");

    }else if (x == y || y == z || x == z){

    printf("\nO triangulo eh do tipo ISOSCELES.\n");
    printf("-------------------------------------------------------------------------\n");

    }else if (x != y && y != z && x != z){

    printf("\nO triangulo eh do tipo ESCALENO.\n");
    printf("-------------------------------------------------------------------------\n");

    }else

    printf("\nO tipo de triangulo nao foi cadastrado.\n");
    printf("-------------------------------------------------------------------------\n");

}
