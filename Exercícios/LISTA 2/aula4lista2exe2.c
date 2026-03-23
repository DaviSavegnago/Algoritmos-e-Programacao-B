#include <stdio.h>
#include <stdlib.h>

float v[15];

void mostrarVetor(){
    int a;
    printf ("Vetor:\n");
    for (a=0;a<15;a++){
        printf ("%.0f\t", v[a]);
    }
}

void calculo (float x) {
    int i;
    for (i=0;i<15;i++){
        v[i] = v[i] * x;
    }
}


int main (){
    float n;
    int i;
    printf ("Digite um numero: ");
    scanf ("%f", &n);
    //gerando elementos de v
    for (i=0;i<15;i++){
        v[i] = rand()%30;
    }
    mostrarVetor ();
    calculo (n);
    mostrarVetor ();


    return 0;
}
