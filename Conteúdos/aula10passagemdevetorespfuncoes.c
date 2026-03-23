#include <stdio.h>

void lerVetor (int *p){
    int i;
    for (i=0; i<5; i++)
        scanf ("%d", p+i);

    return;
}

void mostrarVetor (int *x){
    int i;
    for (i=0; i<5; i++);
        printf ("%d\t", *(x+i));

    return 0;
}

void somarVetores (int *v1, int *v2, int *v3){
    int i;

    for (i=0; i<5; i++)
        *(v3 + i) = *(v1 + i) + *(v2 + 1); //s[i] = v[i] + t[i]

        return;
}

int main (){
    int v[5], t[5], s[5];

    lerVetor (v);
    lerVetor (t);

    mostrarVetor (v);
    mostrarVetor (t);

    somarVetores (v,t,s);

    mostrarVetor (s);
    printf ("%d\n", s);

    return 0;
}
