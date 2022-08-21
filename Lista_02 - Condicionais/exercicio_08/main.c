#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float vEtq, vPgo;
    int mPgo, nPar;

    printf("LISTA 02: Exercicio - 08.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Informe o valor do produto:\n");
    scanf("%f",&vEtq);
    printf("\nEscolha o metodo de pagamento:");
    printf("\n 1 - A vista (dinheiro ou cheque); \n 2 - A vista (catao de credito); \n 3 - A prazo (2 x s/ juros); \n 4 - A prazo (+ de 2 x c/ juros compostos de 1,5%% a.m.);\n\n");
    scanf("%d",&mPgo);

    printf("-------------------------------------------------------------------------\n");


    if ((mPgo != 1) && (mPgo != 2) && (mPgo != 3) && (mPgo != 4))
    {
        printf("\nMetodo de pagamento invalido. Favor informar uma das opcoes.\n");
        printf("-------------------------------------------------------------------------\n");

    }
    else if (mPgo == 1)
    {

        vPgo = vEtq * 0.9;
        printf("\nMetodo de pagamento:1 - A vista (dinheiro ou cheque). Valor a pagar = R$ %.2f.\n",vPgo);
        printf("-------------------------------------------------------------------------\n");

    }
    else if (mPgo == 2)
    {

        vPgo = vEtq * 0.85;
        printf("\nMetodo de pagamento:2 - A vista (catao de credito). Valor a pagar = R$ %.2f.\n",vPgo);
        printf("-------------------------------------------------------------------------\n");

    }
    else if (mPgo == 3)
    {

        vPgo = vEtq / 2;
        printf("\nMetodo de pagamento:3 - A prazo (2 x s/ juros). Valor a pagar = 2 x R$ %.2f.\n",vPgo);
        printf("-------------------------------------------------------------------------\n");

    }
    else if (mPgo == 4)
    {
        printf("\nInforme o numero de parcelas:\n");
        scanf("%d",&nPar);
        printf("-------------------------------------------------------------------------\n");
        if (nPar <= 2)
        {
            printf("\nVolte ao inicio e selecione a opcao 3.\n");
            printf("-------------------------------------------------------------------------\n");

        }
        else if (nPar > 2.0){

            vPgo = (vEtq * pow((1+0.015),nPar)) / nPar;

        printf("\nMetodo de pagamento:4 - A prazo (+ de 2 x c/ juros compostos de 1,5%% a.m.). \nValor a pagar = %d x R$ %.2f.\n",nPar,vPgo);
        printf("-------------------------------------------------------------------------\n");
        }

    }

}
