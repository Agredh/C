// (Tabella di input#2) Scrivere un programma per generare la tabella presente nel testo
// utilizzando l'interazione
#include <stdio.h>

int main() {
    // stampa Header
    printf("A\tA+2\tA+4\tA+6\n\n");

    // cicla 5 volte
    int A = 3;
    while (A <= 15) {
        printf("%d\t%d\t%d\t%d\n", A, A+2, A+4, A+6);
        A += 3;
    }
}