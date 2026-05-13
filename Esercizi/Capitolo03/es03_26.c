// (Trovare i due numeri più grandi) Usando un approccio simile a quello dell'esercizio 3.23, 
// trovate i due valori più grandi tra 10 numeri. POtete inserire un numero alla volta.
#include <stdio.h>

int main() {
    int largest1, largest2;

    // prelievo primi due interi
    printf("%s", "Inserisci un intero: ");
    scanf("%d", &largest1);
    printf("%s", "Inserisci un intero: ");
    scanf("%d", &largest2);

    // controllo per mettere il valore più grande in largest1
    if (largest2 > largest1) {
        int tmp = largest2;
        largest2 = largest1;
        largest1 = tmp;
    }

    // cicla 8 volte
    int counter = 1;
    while (counter <= 8) {
        int number;
        printf("%s", "Inserisci un intero: ");
        scanf("%d", &number);

        // aggiornamento valori massimi
        if (number > largest1) {
            largest2 = largest1;
            largest1 = number;
        } 
        else if (number > largest2) {
            largest2 = number;
        }

        counter++;
    }

    // Stampa dei risultati
    printf("I due valori più grandi sono %d e %d\n", largest1, largest2);
}