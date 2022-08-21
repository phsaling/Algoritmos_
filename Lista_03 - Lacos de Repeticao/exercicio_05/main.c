#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, acu = 0;

    for (int i = 0; i<10 ; i++){

    printf("Informe o n.%d numeros:\n",i);

    scanf("%d",&n);

    acu = acu + n;

    }
    printf("\nO resultado eh: %d.\n",acu);

}
