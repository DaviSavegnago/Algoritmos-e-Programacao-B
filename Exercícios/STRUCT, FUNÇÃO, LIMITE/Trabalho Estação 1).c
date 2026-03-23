#include <stdio.h>

int contar(int *vet, int tamanho, int valor) {
    int i, cont = 0;
    for(i = 0; i < tamanho; i++) {
        if (*(vet + i) == valor) { // acessando via ponteiro
            cont++;
        }
    }
    return cont;
}

int main() {
    int vetor[50];
    int i, valor, quantidade;

    printf("Digite 50 números inteiros:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser contado: ");
    scanf("%d", &valor);

    quantidade = contar(vetor, 50, valor);

    printf("O valor %d aparece %d vezes no vetor.\n", valor, quantidade);

    return 0;
}