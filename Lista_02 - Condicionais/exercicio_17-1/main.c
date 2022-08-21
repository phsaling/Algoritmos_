#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdd, item;
    float vItem, vPedido;
    char* nItem;

    printf("LISTA 02: Exercicio - 17.\n\n");

    printf("-------------------------------------------------------------------------\n");
    printf("Informe o codigo do produto:\n");
    printf("    1 - Cachorro Quente;\n");
    printf("    2 - Bauru;\n");
    printf("    3 - Misto Quente;\n");
    printf("    4 - Hamburguer;\n");
    printf("    5 - Cheeseburguer;\n");
    printf("    6 - Refrigerante;\n\n");

    scanf("%d",&item);


    printf("-------------------------------------------------------------------------\n");

    if (item < 1 || item > 6){
        printf("\nProduto nao encontrado, favor informar uma das opcoes.\n");

    }  else if (item >= 1 || item <= 6) {

            printf("\nAgora informe a quantidade desejada:\n");
            scanf("%d",&qtdd);


            if (item == 1){
                nItem = "Cachorro_Quente";
                vItem = 11.00;
            }
            if (item == 2){
                nItem = "Bauru";
                vItem = 8.50;
            }
            if (item == 3){
                nItem = "Misto_Quente";
                vItem = 8.00;
            }
            if (item == 4){
                nItem = "Hamburguer";
                vItem = 9.00;
            }
            if (item == 5){
                nItem = "Cheeseburguer";
                vItem = 10.00;
            }
            if (item == 6){
                nItem = "Refrigerante";
                vItem = 4.50;
            }

            vPedido = qtdd * vItem;

            printf("\nO pedido solicitado foi:\n");
            printf(" ----- Produto: %d - %s;\n",item,nItem);
            printf(" ----- Valor Unitario: R$ %.2f;\n",vItem);
            printf(" ----- Quantidade Pedida: %d;\n",qtdd);
            printf(" ----- Valor Total: R$ %.2f;\n",vPedido);
            printf("-------------------------------------------------------------------------\n");
    }



}
