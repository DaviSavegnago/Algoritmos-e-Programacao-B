#include <stdio.h>

int contar (char *p, char l){
    int qtde = 0;
    for ( ;*p!='\0';p++)
    if (*p == l){
            qtde ++;
            *p = '*';
    }
return qtde;
}


int main(){
    char palavra [30], letra;
    int q;
    scanf ("&s", palavra);
    fflush(stdin);
    scanf("%s", &letra);

    q = contar(palavra, letra);
    printf("Qntde = %d\n", q);
    puts(palavra);

    return 0;
}
