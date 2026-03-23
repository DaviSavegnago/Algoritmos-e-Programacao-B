#include <stdio.h>

struct hora {
    int h;
    int m;
    int s;
};

int main (){
    char stringhora[9];
    struct hora horario;
    char aux[3];

    printf ("Digite um horário, hh:mm:ss \n");
    scanf ("%s", stringhora);

    aux[0] = stringhora[0];
    aux[1] = stringhora[1];
    aux[2] = '\0';
    horario.h = atoi (aux);

    aux[0] = stringhora[3];
    aux [1] = stringhora[4];
    horario.m = atoi (aux);

    aux [0] = stringhora[6];
    aux [1] = stringhora [7];
    horario.s = atoi (aux);

    printf ("%d hora(s), %d minuto(s), %d segundo(s)", horario.h, horario.m, horario.s);

    return 0;

}
