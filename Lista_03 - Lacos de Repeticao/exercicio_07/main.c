#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k = 0;

    for (int i = 1; i <= 20; i++){

        printf("\nInforme o valor da idade %d:\n",i);
        scanf("%d",&n);



        if (n >= 18){

           k++;

        }


    }

    printf("\n%d pessoas sao maiores de idade.\n",k);
}
