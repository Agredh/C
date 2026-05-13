// (Tabella di output) scrivete un programma che usi l'interazione per stampare
// una tabella del prodotto dei primi dieci numeri naturali per le prime tre 
// potenze del 10. Usare la sequenza di escape "\t", nell'istruzione printf per 
// separare le colonne con tabulazioni
#include <stdio.h>

int main() {
    // stampa Header
    puts("N\t10*N\t100*N\t1000*N\n");

    // cicla 10 volte
    int counter = 1;
    while (counter <= 10) {
        printf("%d\t%d\t%d\t%d\n", counter, counter*10,
                                   counter*100, counter*1000);

        ++counter;
    }
}