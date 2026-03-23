#include <stdio.h>
#include <locale.h>

struct {
    int x;
    int y;
}p1, p2, p3;

int main (){

    setlocale (LC_ALL, "Portuguese");

    printf ("Digite as coordenadas do primeiro ponto (x & y):  ");
    scanf ("%d %d", &p1.x, &p1.y);
    printf ("Digite as coordenadas do segundo ponto (x & y):  ");
    scanf ("%d %d", &p2.x, &p2.y);
    printf ("Digite as coordenadas do terceiro ponto (x & y):  ");
    scanf ("%d %d", &p3.x, &p3.y);

    int minX = (p1.x < p2.x) ? p1.x : p2.x;
    int maxX = (p1.x > p2.x) ? p1.x : p2.x;
    int minY = (p1.y < p2.y) ? p1.y : p2.y;
    int maxY = (p1.y > p2.y) ? p1.y : p2.y;

    if (p3.x >= minX && p3.x <= maxX && p3.y >= minY && p3.y <= maxY) {
        printf("O ponto está dentro do retângulo.\n");
    } else {
        printf("O ponto está fora do retângulo.\n");
    }

    return 0;
}

