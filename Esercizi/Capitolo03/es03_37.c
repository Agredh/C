// (Trovare multipli di 10) Scrivete un programma che stampi 100 asterischi, uno alla volta. Dopo ogni decimo asterisco, il programma deve stampare
// un carattere newline.
#include <stdio.h>

int main (void) {
    int count = 1;

    while (count <= 100) {
        printf("%s", "* ");

        if (count % 10 == 0) {
            puts("");
        }

        ++count;
    }
}