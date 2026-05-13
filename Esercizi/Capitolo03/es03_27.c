// (Convalidare l'input dell'utente) Modificare il programmma della figura 3.6 per convalidare i suoi input.
// Per qualunque input, se il valore inserito è diverso da 1 o da 2, continuate l'interazione finchè l'utente
// non inserisce un valore corretto.
#include <stdio.h>

int main() {
    int passes = 0;
    int failures = 0; 
    int student = 1;

    while (student <= 10) {
        printf("%s", "Inserisci risultato (1=pass, 2=fail): ");
        int result = 0;
        scanf("%d", &result);

        // Iterazione per validificazione risultato
        while (result!=1 && result!=2) {
            puts("Valore inserito non valido!");
            printf("%s", "Inserisci risultato (1=pass, 2=fail): ");
            scanf("%d", &result);
        }

        if (result == 1) {
            ++passes;
        }
        else {
            ++failures;
        }

        ++student;
    }

        printf("Passed %d\n", passes);
            printf("Failed %d\n", failures);

        if (passes > 8) {
            puts("Bonus to instructor!");
        }
}