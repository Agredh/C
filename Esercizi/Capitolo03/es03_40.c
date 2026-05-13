// (Multipli di 2 con un ciclo infinito) Scrivete un programma che continui a stampare i multipli del numero intero 2, e cioè 2,
// 4, 8, ... . Il vostro ciclo non deve terminare. Cosa succede quando fate eseguire questo programma?
#include <stdio.h>

int main(void) {

    int multiplo = 2;
    while(1) {
        printf("%d\n", multiplo);
        multiplo *= 2;
    }
}