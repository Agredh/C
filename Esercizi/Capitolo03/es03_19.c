// (Calcolo degli interessi) L'interesse semplice su un prestito è calcolato con la formula
//      interest = principal * rate * days / 365;
// La precedente formula presume che rate sia il tasso di interesse annuale, quindi effettua la divisione per 365
// (giorni). Sviluppate un programma che utilizzi scanf per leggere i valori principal, rate e days per diversi 
// prestiti, e calcoli e stampi l'interesse semplice per ogni prestito, usando la formula precedente.
#include <stdio.h>

int main() {
    float principal, 
          rate;
    int days;

    // Prelievo principal del primo prestito
    printf("%s", "Enter loan principal (-1 to end): $");
    scanf("%f", &principal);

    // Ciclo controllato da valore sentinella
    while (principal != -1) {
        printf("%s", "Enter interest rate: ");
        scanf("%f", &rate);
        printf("%s", "Enter term of the loan in days: ");
        scanf("%d", &days);

        // Stampa dell'interesse semplice
        printf("the interest charge is $%.2f\n", principal * rate * days / 365);

        // prelievo principal prestito successivo
        printf("%s", "\nEnter loan principal (-1 to end): $");
        scanf("%f", &principal);
    }
}