#include <stdio.h>

    struct vendedor {
        int cod;
        float salario_f, vendas, comissao;
    };

    int main (){
        struct vendedor v[4];
        int i;

        for (i=0; i<4; i++){
            printf ("Escreva o código do funcionário: \n");
            scanf ("%i", &v[i].cod);
            printf ("Escreva o seu salário fixo: \n");
            scanf ("%i", &v[i].salario_f);
            printf ("Escreva o seu total de vendas: \n");
            scanf ("%i", &v[i].vendas);

            if (v[i].vendas <= 1000) {
                printf ("Comissao 3%%\n");
                v[i].comissao = v[i].vendas * 0.03;
            }

            else if (v[i].vendas <= 2000) {
                printf ("Comissao 5%%\n");
                v[i].comissao = v[i].vendas * 0.05;
            }

            else {
                printf ("Comissao 10%%\n");
                v[i].comissao = v[i].vendas * 0.10;
            }

            printf ("Comissao R$ %.2f", v[i].comissao);
            printf ("\n Salario Total R$ %2.f", v[i].salario_f + v[i].comissao);

        }

        return 0;
        }
