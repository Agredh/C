// (Verifica dei limiti di credito) Sviluppate un programma in C per determinare se un cliente di un grande magazzino
// ha superato il limite di credito sul suo conto di addebito. Per ogni cliente sono a disposizione i seguenti dati: 
// a) Numero del conto;
// b) Saldo iniziale del mese;
// c) Totale delle voci addebidate sul conto del cliente nel mese;
// d) Totale dei crediti applicati nel mese al conto del cliente;
// e) Limite di credito concesso.
// Il programma deve usare scanf per leggere tali dati, calcolare il nuovo saldo (=saldo iniziale+addebiti-crediti) 
// e determinare se il nuovo saldo supera il limite di credito del cliente. Per quei clienti il cui limite di 
// credito è stato superato, il programma deve stampare il numero del conto del cliente, il limite di credito, il 
// nuovo saldo e il messaggio "Limite di credito superato".
#include <stdio.h>

int main() {
    int n_Conto;
    float saldo_Iniziale,
          totale_Addebiti,
          totale_Crediti,
          limite_Credito;

    printf("%s", "Enter account number (-1 to end): ");
    scanf("%d", &n_Conto);

    // cicla con controllo di un valore sentinella
    while (n_Conto != -1) {
        // Fase lettura dati
        printf("%s", "Enter beginning balance: ");
        scanf("%f", &saldo_Iniziale);
        printf("%s", "Enter total charges: ");
        scanf("%f", &totale_Addebiti);
        printf("%s", "Enter total credits: ");
        scanf("%f", &totale_Crediti);
        printf("%s", "Enter credit limit: ");
        scanf("%f", &limite_Credito);

        // stampa risultati se il nuovo bilancio è superiore al limite di credito concesso
         float nuovo_Saldo = saldo_Iniziale + totale_Addebiti - totale_Crediti;
        if (limite_Credito < nuovo_Saldo) {
        printf("Account:      %d\n", n_Conto);
        printf("Credit Limit: %.2f\n", limite_Credito);
        printf("Balance:      %.2f\n", nuovo_Saldo);
        puts("Credit limit exceeded.");
        }

        // aggiornamento valore n_Conto
        printf("%s", "\nEnter account number (-1 to end): ");
        scanf("%d", &n_Conto);
    }
}