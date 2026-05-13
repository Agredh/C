// (Test di palindromi) Scrivete un programma che legga un numero intero di cinque cifre e determini se sia o meno un palindromo
#include <stdio.h>

int main(void) {
    int number;

    // Prelievo intero da 5 cifre
    printf("%s", "Inserisci un intero a 5 cifre: ");
    scanf("%d", &number);

    // Validazione input
    while (number<10000 || number>99999) {
        puts("Il numero inserito non è un intero a 5 cifre!");
        printf("%s", "Inserisci un intero a 5 cifre: ");
        scanf("%d", &number);
    }

    // Ciclo verifica palindromo
    int palindromo = 1;
    int indice1 = 1, indice2 = 10000;
    while (palindromo == 1 && indice1<=indice2) {
        
        if (number / indice1 % 10 != number /indice2 % 10) {
            palindromo = 0;
        }

        indice1 *= 10;
        indice2 /= 10;
    }

    // Stampa risultato
    if (palindromo == 1) {
        puts("Il numero inserito è palindromo.");
    } else {
        puts("Il numero inserito non è palindromo.");
    }
}