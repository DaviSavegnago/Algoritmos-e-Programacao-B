#include <stdio.h>

float media (float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

int main (){
    float nota1, nota2, nota3, m;
    printf ("Digite as 3 notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    m = media(nota1, nota2, nota3);
    printf ("Media das notas = %.2f", m);
    return 0;
}
