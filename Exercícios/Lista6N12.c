#include <stdio.h>
#include <stdlib.h>

struct lavagem {
    char placa[10];
    char nomeProp[80];
    char teleProp[20];
    float valor;
    char situ;
};

void lerCarro(struct lavagem *p){
    printf("Placa do Carro: ");
    scanf("%s", p->placa);
    printf("Nome do Proprietário: ");
    scanf("%s", p->nomeProp);
    printf("Telefone do Proprietário: ");
    scanf("%s", p->teleProp);
    printf("Valor: ");
    scanf("%f", &p->valor);
    printf("Situação (P/N): ");
    scanf(" %c", &p->situ);
}

int main(){
    struct lavagem *ptr;
    int i, qtd;

    printf("Quantos carros deseja cadastrar (max 10)? ");
    scanf("%d", &qtd);

    if (qtd > 10) qtd = 10;

    ptr = (struct lavagem *) malloc(qtd * sizeof(struct lavagem));

    if (!ptr) {
        printf("Problemas na alocação.\n");
        exit(1);
    }

    for (i = 0; i < qtd; i++) {
        printf("\n--- Cadastro do Carro %d ---\n", i + 1);
        lerCarro(&ptr[i]);
    }

    printf("\n=============== LISTA DE VEÍCULOS ===============\n");

    for (i = 0; i < qtd; i++) {
        printf("\nCarro %d\n", i + 1);
        printf("Placa: %s\n", ptr[i].placa);
        printf("Nome do Proprietário: %s\n", ptr[i].nomeProp);
        printf("Telefone do Proprietário: %s\n", ptr[i].teleProp);
        printf("Valor: %.2f\n", ptr[i].valor);
        printf("Situação: %c\n", ptr[i].situ);
    }

    free(ptr);

    return 0;
}
