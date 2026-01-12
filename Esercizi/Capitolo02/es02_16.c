// es02_16.c
// (Aritmetica) Scrivete un programma che legga due interi inseriti dall'utente, quindi ne stampi la somma, 
// il prodotto, la differenza, il quoziente e il resto
#include <stdio.h>

int main() {
    int integer1 = 0;
    int integer2 = 0;

    printf("%s", "Enter first integer: ");
    scanf("%d", &integer1);

    printf("%s", "Enter second integer: ");
    scanf("%d", &integer2);

    printf("Sum is %d\n", integer1 + integer2);
    printf("Difference is %d\n", integer1 - integer2);
    printf("Quotient is %d\n", integer1 / integer2);
    printf("Product is %d\n", integer1 * integer2);
    printf("Remainder is %d\n", integer1 % integer2);
}