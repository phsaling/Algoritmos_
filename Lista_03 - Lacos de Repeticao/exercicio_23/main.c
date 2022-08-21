#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeroCasas, numeroPessoas, numeroCanal, canal_3 = 0, canal_5 = 0, canal_8 = 0, canal_11 = 0, canal_13 = 0, totalPessoas,j= 1;
    float percCanal_3, percCanal_5, percCanal_8, percCanal_11, percCanal_13;

    printf("\nInforme o numero de casas participantes da pesquisa:\n");
    scanf("%f",&numeroCasas);

    for (int i = 1; i <= numeroCasas; i++){

    do{

        printf("\nInforme o canal assistido na casa %d (3 - 5 - 8 - 11 - 13).\n",i);
        scanf("%f",&numeroCanal);

            if (numeroCanal == 3)
                {
                    printf("\nInforme quantas pessoas assistem ao canal %.0f.\n", numeroCanal);
                    scanf("%f",&numeroPessoas);
                    canal_3 = canal_3 + numeroPessoas;
                    j = 2;
                } else if (numeroCanal == 5)
                {
                    printf("\nInforme quantas pessoas assistem ao canal %.0f.\n", numeroCanal);
                    scanf("%f",&numeroPessoas);
                    canal_5 = canal_5 + numeroPessoas;
                    j = 2;
                }else if (numeroCanal == 8)
                {
                    printf("\nInforme quantas pessoas assistem ao canal %.0f.\n", numeroCanal);
                    scanf("%f",&numeroPessoas);
                    canal_8 = canal_8 + numeroPessoas;
                    j = 2;
                }else if (numeroCanal == 11)
                {
                    printf("\nInforme quantas pessoas assistem ao canal %.0f.\n", numeroCanal);
                    scanf("%f",&numeroPessoas);
                    canal_11 = canal_11 + numeroPessoas;
                    j = 2;
                }else if (numeroCanal == 13)
                {
                    printf("\nInforme quantas pessoas assistem ao canal %.0f.\n", numeroCanal);
                    scanf("%f",&numeroPessoas);
                    canal_13 = canal_13 + numeroPessoas;
                    j = 2;
                } else
                {
                    printf("\nCanal nao participante da pesquisa. Favor revisar!\n");
                    j = 1;
                }

       }

       while (j ==1) ;

       totalPessoas = totalPessoas + numeroPessoas;
       percCanal_3 = (canal_3 / totalPessoas) *100.0;
       percCanal_5 = (canal_5 / totalPessoas) *100.0;
       percCanal_8 = (canal_8 / totalPessoas) *100.0;
       percCanal_11 = (canal_11 / totalPessoas) *100.0;
       percCanal_13 = (canal_13 / totalPessoas) *100.0;

    }

    printf("\nA audiencia ficou:\n   Canal 3: %.2f%%;\n   Canal 5: %.2f%%;\n   Canal 8: %.2f%%;\n   Canal 11: %.2f%%;\n   Canal 13: %.2f%%;\n",percCanal_3,percCanal_5,percCanal_8,percCanal_11,percCanal_13);

}
