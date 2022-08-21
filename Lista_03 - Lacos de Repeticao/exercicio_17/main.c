#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoKg = 23.59, pesoPrato = 0.0001, valorBebida = 0.0001, valorTotal, acumuladorPrato, acumuladorBebida;
    int i = 1, querBebida, opcaoBebida;

    for (i = 1; (pesoPrato != 0.0 && valorBebida != 0.0); i++){


        printf("\nInforme o preço do prato em quilograma (pedido - %d):\n",i);
        scanf("%f",&pesoPrato);
        printf("\nGostaria de adicionar uma bebida ao pedido %d?\n 1 - Sim;\n 2 - Nao;\n",i);
        scanf("%d",&querBebida);

                for (;querBebida == 1;){

                    printf("\nInforme a bebida:\n 1 - Agua (R$ 5,00);\n 2 - Refrigerante (R$ 7,00);\n 3 - Cerveja (R$ 10,00);\n");
                    scanf("%d",&opcaoBebida);

                        if (opcaoBebida == 1){

                            valorBebida = 5.00;
                            querBebida = 2;

                        } else if (opcaoBebida == 2){

                            valorBebida = 7.00;
                            querBebida = 2;

                        } else if (opcaoBebida == 3){

                            valorBebida = 10.00;

                            querBebida = 2;

                        } else
                            printf("\nOpcao de bebida incorreta. Favor repetir.\n");
                }

                if (querBebida <= 2) {

                    valorBebida = 0.00;
                }
        valorTotal = (pesoPrato * 23.59) + valorBebida;
        acumuladorPrato = acumuladorPrato + (pesoPrato * 23.59);
        acumuladorBebida = acumuladorBebida + valorBebida;
    }

    printf("\nPEDIDO FINALIZADO!\n Resumo final:\n 1 - Valor total: R$ %.2f;\n 2 - Valor gasto em bebidas: R$ %.2f.\n 3 - Valor gasto em pratos: R$ %.2f.\n",valorTotal, acumuladorBebida, acumuladorPrato);

}
/* O PROGRAMA NÃO QUER ENTRAR NO SEGUNDO LAÇO DE REPETIÇÃO   */

