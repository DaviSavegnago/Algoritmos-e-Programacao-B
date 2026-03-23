#include <stdio.h>
#include <locale.h>

struct {
    int d;
    int m;
    int a;
}d1, d2;


int main (){

    setlocale (LC_ALL, "Portuguese");

    printf ("Digite uma data qualquer nesse formato dd/mm/aaaa: ");
    scanf ("%d/%d/%d", &d1.d,&d1.m, &d1.a);
    printf ("Digite uma outra data qualquer nesse formato dd/mm/aaaa: ");
    scanf ("%d/%d/%d", &d2.d,&d2.m, &d2.a);

    if (d1.a < d2.a) {
        printf ("A data (1) ocorre primeiro");
    }   else if (d1.a == d2.a && d1.m < d2.m) {
        printf ("A data (1) ocorre primeiro");
    }   else if (d1.a == d2.a && d1.m == d2.m && d1.d < d2.d) {
        printf ("A data (1) ocorre primeiro");
    }   else if (d1.a == d2.a && d1.m == d2.m && d1.d == d2.d) {
        printf ("São as mesmas datas");
    }   else {
        printf ("A data (2) ocorre primeiro");
    }

return 0;
}
