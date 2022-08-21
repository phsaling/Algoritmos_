#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    int idFun;
    float aum, sal, salF, dif;
    char* cargo;
    char idchar[3];

    printf("LISTA 02: Exercicio - 15.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Informe o codigo do funcionario:\n");
    printf("101 - Gerente;\n");
    printf("102 - Engenheiro;\n");
    printf("103 - Tecnico;\n");
    printf("XXX - Outro;\n\n");

    scanf("%d",&idFun);

    /* if (strlen(idchar) == 3){
        idFun = atoi(idchar);
    } else
    printf("\nInforme outro numero.\n");

    printf("%d\n",idFun); */



    printf("-------------------------------------------------------------------------\n");



    if (idFun < 001 || idFun > 999)
    {
        /* Como limitar o valor de digitação para 03 digitos?*/

        printf("\nCodigo invalido. Informar outro codigo (formato - xxx).\n");

    }
    else if (idFun >= 001 || idFun <= 999)
    {
        printf("\nInforme o salario atual do funcionario:");
    scanf("%f",&sal);

        if (idFun == 101);
        {

            cargo = "Gerente";
            aum = 0.1;

        }
        if (idFun == 102)
        {

            cargo = "Engenheiro";
            aum = 0.2;

        }
        if (idFun == 103)
        {

            cargo = "Tecnico";
            aum = 0.3;

        }
        if (idFun != 101 && idFun != 102 && idFun != 103)
        {

            cargo = "Outro";
            aum = 0.4;

        }

        salF = sal * (1 + aum);

        dif = salF - sal;

        printf("\nSobre o cargo: cod.- %d titulo- %s\n ---- O salario antigo era: R$ %.2f;\n ---- O novo salario eh: R$ %.2f;\n ---- A diferenca entre os salarios eh: R$ %.2f.\n",idFun,cargo,sal,salF,dif);
        printf("-------------------------------------------------------------------------\n");

    }

}
