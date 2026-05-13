// (Quadrato di asterischi vuoto) Modificare il programma del precedente esercizio in modo che stampi un quadrato vuoto
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
            
            if ( (asterisco==1||asterisco==lato) || (count==1 || count==lato))
                printf("%s ", "*");
            else 
                printf("%s ", " ");
            asterisco++;
        }

        puts("");
        count++;
    }
}