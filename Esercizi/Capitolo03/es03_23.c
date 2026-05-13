// (Trovare il numero più grande) Il processo di elaborazione che consiste nel trovare il numero 
// più grande si usa frequentamente nelle applicazioni informatiche. Scrivete un programma che utilizzi
// scanf per leggere una serie di 10 numeri non-negativi e determini e stampi il maggiore dei numeri.
// Il vostro programma deve usare tre variabili: 
// a) counter. un contatore per contare fino a 10; 
// b) number: il numero corrente inserito nel programma;
// a) largest: il numero maggiore trovvato fino a quel momento.
#include <stdio.h>

int main() {
    int counter = 0;
    int number;
    int largest = -1;

    // cicla 10 volte
    while (counter < 10) {
        printf("%s", "Inserisci un intero positivo: ");
        scanf("%d", &number);

        // si assicura che il numero inserito sia positivo
        while (number < 0) {
            printf("%s", "Il numero inserito non è positivo.\n");
            printf("%s", "Inserisci un intero positivo: ");
            scanf("%d", &number);
        }

        // controllo se il nuovo numero inserito è maggiore del massimo attuale
        if (number > largest) {
            largest = number;
        }

        counter++;
    }

    // Stampa risultato
    printf("L'intero inserito più grande è %d\n", largest);
}