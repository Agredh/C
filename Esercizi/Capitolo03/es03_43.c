// (Lati di un triangolo) Scrivete un programma che legga tre valori interi diversi da zero e determini e 
// stampi se essi possono rappresentare i lati di un triangolo
#include <stdio.h>

int main(void) {
    int lato1, lato2, lato3;

    // Prelievo tre lati da tastiera
    printf("%s", "Inserisci il valore dei tre lati per verificare se possano rappresentare un triangolo: ");
    scanf("%d %d %d", &lato1, &lato2, &lato3);

    // Stampa risultato
    if (lato1<lato2+lato3 && lato2<lato1+lato3 && lato3<lato1+lato2) {
        puts("I valori inseriti possono rappresentare i lati di un triangolo.");
    } else {
        puts("I valori inseriti non possono rappresentare i lati di un triangolo.");
    }
}