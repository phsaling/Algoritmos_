#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2, res;

    printf("Informe o intervalo a ser somado:\n");
    printf("Inicio do intervalo:\n");
    scanf("%d",&n1);
    printf("Fim do intervalo:\n");
    scanf("%d",&n2);

    for (int i = n1; i<=n2; i++) {


        res = res + i;

    }

    printf("\nA soma dos numeros entre %d e %d, eh = %d",n1,n2,res);
}
