// (Stampare l'equivalente decimale di un numero binario) Inserite un numero intero binario (di 5 cifre o meno) contenente soltanto
// valori pari a 0 o 1 e stampate il suo equivalente decimale. 
#include <stdio.h>

int main(void) {
    int binario,
        decimale = 0; 

    // Prelievo intero binario
    printf("%s", "Inserire un numero intero binario: ");
    scanf("%d", &binario);

    // Calcolo valore decimale
    int potenza10 = 1;
    int potenza2 = 1;
    while (potenza10 < binario) {
        int cifra = binario / potenza10 % 10;
        decimale += cifra * potenza2;

        potenza10 *= 10;
        potenza2 *= 2;
    }

    // Stampa risultato 
    printf("Il valore decimale dell'intero inserito è pari a %d.\n", decimale);
}