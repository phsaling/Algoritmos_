#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ano;
    float tImp, fipe, vImp;

    printf("LISTA 02: Exercicio - 14.\n\n");

    printf("-------------------------------------------------------------------------\n");

    printf("Informe o ano e o valor da Tabela F.I.P.E. do veiculo:\n");
    printf("Ano (formato - aaaa):");
    scanf("%d",&ano);
    printf("\nValor da Tabela F.I.P.E.:");
    scanf("%f",&fipe);

    printf("-------------------------------------------------------------------------\n");


    if (ano < 0001 || ano > 9999)
    {

        printf("\nO ano esta em formato incorreto, favor corrigir.\n");
        printf("-------------------------------------------------------------------------\n");

    }
    else if(ano >= 0001 || ano <= 9999)
    {
        if (ano < 1990)
        {

            tImp = 0.01;

        }
        if (ano >= 1990)
        {

            tImp = 0.015;
        }


        vImp = fipe * tImp;

        printf("\nO valor de imposto (taxa de: %.1f%%) a ser pago eh: R$ %.2f.\n",tImp*100,vImp);
        printf("-------------------------------------------------------------------------\n");

    }

}
