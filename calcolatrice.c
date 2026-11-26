#include <stdio.h>

float somma(float a, float b) {
    return a + b;
}

float sottrazione(float a, float b) {
    return a - b;
}

float moltiplicazione(float a, float b) {
    return a * b;
}

float divisione(float a, float b) {
    return a / b;
}

int main() {
    float a, b;

    printf("Inserisci due numeri: ");
    scanf("%f %f", &a, &b);

    printf("Somma: %.2f\n", somma(a, b));
    printf("Sottrazione: %.2f\n", sottrazione(a, b));
    printf("Moltiplicazione: %.2f\n", moltiplicazione(a, b));

    if (b != 0)
        printf("Divisione: %.2f\n", divisione(a, b));
    else
        printf("Impossibile dividere per zero\n");

    return 0;
}
