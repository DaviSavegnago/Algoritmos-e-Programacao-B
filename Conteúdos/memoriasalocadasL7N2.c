#include <stdio.h>
#include <stdlib.h>

void lerString (char *str, int t){
    int i=0;
    printf ("Digite a string letra por letra\n");
    while (i < t) {
        printf ("i=%d: ", i);
        fflush(stdin);
        scanf ("%c", &str[i]);
        i++;
    }
    str[t] = '\0';
    * (str + t) = '\0';
    return;

}

int main (){
    int tam;
    char *s;

    printf ("Tamanho da String: \n");
    scanf ("%d", &tam);

    s = (char *) malloc ((tam + 1) * sizeof (char));
    if (!s){
        printf ("Erro na alocação dinâmica!!!");
        exit (-1);
    }

    lerString (s, tam);
    printf ("%s", s);
    free (s);

    return 0;
}
