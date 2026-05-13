// (Calcolo delle commissioni sulle vendite) Una grande compagnia chimica paga il suo personale addetto alle vendite
// su commissione. Il personale addetto alle vendite riceve $200 alla settimana più il 9% delle vendite lorde per 
// quella settimana. Per esempio un addetto alle vendite che vende $5000 di prodotti chimici in una settimana riceve
// $200 più il 9% di $5000, cioè un totale di $650. Sviluppare un programma che utilizzi scanf per leggere le vendite
// lorde di ogni addetto alle vendite nell'ultima settimana e calcoli e stampi i guadagni di quell'addetto. Elaborate
// i dati di un addetto alla volta.
#include <stdio.h>

int main() {
    float sales;

    // Prelievo prime vendite lorde
    printf("%s", "Enter sales in dollars (-1 to end): $");
    scanf("%f", &sales);

    // Ciclo controllato da un valore sentinella
    while (sales != -1) {
        // stampa il salario dell'addetto vendita
        printf("Salary is: $%.2f\n", 200 + 0.09 * sales);

        // prelievo vendite lorde dell'addetto successivo
        printf("%s", "\nEnter sales in dollars (-1 to end): $");
        scanf("%f", &sales);
    }
}