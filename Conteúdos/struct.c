#include <stdio.h>

    struct vendedor {
        int cod;
        float salario_f, vendas, comissao;
    };

    int main (){
        struct vendedor v;

    printf ("Codigo do vendedor\n");
    scanf ("%i", &v.cod);

    printf ("Salario fixo\n");
    scanf ("%f", &v.salario_f);

    printf ("Total de vendas\n");
    scanf ("%f", &v.vendas);

    if (v.vendas <= 1000) {
        printf ("Comissao 3%%\n");
        v.comissao = v.vendas * 0.03;
    }

    else if (v.vendas <= 2000) {
        printf ("Comissao 5%%\n");
        v.comissao = v.vendas * 0.05;
    }

    else {
        printf ("Comissao 10%%\n");
        v.comissao = v.vendas * 0.10;
    }

    printf ("Comissao R$ %.2f", v.comissao);
    printf ("\n Salario Total R$ %2.f", v.salario_f + v.comissao);

    return 0;
    }
