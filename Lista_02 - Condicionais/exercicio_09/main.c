#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mAl, n1, n2, n3;
    int idAl;
    char* nome;

    printf("LISTA 02: Exercicio - 09.\n\n");

    printf("-------------------------------------------------------------------------\n");

    printf("Informe o RA do aluno.\n");
    printf("126578 - Fulano A.\n");
    printf("851231 - Fulano B.\n");
    printf("892135 - Fulano C.\n");
    printf("321562 - Fulano D.\n");
    printf("123854 - Fulano E.\n");
    scanf("%d",&idAl);

    printf("-------------------------------------------------------------------------\n");

    if ((idAl != 126578) && (idAl != 851231) && (idAl != 892135) && (idAl != 321562) && (idAl != 123854))
    {
        printf("\nRA invalido. Favor informar um numero de identificacao valido.\n");
        printf("-------------------------------------------------------------------------\n");

    }
    else if ((idAl == 126578) || (idAl == 851231) || (idAl == 892135) || (idAl == 321562) || (idAl == 123854))
    {
            if (idAl = 126578){
                nome = "Fulano A.";
            } else if (idAl = 851231){
                nome = "Fulano B.";
            }else if (idAl = 892135){
                nome = "Fulano C.";
            }else if (idAl = 321562){
                nome = "Fulano D.";
            }else if (idAl = 123854){
                nome = "Fulano E.";
            }
        printf("\nInforme as 3 notas do aluno %d.",idAl);
        printf("\nN1:");
        scanf("%f",&n1);
        printf("\nN2:");
        scanf("%f",&n2);
        printf("\nN3:");
        scanf("%f",&n3);

        printf("-------------------------------------------------------------------------\n");

        mAl = (n1 + n2 + n3) / 3.0;
        printf("\n%.1f\n",mAl);

        if (mAl < 7.0 && mAl >= 5.0)
        {

            printf("\nA nota final do aluno %d - %s eh: %.1f. Situacao: Exame.\n",idAl,nome,mAl);
            printf("-------------------------------------------------------------------------\n");

        }
        else if (mAl < 5.0)
        {

            printf("\nA nota final do aluno %d - %s eh: %.1f. Situacao: Reprovado.\n",idAl,nome,mAl);
            printf("-------------------------------------------------------------------------\n");

        }
        else

            printf("\nA nota final do aluno %d - %s eh: %.1f. Situacao: Aprovado.\n",idAl,nome,mAl);
            printf("-------------------------------------------------------------------------\n");




    }

}
