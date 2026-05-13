// (Modello di scacchiera di asterischi) Scrivete un programma che stampi una configurazione a scacchiera 8X8.
#include <stdio.h>

int main(void) {
    int count = 1;
    int n = 8;
    
    while (count <= n) {
        
        int riga = 1;
        while (riga <= n) {

            if (count % 2 == 0) {
                printf("%s", " ");
                printf("%s", "*");
            } else {
                printf("%s", "*");
                printf("%s", " ");
            }

            ++riga;
        }

        puts("");
        count++;
    }
}