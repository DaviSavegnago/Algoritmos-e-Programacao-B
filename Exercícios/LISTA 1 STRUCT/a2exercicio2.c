#include <stdio.h>

struct os_clientes {
    char nome[30];
    char cidade[30];
    float total;
    char mes[12];
    };

int main (){
    struct os_clientes cliente[5];
    int i;

    for (i=0; i<5; i++) {
        printf ("\nCliente: %d\n", i + 1);

        printf ("Digite o nome do cliente: ");
        scanf (" %[^\n]", cliente[i].nome);

        printf ("Digite a cidade do cliente: ");
        scanf (" %[^\n]", cliente[i].cidade);

        printf ("Digite o total da compra do cliente: ");
        scanf (" %f", &cliente[i].total);

        printf ("Digite o mês que o cliente comprou: ");
        scanf (" %s", cliente[i].mes);

    }

    printf ("\nDados dos Clientes:\n");

    for (i=0; i<5; i++) {
        printf ("Cliente: %d\n", i+1);
        printf ("Nome: %s\n", cliente[i].nome);
        printf ("Cidade: %s\n", cliente[i].cidade);
        printf ("Total da Compra: %.2f reais\n", cliente[i].total);
        printf ("Mês da Compra: %s \n\n", cliente[i].mes);

    }

    return 0;
}
