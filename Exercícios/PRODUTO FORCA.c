#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h> //usei isso para  não aparecer a palavra escolhida no início

void limparEnter(char *p) {
    p[strcspn(p, "\n")] = '\0';
}

int atualizarTrac(char *pal, char *trac, char letra) {
    int acerto = 0;
    for (int i = 0; pal[i] != '\0'; i++) {
        if (pal[i] == letra) {
            trac[i] = letra;
            acerto = 1;
        }
    }
    return acerto;
}

void forca (int estado){
    if (estado == 0){
        printf ("\n ----------");
        printf ("\n |        |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n -");
    }else if (estado==1){
        printf ("\n ----------");
        printf ("\n |        |");
        printf ("\n |        O");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n -");
    }else if (estado==2){
        printf ("\n ----------");
        printf ("\n |        |");
        printf ("\n |        O");
        printf ("\n |        |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n -");
    }else if (estado==3){
        printf ("\n ----------");
        printf ("\n |        |");
        printf ("\n |        O");
        printf ("\n |       -|");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n -");
    }else if (estado==4){
        printf ("\n ----------");
        printf ("\n |        |");
        printf ("\n |        O");
        printf ("\n |       -|-");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n -");
    }else if (estado==5){
        printf ("\n ----------");
        printf ("\n |        |");
        printf ("\n |        O");
        printf ("\n |       -|-");
        printf ("\n |       / ");
        printf ("\n |");
        printf ("\n |");
        printf ("\n |");
        printf ("\n -");
    }else if (estado==6){
        printf ("\n ----------");
        printf ("\n |        |");
        printf ("\n |        O");
        printf ("\n |       -|-");
        printf ("\n |       / \\");
        printf ("\n |");
        printf ("\n |   VOCÊ PERDEU!");
        printf ("\n |");
        printf ("\n -");
    }
}

int main (void){

    setlocale(LC_ALL, "Portuguese");

    int erros = 0;
    int i;
    char pal[100];
    char esconder[100];

    printf ("Informe a palavra escolhida: \n");
    int idx = 0;
    char ch;

    while (1) {
    ch = getch();

    if (ch == 13) {
        pal[idx] = '\0';
        break;
    }
    else if (ch == 8 && idx > 0) {
        idx--;
        printf("\b \b");
    }
    else if (ch != 8) {
        pal[idx++] = ch;
        printf("*");
    }
}

    for (i = 0; i < strlen(pal); i++) {
        esconder[i] = '_';
    }
    esconder[i] = '\0';

    printf ("\n\nA palavra tem %lu caracteres", strlen(pal));

    while (erros < 6){

        printf ("\n\n");
        forca(erros);
        printf ("\n Palavra: %s\n", esconder);

        if (strcmp(esconder, pal) == 0){
            printf ("\n Parabéns você ganhou, a palavra era: %s\n", pal);
            return 0;
        }

        char letra;
        printf ("Digite uma letra: ");
        scanf (" %c", &letra);

        int acertou = atualizarTrac(pal, esconder, letra);

        if (!acertou){
            erros++;
        }
    }

    printf ("\n\n");
    forca(erros);
    printf ("\nA palavra era... \t %s\n", pal);

    return 0;
}