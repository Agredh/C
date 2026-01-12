// es02_22.c
// (Pari e Dispari) Scrivete un programma che legga un intero e determini e stampi se sia dispari o pari.
// Utilizzare solamente la forma a selezione singola dell'istruzione if.
#include <stdio.h>

int main(void) {
    int integer1 = 0;

    printf("%s", "Inserisci un intero: ");                  // prompt
    scanf("%d", &integer1);                                 // inserimento input in integer1

    // Stampa risultati
    if (integer1 % 2 == 0) {
        printf("%d è pari!\n", integer1);
    }

    if (integer1 % 2 != 0) {
        printf("%d è dispari!\n", integer1);
    }
}