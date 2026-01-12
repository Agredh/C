// (Stampa di valori con printf) Scrivete un programma che stampi sulla stessa riga i numeri da 1 a 4.
// Scrivete il programma usando i seguenti metodi.
//    a) Uso di una sola istruzione printf senza specifiche di conversione.
//    b) Uso di una sola istruzione printf con quattro specifiche di conversione.
//    c) Uso di quattro istruzioni printf.
#include <stdio.h>

int main(void) {
    // a) Uso una istruzione senza specifiche di conversione
    printf("1  2  3  4\n\n");

    // b) Uso una istruzione con specifiche di conversione
    printf("%d  %d  %d  %d\n\n", 1, 2, 3, 4);

    // c) Uso di quattro istruzioni
    printf("1  ");
    printf("2  ");
    printf("3  ");
    printf("4\n\n");
}