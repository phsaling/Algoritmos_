#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valorProduto, valorCompra;
    int i, codigoProduto;

    for (i = 0; codigoProduto != 222 ;i++){

        printf("\nPara fechar a compra informe '222' como codigo do produto.\n");
        printf("\nInforme o codigo do produto(%d):\n",i);
        scanf("%d",&codigoProduto);

        if (codigoProduto != 222){
        printf("\nInforme o valor do produto (%d):\n",i);
        scanf("%f",&valorProduto);
        }

        valorCompra = valorCompra + valorProduto;


    }

    printf("\nPEDIDO ENCERRADO!\nResumo da compra:\nNumero de itens: %d;\nValor total da compra: %.2f;\n",i,valorCompra);
}
