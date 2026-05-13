// (Quadrato di asterischi) Scrivete un programma che legga il lato di un quadrato e poi stampi quel quadrato con asterischi. Il programma deve operare
// con quadrati dalle dimensioni dei lati tra 1 e 20
#include <stdio.h>

int main(void) {
    int lato;

    printf("%s", "Inserisci la dimensione del quadrato: ");
    scanf("%d", &lato);

    // Validazione lato;
    while (lato<1 || lato>20) {
        puts("Hai inserito un valore per il lato non valido!");
        printf("%s", "Inserisci la dimensione del quadrato: ");
        scanf("%d", &lato);
    }


    // Disegno quadrato
    int count = 1;
    while (count <= lato) {

        int asterisco = 1;
        while (asterisco <= lato) {
            printf("%s ", "*");
            asterisco++;
        }

        puts("");
        count++;
    }
}