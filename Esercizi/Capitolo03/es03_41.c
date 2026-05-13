// (Diametro, Circonferenza e area di un cerchio) Scrivete un programma che legga il raggio di un cerchio (come valore double) 
// e calcoli e stampi il diametro, la circonferenza e l'area. Usate il valore 3.14159 per Pi.
#include <stdio.h>

int main(void) {
    const double PI = 3.14159;
    double raggio;

    // Prelievo valore raggio
    printf("%s", "Inserisci il valore del raggio del cerchioin centimetri: ");
    scanf("%lf", &raggio);

    // Stampa risultati
    printf("Il valore del diametro è %.5lfcm\n", 2 * raggio);
    printf("Il valore della circonferenza è %.5lfcm\n", 2 * PI * raggio);
    printf("Il valore dell'area è %.5lfcm\n", raggio * raggio * PI);

}