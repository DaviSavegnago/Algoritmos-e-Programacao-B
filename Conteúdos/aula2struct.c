#include <stdio.h>

struct tipo_aluno {
char matricula[11];
char nome[30];
int ano_ingresso;
float media_vestibular;
};

int main (){
    struct tipo_aluno aluno;
    int i;

    printf ("Digite a matricula (máximo 10 caracteres): ");
    scanf ("%s", aluno.matricula);

    printf ("Digite o nome do aluno: ");
    scanf (" %s", aluno.nome);

    printf ("Digite o ano de ingresso: ");
    scanf (" %d", &aluno.ano_ingresso);

    printf ("Digite a media do vestibular: ");
    scanf (" %f", &aluno.media_vestibular);

    printf ("\nDados do Aluno\n");
    printf ("Matricula: %s\n", aluno.matricula);
    printf ("Nome: %s\n", aluno.nome);
    printf ("Ano de Ingresso: %d\n", aluno.ano_ingresso);
    printf ("Media Vestibular: %.2f\n", aluno.media_vestibular);

    printf("\nNome caractere por caractere:\n");
    for (i = 0; aluno.nome[i] != '\0'; i++) {
        printf("%c\n", aluno.nome[i]);
    }

    return 0;
}
