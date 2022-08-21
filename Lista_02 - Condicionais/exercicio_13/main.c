#include <stdio.h>
#include <stdlib.h>


int main()
{

    float reais;
    int n1, n5, n10, n50, n100;


    printf("LISTA 02: Exercicio - 13.\n\n");

    printf("-------------------------------------------------------------------------\n");

    printf("Informe o valor em reais:\n");
    scanf("%f",&reais);

    n100 = reais/100;
    n50 = (reais - (n100 * 100))/50;
    n10 = (reais - ((n100 * 100)+(n50 * 50)))/10;
    n5 = (reais - ((n100 * 100)+(n50 * 50)+(n10 * 10)))/5;
    n1 = reais - ((n100 * 100)+(n50 * 50)+(n10 * 10) + (n5 * 5));

    if (reais < 0){
            printf("\nInformar um valor valido.\n");
    } else{

    printf("\nO valor informado foi R$ %.2f. Dividido entre as notas de 1, 5, 10, 50 e 100 reais, fica:\n",reais);
    printf("Notas de R$ 1,00 = %d.\n",n1);
    printf("Notas de R$ 5,00 = %d.\n",n5);
    printf("Notas de R$ 10,00 = %d.\n",n10);
    printf("Notas de R$ 50,00 = %d.\n",n50);
    printf("Notas de R$ 100,00 = %d.\n",n100);
    }


    printf("-------------------------------------------------------------------------\n");

}
