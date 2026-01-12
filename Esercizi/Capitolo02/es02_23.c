// es02_23.c
// (Multipli) Scrivete un programma che legga due interi e determini e stampi se il primo è un multiplo del secondo.
#include <stdio.h>

int main(void) {
    int integer1 = 0;
    int integer2 = 0;

    // Interazione con utente lettura dei due interi
    printf("%s", "Inserisci il primo intero: ");
    scanf("%d", &integer1);
    printf("%s", "Inserisci il secondo intero: ");
    scanf("%d", &integer2);

    // Stampa risultato
    if (integer1 % integer2 == 0) {
        printf("%d è un multiplo di %d\n", integer1, integer2);
    } else {
        printf("%d non è un multiplo di %d\n", integer1, integer2);
    }
}