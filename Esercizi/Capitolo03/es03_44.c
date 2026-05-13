// (Lato di un triangolo rettangolo) Scrivete un programma che legga tre numeri interi diversi da zero e determini
// e stampi se possono essere i lati di un triangolo rettangolo.
#include <stdio.h>

int main(void) {
    int ipotenusa, lato2, lato3;

    // Prelievo tre lati da tastiera
    printf("%s", "Inserisci il valore dei tre lati per verificare se possano rappresentare un triangolo: ");
    scanf("%d %d %d", &ipotenusa, &lato2, &lato3);

    // Calcolo ipotenusa
    if (ipotenusa < lato2) {
        int tmp = lato2;
        lato2 = ipotenusa; 
        ipotenusa = tmp;
    }

    if (ipotenusa < lato3) {
        int tmp = lato3;
        lato3 = ipotenusa;
        ipotenusa = tmp;
    }

    // Stampa risultato
    if (ipotenusa*ipotenusa == lato2*lato2 + lato3*lato3) {
        puts("I tre lati rappresentano una terna pitagorica");
    } else {
        puts("I tre lati non rappresentano una terna pitagorica");
    }
}