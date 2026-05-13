// I guidatori sono interessati al consumo effettuato dalle loro automobili. Un guidatore ha tenuto traccia dei 
// vari pieni di carburante, registrando le miglia percorse e i galloni consumati per ogni pieno. Realizzate un 
// programma che utilizzi scanf per richiedere l'inserimento delle miglia percorse e dei galloni consumati per 
// ogni pieno. Il programma deve calcolare e stampare le miglia per gallone percorse per ogni pieno. Dopo aver 
// processato tutte le informazioni di input, il programma deve calcolare e stampare le miglia complessive per
// gallone percorse per tutti i pieni.
#include <stdio.h>

int main() {
    float galloni,
          miglia, 
          totale_Galloni = 0, 
          totale_Miglia = 0;

    printf("%s", "Enter the gallons used (-1 to end): ");
    scanf("%f", &galloni);

    while (galloni != -1) {
        printf("%s", "Enter the miles driven: ");
        scanf("%f", &miglia);
        printf("The miles/gallon for this tank was: %f\n\n", miglia / galloni);

        totale_Galloni += galloni;
        totale_Miglia += miglia;

        printf("%s", "Enter the gallons used (-1 to end): ");
        scanf("%f", &galloni);
    }

    printf("\nThe overall average miles/gallon was %f\n", totale_Miglia / totale_Galloni);
}