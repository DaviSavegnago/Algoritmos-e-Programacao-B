#include <stdio.h>
#define pi 3,14159

void linha (){
    printf ("=====================================================\n");
    return;
}

float funcaoArea (float r){
    return pi * r * r;
}

float funcaoPerimetro (float r){
    return 2 * pi * r;
}

int main (){
    float raio1, raio2;
    float area1, area2;
    float perimetro1, perimetro2;

    linha ();
    printf ("Calculo da area e do perimetro do circulo 1\n");
    linha ();
    printf ("Insira o valor do raio do circulo 1: ");
    scanf ("%f", &raio1);
    area1 = funcaoArea (raio1);
    printf ("Area = %.f\n", area1);
    linha ();

    linha ();
    printf ("Calculo da area e do perimetro do circulo 2\n");
    linha ();
    printf ("Insira o valor do rio do circulo 2: ");
    scanf ("%f", &raio2);
    area2 = funcaoArea (raio2);
    printf ("Area = %.f\n", area2);
    linha ();

    return 0;
}
