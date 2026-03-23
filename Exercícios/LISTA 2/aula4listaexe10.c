#include <stdio.h>

char s[50];
int contarLetra (char l){
    int i, q=0;
    for (i=0;s[i]!='\0';i++){
        if (s[i]==l) q++;
    }
    return q;
}

int main(){
    char letra;
    printf ("Uma palavra: ");
    scanf ("%s", s);
    printf ("Letra: ");
    fflush (stdin);
    scanf ("%c", &letra);
    printf ("A letra %c ocorre %d vez(es) na palavra %s\n", letra, contarLetra(letra), s);
    return 0;
}
