// es02_19.c
// (Aritmetica, valore maggiore e valore minore) Scrivete un programma che riceva in ingresso tre diversi interi
// dalla tastiera, poi stampi la somma, la media, il prodotto, il minore e il maggiore di questi numeri. Usare
// solamente la forma a selezione singola dell'istruzione if.
#include <stdio.h>

int main(void) {
    int integer1 = 0, integer2 = 0, integer3 = 0;

    // Ottenimento interi da tastiera e assegnazione alle variabili
    printf("%s", "Enter three different integers: ");
    scanf("%d %d %d", &integer1, &integer2, &integer3);

    // Calcolo valore massimo e minimo
    int max = integer1;
    int min = integer1;

    if (min > integer2) {
        min = integer2;
    }

    if (min > integer3) {
        min = integer3;
    }

    if (max < integer2) {
        max = integer2;
    }

    if (max < integer3) {
        max = integer3;
    }

    // Stampa dei risultati
    printf("Sum is %d\n", integer1 + integer2 + integer3);
    printf("Avarage is %d\n", (integer1 + integer2 + integer3) / 3);
    printf("Product is %d\n", integer1 * integer2 * integer3);
    printf("Smallest is %d\n", min);
    printf("Largest is %d\n", max);
}