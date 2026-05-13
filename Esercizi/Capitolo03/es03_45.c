// (Fattoriale) Il fattoriale di un numero intero non negativo n si scrive con n! ed è definito come segue:
// n! = n * (n-1) * (n-2) * ... * 1
// e 
// n! = 1 se n=0
// a) Scrivere un programma che legga un numero intero non negativo e calcoli e stampi il suo fattoriale
// b) Scrivete un programma che valuti il valode della costante matematica e usando la formula: 
// e = 1 + 1/1! + 1/2! + 1/3! + ...
// c) Scrivete un programma che calcoli il valore e^x usando la formula: 
// e^x = 1 + x/1! + x^2/2! + x^3/3!
#include <stdio.h>

int main(void) {
    int fattoriale = 1;
    int number;
    
    //////////////////////////////////////      A       ///////////////////////////////////////////////////////////
    // Prelievo intero non negativo.
    printf("%s", "Inserisci l'intero non negativo di cui si vuole calcolare il fattoriale: ");
    scanf("%d", &number);

    // Calcolo fattoriale
    int intero = number;
    while (intero >= 2) {
        fattoriale *= intero;
        intero--;
    }

    // Stampa risultato
    printf("Il valore del fattoriale è %d\n\n", fattoriale);

    //////////////////////////////////////      B       ///////////////////////////////////////////////////////////
    double e = 1;
    int count = 1;

    while (count <= 20) {
        int fattoriale = 1;
        int intero = count;

        // Calcolo Fattoriale
        while (intero >= 2) {
        fattoriale *= intero;
        intero--;
        }

        e += (double) 1 / fattoriale;
        ++count;
    }

    printf("L'approssimazione di e ai primi 20 termini della serie è %lf\n\n", e);

    //////////////////////////////////////      C       ///////////////////////////////////////////////////////////
    double potenza_e = 1;
    int x = number;
    long long int potenza_x = x;
    count = 1;

    while (count <= 20) {
        long long int fattoriale = 1;
        int intero = count;

        // Calcolo Fattoriale
        while (intero >= 2) {
        fattoriale *= intero;
        intero--;
        }

        potenza_e += (double) potenza_x / fattoriale;

        potenza_x *= x;
        ++count;
    }

    printf("L'approssimazione di e^x ai primi 20 termini della serie è %lf\n\n", potenza_e);
}