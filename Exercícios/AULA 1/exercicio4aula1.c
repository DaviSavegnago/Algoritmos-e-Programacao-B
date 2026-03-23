#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    char palavra[100], c;
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Vogais na palavra: ");
    for (i = 0; palavra[i] != '\0'; i++) {
        c = palavra[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            printf("%c", c);
        }
    }

    return 0;
}

