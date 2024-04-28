#include <stdio.h>

int main() {
	//variable declaration and initialization
    int lunghezza = 0, count = 0;
    //I ask how many numbers the user wants to enter
    printf("Inserisci la lunghezza del vettore: ");
    scanf("%d", &lunghezza);

	//variable declaration and initialization and array
    double array[lunghezza];
    double somma = 0, media = 0;
    double max, min;

	//for loop
    for (int i = 0; i < lunghezza; i++) {
        count++;
        //I have the user enter a number
        printf("Inserisci il %d numero: ", count);
        scanf("%lf", &array[i]);
        somma += array[i];
    }

	//calculation of the average
    media = somma / lunghezza;

    max = array[0];
    min = array[0];

	//for loop
    for (int i = 1; i < lunghezza; i++) {
    	//I find the maximum number
        if (array[i] > max) {
            max = array[i];
        }
        //I find the minimum number
        if (array[i] < min) {
            min = array[i];
        }
    }

	//output
    printf("La media è: %lf\n", media);
    printf("Il numero massimo è: %lf\n", max);
    printf("Il numero minimo è: %lf\n", min);

    return 0;
}
