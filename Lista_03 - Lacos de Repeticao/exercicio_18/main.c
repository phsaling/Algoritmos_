#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadeAlunos, nota1, nota2, nota3;
    float media;

    printf("Informe a quantidade de alunos da sala de aula:\n");
    scanf("%d",&quantidadeAlunos);

    for (int i = 1; i <= quantidadeAlunos; i++){

        printf("\nInforme as notas do aluno %d.\n",i);
        printf("Nota 01:\n");
        scanf("%d",&nota1);
        printf("Nota 02:\n");
        scanf("%d",&nota2);
        printf("Nota 03:\n");
        scanf("%d",&nota3);

        media = (nota1 + nota2 + nota3)/3;

        if (media >= 6.0)
            {

            printf("\nO aluno %d esta aprovado.\nMedia Final: %.1f.\n",i,media);

            }
        else

            {

             printf ("\nO aluno %d esta reprovado.\nMedia Final: %.1f.\n",i,media);

            }

    }

    printf("\nPrograma Finalizado.\n");
}
