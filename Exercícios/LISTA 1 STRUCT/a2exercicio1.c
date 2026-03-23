#include <stdio.h>

struct tp_funcionario {
    char nome[30];
    float salario;
    char cargo[30];
    int idade;
};

int main (){
    struct tp_funcionario funcionario;

    printf ("Digite o nome do funcionário: ");
    scanf ("%s", funcionario.nome);

    printf ("Digite o salário do funcionário: ");
    scanf (" %f", &funcionario.salario);

    printf ("Digite o cargo do funcionário: ");
    scanf (" %s", funcionario.cargo);

    printf ("Digite a idade do funcionário, em anos: ");
    scanf (" %d", &funcionario.idade);

    printf ("\nDados do Funcionário\n");
    printf ("Nome: %s\n", funcionario.nome);
    printf ("Salario: %.2f\n", funcionario.salario);
    printf ("Cargo: %s\n", funcionario.cargo);
    printf ("Idade: %d anos\n", funcionario.idade);

    return 0;
}
