// es02_27.c
// (Tavola di quadrati e di cubi) Usando solo le tecniche che avete appreso in questo capitolo, scrivete un 
// programma che calcoli i quadrati e i cubi dei numeri da 0 a 10 e usi tabulazioni per stambare i risultati
// in formato tabellare
#include <stdio.h>

int main(void) {
    puts("numero\tquadrato\tcubo");
    int x = 0;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 1;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 2;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 3;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 4;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 5;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 6;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 7;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 8;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 9;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    x = 10;
    printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
}