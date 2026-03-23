#include <stdio.h>

int main (){

    int x, i;

    printf ("Escreva um número inteiro menor que 1000 \n\n");
    scanf ("%d", &x);

    for (i = x + 1; i<1000; i++) {
        if (i % 2 != 0) {
            printf ("%d\n", i);
        }
    }

    return 0;
}
