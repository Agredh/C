// (Calcolo del salario) Sviluppate un programma per calcolare lo stipendio lordo di ciascuno dei diversi impiegati.
// L'azienda paga quanto previsto all'ora per l'orario lavorativo normale per le prime 40 ore di lavoro e paga una
// una volta e mezza per tutte le ore di lavore oltre le 40 ore. Vi vengono dati una lista degli impiegati della 
// azienda, il numero di ore in cui l'impiegato ha lavorato l'ultima settimana e la paga oraria di ogni impiegato. 
// Il vostro programma deve usare scanf per leggere questi dati e determinare e stampare lo stipendio lordo per 
// ogni impiegato. I dati dovranno essere processati singolarmente per ogni impiegato.
#include <stdio.h>

int main() {
    int ore;
    float rate;

    // prelievo ore lavorative primo impiegato
    printf("%s", "Enter # of hours worked (-1 to end): ");
    scanf("%d", &ore);

    // ciclo controllato da valore sentinella
    while (ore != -1) {
        printf("%s", "Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);

        // calcolo e stampa salario
        float salario;

        if (ore <= 40) {
            salario = ore * rate;
        }
        else {
            salario = 40 * rate;
            salario += 1.5 * rate * (ore - 40); 
        }

        printf("Salary is %.2f\n", salario);

        //prelevio ore lavorative impiegato successivo
        printf("%s", "\nEnter # of hours worked (-1 to end): ");
        scanf("%d", &ore);
    }
}