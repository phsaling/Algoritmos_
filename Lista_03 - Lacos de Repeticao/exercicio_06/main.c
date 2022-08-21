#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float res = 1.0, acu = 0.0;

    for (int i = 1; i <= 20; i++){

        printf("\nInforme o valor da idade %d:\n",i);
        scanf("%d",&n);

        acu = acu + n;


    }
        res = acu/20;
    printf("\nA media das 20 idades eh: %.2f.\n",res);
}
