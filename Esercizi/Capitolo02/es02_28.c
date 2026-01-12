// es02_28.c
// (Calcolare la frequenza cardiaca) La formula per calcolare la massima frequenza cardiaca in battiti al minuto 
// è 220 meno l'età. La frequenza cardiaca ideale durante l'allenamento dovrebbe essere il 50-85% della massima
// frequenza cardiaca. Scrivere un programma che richieda e legga l'età dell'utente e calcoli e visualizzi
// la massima frequenza cardiaca dell'utente e l'intervallo della frequenza cardiaca ideale.
#include <stdio.h>

int main(void) {
    int eta = 0;

    // Prompt richiesta e memorizzazione età
    printf("%s", "Inserisci l'età: ");
    scanf("%d", &eta);

    // Calcolo frequenza massima e intervallo ottimale
    int freq_max = 220 - eta;
    int freq_ideale_min = freq_max / 2;
    int freq_ideale_max = freq_max * 85 / 100;

    // Stampa risultati
    printf("La frequenza massima per un utente di %d anni è: %d\n", eta, freq_max);
    printf("L'intervallo ideale è [%d, %d]\n", freq_ideale_min, freq_ideale_max);
}