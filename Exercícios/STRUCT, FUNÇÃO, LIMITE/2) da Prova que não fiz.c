#include <stdio.h>
#include <string.h>

struct controle {
    int codigo;
    float custo;
    float venda;
};

int main (){
    
    struct controle produto[4];
    int i;
    float lucro=0, lucroTotal=0;
    
    for (i=0; i<4; i++){
        printf ("Produto número %d: \n", i+1);
        printf ("Informe seu código:  \n");
        scanf ("%d", &produto[i].codigo);
        printf ("Qual foi o preço de custo:  \n");
        scanf ("%f", &produto[i].custo);
        printf ("Qual foi o preço de venda:  \n");
        scanf ("%f", &produto[i].venda);
        lucro = produto[i].venda - produto[i].custo;
        printf ("Você lucrou %.2f reais com esse produto\n", lucro);
        lucroTotal += lucro;
    }
    
    printf ("Seu lucro total foi de %.2f reais\n", lucroTotal);
    
    float porcentagem = (produto[i].venda - produto[i].custo) / produto[i].custo * 100;
    if (porcentagem >= 50){
        printf ("Produto com mais de 50%% de lucro, código: %d\n", produto[i].codigo);
    }

    
    return 0;
}