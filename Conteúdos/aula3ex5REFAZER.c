#include <stdio.h>

int par (int n){
    if (n%2==0)
        return 0;
    else
        return 1;
}

int main (){

    int x;
    printf ("Digite um numero: ");
    scanf ("%d",&x);

    if (par(x))
        printf ("A funcao par retornou VERDADEIRO == %d", par(x));
    else
        printf ("A funcao par retornou FALSO == %d", par(x));

    return 0;

}

