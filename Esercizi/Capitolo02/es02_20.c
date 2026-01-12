// es02_20.c
// (Area, diametro e circonferenza di un cerchio) Stampate il diametro, la circonferenza e l'area di un cerchio
// con un raggio pari a 2. Usate il valore 3.14159 per pi.
// Effettuate ognuno di questi calcoli all'interno dell'istruzione printf usando la specifica di conversione %f.
#include <stdio.h>

int main(void) {
    // dichiarazione e inizializzazione variabili
    int raggio = 2;
    const float PI = 3.14159;

    // Stampa risultati
    puts("Informazioni cerchio di raggio 2.\n");
    printf("Diametro: %d\n", raggio * 2);
    printf("Circonferenza: %f\n", 2 * PI * raggio);
    printf("Area: %f\n", PI * raggio * raggio);
}