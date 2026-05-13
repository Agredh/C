// (contare i 7) Scrivete un programma che legga un numero intero e determini e stampi quante cifre uguali a 7 ci sono nel numero.
#include <stdio.h>

int main(void) {
    int number;
    int counter_Of_7 = 0;

    // Prelievo del numero da tastiera
    printf("%s", "Inserisci un numero intero: ");
    scanf("%d", &number);

    // Scansione del numero
    int potenza_10 = 1;
    while (potenza_10 <= number) {
        int cifra = number / potenza_10 % 10;

        if (cifra == 7) {
            ++counter_Of_7;
        }

        potenza_10 *= 10;
    }

    printf("Il numero di 7 all'interno dell'intero inserito è %d\n", counter_Of_7);
}