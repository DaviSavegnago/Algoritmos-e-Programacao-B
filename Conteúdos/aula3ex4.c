#include <stdio.h>

int v[10]; //variavel global

void mostrarpares (){
    int i;
    printf ("Elementos pares: \n");
    for (i=0;i<10;i++){
        if (v[i] % 2 == 0){
            printf ("%d na posicao %d\n", v[i], i);
        }
    }

    return 0;

}

int main (){
    int i;
    printf ("Digite 10 numeros inteiros: \n");
    for (i=0;i<10;i++)
        scanf ("%i", &v[i]);

    mostrarpares ();

    return 0;

}
