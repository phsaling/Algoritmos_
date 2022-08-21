#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sMedio, credito, vCred;

    printf("LISTA 02: Exercicio - 16.\n\n");

    printf("-------------------------------------------------------------------------\n");

    printf("Informe o saldo medio do cliente.\n");
    scanf("%f",&sMedio);

    if (sMedio >= 0.0 && sMedio <=200.0)
    {

        printf("\nSaldo medio nao atingiu o minimo para o credito.\n");
        printf("-------------------------------------------------------------------------\n");

    }
    else if (sMedio> 200.0)
    {
        if (sMedio <= 400.0)
        {
            credito = 0.2;

        }
        if (sMedio > 400.0 && sMedio <= 600.0)
        {
            credito = 0.3;

        }
        if (sMedio > 600.0)
        {
            credito = 0.4;

        }

        vCred = sMedio * credito;

        printf("\nO cliente, com saldo medio de R$ %.2f, tera direito a R$ %.2f de credito (%.1f%%).\n", sMedio,vCred, credito*100);
        printf("-------------------------------------------------------------------------\n");
    }



}
