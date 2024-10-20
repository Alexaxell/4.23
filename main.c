#include <stdio.h>
#include <math.h>

int main(void) {
    double Y;
    int X;
    printf("inserisci un numero reale positivo:\n");
    scanf("%d", &Y);
    X = (int)floor(Y);
    printf("il massimo intero X tale che X < Y è: %d\n", X);
    return 0;
}
