#include <stdio.h>
#include <stdlib.h>

void lerMatriz (float *m, int L, int C){
    int i, k, j;

    for (i=0; i<L; i++){
        for (j=0; j<C; j++){
            k = i * C + j;
            printf ("Elemento [%d][%d]: ", i, j);
            scanf ("%f", (m + k));
        }
    }
    return;
}

void mostrarMatriz (float *m, int L, int C){
    int i, j, k;

    for (i=0; i<L; i++){
        for (j=0; j<C; j++){
            k = i * C + j;
            printf ("%.2f ", *(m + k));  // Aqui mostramos o elemento da matriz
        }
        printf("\n");  // Quebra de linha após exibir uma linha da matriz
    }
}

int main (){
    int linha, coluna;
    float *a;
    printf ("Quantidade de linhas: ");
    scanf ("%i", &linha);
    printf ("Quantidade de colunas: ");
    scanf ("%i", &coluna);

    a = (float *) malloc (linha * coluna * sizeof (float));
    if (!a){
        printf ("Erro na alocação dinâmica");
        exit (-1);
    }

    lerMatriz (a, linha, coluna);
    mostrarMatriz (a, linha, coluna);

    free (a);

    return 0;
}
