#include <stdio.h>
#include <stdlib.h>

int *alocarMatriz (int l, int c){
    int *m;
    m = (int *) malloc (l * c * sizeof (int));
    if (!m){
        printf ("Erro na alocação");
        exit (-1);
    }
    return m;
}

void gerarMatriz (int *m, int l, int c){
    int i, j, k;
    for (i=0; i<l; i++)
        for (j=0; j<c; j++){
            k = i * c + j;
            *(m+k) = rand () % 10;
        }
    return ;
}

void mostrarMatriz (int *m, int l, int c){
    int i, j, k;
    for (i=0; i<l; i++){
        printf ("\n");
        for (j=0; j<c; j++){
            k = i * c + j;
            printf ("%d \t", *(m+k));
        }
    }
    printf("\n");
    return ;
}

void somarMatriz (int *x, int *y, int *z, int l, int c){
    int i, j, k;
    for (i=0; i<l; i++)
        for (j=0; j<c; j++){
            k = i * c + j;
            *(z + k) = *(x + k) + *(y + k);
        }
    return ;
}

int main (){
    int *a, *b, *c, L, C;
    printf ("Linhas e Colunas: ");
    scanf ("%d %d", &L, &C);

    a = alocarMatriz (L, C);
    b = alocarMatriz (L, C);
    c = alocarMatriz (L, C);
    gerarMatriz (a, L, C);
    gerarMatriz (b, L, C);
    printf("\nMatriz A:\n"); //  adicionado (identificação da matriz)
    mostrarMatriz(a, L, C);

    printf("\nMatriz B:\n"); // adicionado (identificação da matriz)
    mostrarMatriz(b, L, C);

    somarMatriz (a, b, c, L, C);

    printf("\nMatriz Soma (A + B):\n"); // adicionado (mostrar resultado)
    mostrarMatriz(c, L, C);

    free (a);
    free (b);
    free (c);

    return 0;
}
