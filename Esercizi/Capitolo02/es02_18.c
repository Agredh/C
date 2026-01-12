// Es02_18.c
// (Confronto di interi) Scrivete un programma che legga due interi inseriti dall'utente e quindi stampi il
// il numero maggiore seguito dalle parole "is larger". Se i due numeri sono uguali, stampate il messaggio
// "These numbers are equal". Usate solamente la forma a selezione singola dell'istruzione if.
#include <stdio.h>

int main(void) {
    int integer1 = 0;
    int integer2 = 0;
    
    printf("%s", "Enter first integer: ");                 // prompt
    scanf("%d", &integer1);                                // inserisce input in integer1

    printf("%s", "Enter second integer: ");                // prompt
    scanf("%d", &integer2);                                // inserisce input in integer2 

    // Confronti
    if (integer1 > integer2) {
        printf("%d is larger %d!\n", integer1, integer2);
    }

    if (integer1 < integer2) {
        printf("%d is larger %d!\n", integer2, integer1);
    }

    if (integer1 == integer2) {
        puts("These numbers are equal!");
    }
}   