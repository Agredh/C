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

        // if controlla se si ci trova nella prima riga o nell'ultima e disegna due diverse righe
        int asterisco = 1;
        if (count==1 || count==lato) {
        
            // disegna una riga piena di asterischi
            while (asterisco <= lato) {
                printf("%s ", "*");
                asterisco++;
            }
        }
        else {
            // disegna un asterisco i dovuti spazi vuoti e l'asterisco finale
            printf("%s ", "*");

            while (asterisco <= lato-2) {
                printf("%s ", " ");
                asterisco++;
            }

            printf("%s ", "*");
        }

        puts("");
        count++;
    }
}