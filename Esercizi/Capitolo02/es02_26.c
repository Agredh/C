// es02_26.c
// (Separazione delle cifre di un intero) Scrivete un programma che riceva in ingresso un numero di cinque cifre,
// separi il numero nelle sue cifre individuali e stampi le cifre ciascuna separata dall'altra da tre spazi.
#include <stdio.h>

int main(void) {
    int integer = 0;

    // Ricezione in ingresso dell'intero
    printf("%s", "Inserisci un intero a 5 cifre: ");
    scanf("%d", &integer);

    // Controllo che l'intero sia a 5 cifre
    if (integer > 99999 || integer < 10000) {
        printf("%s", "Hai inserito un intero che non ha cinque cifre!\n");
        return 0;
    }

    // Calcolo cifre 
    int cifra1 = integer % 10;
    int cifra2 = integer / 10 % 10;
    int cifra3 = integer / 100 % 10;
    int cifra4 = integer / 1000 % 10;
    int cifra5 = integer / 10000;

    // Stampa risultato
    printf("%d   ", cifra5);
    printf("%d   ", cifra4);
    printf("%d   ", cifra3);
    printf("%d   ", cifra2);
    printf("%d\n", cifra1);
}