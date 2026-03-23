#include <stdio.h>
#include <string.h>

struct biblioteca {
    char titulo[30];
    char autor[30];
    int ano;
    int retirado;
    int disponivel;
};

int main (){
    
    struct biblioteca livros[10000];
    int i, n, achou=0;
    float media=0, somaTotal=0;
    
    printf ("--- Cadastramento dos Livros ---\n");
    printf ("Quantos livros você deseja cadastrar(Máximo 10000):  \n");
    scanf ("%d", &n);
    
    for (i=0; i<n; i++){
        
        printf ("Livro: %d\n", i+1);
        printf ("Qual é o título desse livro:  \n");
        scanf (" %[^\n]", &livros[i].titulo);
        printf ("Qual o autor desse livro:  \n");
        scanf (" %[^\n]", &livros[i].autor);
        printf ("Qual o ano desse livro:  \n");
        scanf ("%d", &livros[i].ano);
        printf ("Quantas vezes esse livro já foi retirado:  \n");
        scanf ("%d", &livros[i].retirado);
        printf ("O livro está disponível na biblioteca, 1 para SIM, 2 para NÃO\n");
        scanf ("%d", &livros[i].disponivel);
    }
    
    printf ("--- Agora apenas os livros de 2025 ---\n");
    
    for (i=0; i<n; i++){
        
        if (livros[i].ano == 2025){
            achou = 1;
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Retiradas: %d\n", livros[i].retirado);
            printf("Disponível: %s\n",livros[i].disponivel == 1 ? "Sim" : "Não");
        }
        
        else if (!achou) {
            printf ("Nenhum livro de 2025 foi encontrado!\n");
        }
    }
    
    printf (" --- Agora a média das retiradas ---\n");
    
    for (i=0; i<n; i++){
        somaTotal += livros[i].retirado;
    }
        
    media = somaTotal / n;
    printf ("A média dos livros retirados foi de: %f", media);
    
    return 0;
}