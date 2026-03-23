#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float soma (float x, float y) {
    return x+y;
}
float sub (float x, float y){
    return x-y;
}
float divis (float x, float y){
    return x/y;
}
float mult (float x, float y){
    return x*y;
}
int main (){
    float a,b;
    printf ("Informe dois números: ");
    scanf ("%f%f", &a,&b);
    printf ("Soma=%.2f\n",soma(a,b));
    printf ("Subtração=%.2f\n",sub(a,b));
    printf ("Divisão=%.2f\n",divis(a,b));
    printf ("Multiplicação=%.2f\n",mult(a,b));

    return 0;
}
