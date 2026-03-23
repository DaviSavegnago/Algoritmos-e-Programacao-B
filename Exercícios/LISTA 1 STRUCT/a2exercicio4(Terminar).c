#include <stdio.h>
#include <locale.h>

struct os_prods {
    char nome[30];
    float pc;
    float pv;
};

int main (){

    setlocale (LC_ALL, "Portuguese");

    struct os_prods produto[5];
    int i;

    for (i=0; i<5; i++){
        printf ("Índice do produto %d\n", i+1);
        printf ("Nome do produto:  \n");
        scanf ("%[^\n]", produto[i].nome);
        printf ("Preço do custo do produto: \n");
        scanf (" %f", &produto[i].pc);
        printf ("Preço de venda do produto: \n");
        scanf (" %f", &produto[i].pv);
    }

    return 0;
}



