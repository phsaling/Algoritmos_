#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, maiorAltura = 1.0, menorAltura = 1.0;

    printf("\nInforme a altura de 15 pessoas.\n");

    for (int i = 1; i <= 15 ; i++){

        printf("\nInforme a altura da pessoa %d.\n",i);
        scanf("%f",&altura);

            if (altura <= menorAltura){

                menorAltura = altura;
            }

            if (altura >= maiorAltura){

                maiorAltura = altura;
            }
    }

    printf("\nA maior altura eh: %.2f.\nA menor altura eh: %.2f.\n",maiorAltura,menorAltura);
}
