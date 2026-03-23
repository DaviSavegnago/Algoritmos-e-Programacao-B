#include <stdio.h>

struct tipo_aluno {
char matricula[11];
char nome[30];
int ano_ingresso;
float media_vestibular;
};

int main (){
    struct tipo_aluno aluno[5];
    int i;

    for (i=0; i < 5; i++) {
        printf ("\nDados do Aluno: %d\n", i+1);

    printf ("Digite a matricula (máximo 10 caracteres): ");
    scanf ("%s", aluno[i].matricula);

    printf ("Digite o nome do aluno: ");
    scanf (" %s", aluno[i].nome);

    printf ("Digite o ano de ingresso: ");
    scanf (" %d", &aluno[i].ano_ingresso);

    printf ("Digite a media do vestibular: ");
    scanf (" %f", &aluno[i].media_vestibular);

    }

     printf ("\nDados dos Alunos\n");
    for (i=0; i<5; i++){
        printf ("Aluno: %d:\n", i+1);
        printf ("Matricula: %s\n", aluno[i].matricula);
        printf ("Nome: %s\n", aluno[i].nome);
        printf ("Ano de Ingresso: %d\n", aluno[i].ano_ingresso);
        printf ("Media Vestibular: %.2f\n\n", aluno[i].media_vestibular);
    }

    return 0;
}
