// (Quanto è veloce il tuo computer?) Come potete davvero stabile con quale velocità opera il vostro computer? Scrivete un programma con un ciclo whlie 
// che conti da 1 a 1.000.000.000 per incrementi di uno. Ogni volta che il conto raggiunge un multiplo di 100.000.000, stampate quel numero sullo schermo
// Usate il vostro orologio per cronometrare quanto tempo impiega ogni ciclo di 100.000.000 di iterazioni.
#include <stdio.h>

int main (void) {
    long int count = 1;

    // Ciclo di 1.000.000.000 iterazioni
    while (count <= 1000000000) {

        if (count % 100000000 == 0) {
            printf("%ld\n", count);
        }

        count++;
    }
}