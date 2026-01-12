// es02_29.c
// (Ordinare in ordine crescente) Scrivete un programma che riceva in ingresso tre diversi numeri dall'utente.
// Stampate i numeri in ordine crescente. Utilizzare solo la forma a selezione singola dell'istruzione if.
#include <stdio.h>

int main(void) {
    int integer1 = 0, integer2 = 0, integer3 = 0;

    // Prompt richiesta e memorizzazione degli interi
    printf("%s", "Inserisci tre interi: ");
    scanf("%d %d %d", &integer1, &integer2, &integer3);


    // Stampa calcolando ogni ramo decisionale del corretto ordinamento
    if (integer1 <= integer2) {
        
        if (integer1 <= integer3) {
            
            if (integer2 <= integer3) {
                printf("%d   %d   %d\n", integer1, integer2, integer3);
            }

            if (integer3 <integer2) {
                printf("%d   %d   %d\n", integer1, integer3, integer2);
            }
        }
    }

    if (integer2 < integer1) {
        
        if (integer2 < integer3) {
            
            if (integer1 <= integer3) {
                printf("%d   %d   %d\n", integer2, integer1, integer3);
            }

            if (integer3 < integer1) {
                printf("%d   %d   %d\n", integer2, integer3, integer1);
            }
        }
    }

    if (integer3 < integer1) {
        
        if (integer3 < integer2) {
            
            if (integer1 <= integer2) {
                printf("%d   %d   %d\n", integer3, integer1, integer2);
            }

            if (integer2 < integer1) {
                printf("%d   %d   %d\n", integer3, integer2, integer1);
            }
        }
    }
}