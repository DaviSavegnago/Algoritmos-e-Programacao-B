#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // atoi()
#include <locale.h>

struct {
    int d;
    int m;
    int a;
} d1, d2;

// Função para ler a data string e preencher a struct usando atoi()
void lerData(char *entrada, struct data *d) {
    char dia_str[3], mes_str[3], ano_str[5];

    // Copia os pedaços da string para as variáveis
    strncpy(dia_str, entrada, 2);
    dia_str[2] = '\0';

    strncpy(mes_str, entrada + 3, 2);
    mes_str[2] = '\0';

    strncpy(ano_str, entrada + 6, 4);
    ano_str[4] = '\0';

    // Converte strings para inteiros
    d->d = atoi(dia_str);
    d->m = atoi(mes_str);
    d->a = atoi(ano_str);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char data1_str[11], data2_str[11];

    printf("Digite a primeira data no formato dd/mm/aaaa: ");
    fgets(data1_str, sizeof(data1_str), stdin);
    data1_str[strcspn(data1_str, "\n")] = 0;  // Remove o \n do fgets

    printf("Digite a segunda data no formato dd/mm/aaaa: ");
    fgets(data2_str, sizeof(data2_str), stdin);
    data2_str[strcspn(data2_str, "\n")] = 0;

    lerData(data1_str, &d1);
    lerData(data2_str, &d2);

    // Comparação das datas
    if (d1.a < d2.a) {
        printf("A primeira data ocorre primeiro.\n");
    } else if (d1.a > d2.a) {
        printf("A segunda data ocorre primeiro.\n");
    } else {
        if (d1.m < d2.m) {
            printf("A primeira data ocorre primeiro.\n");
        } else if (d1.m > d2.m) {
            printf("A segunda data ocorre primeiro.\n");
        } else {
            if (d1.d < d2.d) {
                printf("A primeira data ocorre primeiro.\n");
            } else if (d1.d > d2.d) {
                printf("A segunda data ocorre primeiro.\n");
            } else {
                printf("As datas são iguais.\n");
            }
        }
    }

    return 0;
}
