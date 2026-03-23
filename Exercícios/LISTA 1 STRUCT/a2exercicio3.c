#include <stdio.h>
#include <locale.h>


struct os_alunos {
    char nome[30];
    int faltas;
    float n1;
    float n2;
    float n3;
    float media;
};

int main () {

    setlocale (LC_ALL, "Portuguese");

    struct os_alunos aluno[4];
    int i;
    float media;

    for (i=0; i<4; i++){
        printf ("\nAluno: %d\n", i + 1);

        printf ("Informe o nome do aluno: ");
        scanf (" %[^\n]", aluno[i].nome);

        printf ("Informe o número de faltas em horas do aluno: ");
        scanf (" %d", &aluno[i].faltas);

        printf ("Informe a nota 1 do aluno: ");
        scanf (" %f", &aluno[i].n1);

        printf ("Informe a nota 2 do aluno: ");
        scanf (" %f", &aluno[i].n2);

        printf ("Informe a nota 3 do aluno: ");
        scanf (" %f", &aluno[i].n3);

        aluno[i].media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3) / 3;

        printf ("A média das notas do aluno foi de: %.2f\n", aluno[i].media);

    }

    printf ("\nDados dos Alunos\n\n");

    for (i=0; i<4; i++){
        printf ("Aluno: %d\n", i + 1);
        printf ("Nome: %s\n", aluno[i].nome);
        printf ("Faltas: %d hora(s)\n", aluno[i].faltas);
        printf ("Média das notas: %.2f\n", aluno[i].media);

        if (aluno[i].faltas > 20){
            printf ("REPROVADO POR FALTAS\n\n");
        }

        else if (aluno[i].media < 6) {
            printf ("REPROVADO POR NOTA\n\n");
        }

        else {
            printf ("PARABÉNS APROVADO\n\n");
        }

    }

    return 0;
}
