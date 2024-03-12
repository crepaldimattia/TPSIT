/*Dopo aver caricato in memoria un 2 vettori di uguale dimensione composti da numeri interi
scrivere in output un terzo vettore dato dalla somma delle componenti fatta a una a una (Vettore
somma).*/

#include <stdio.h>

int main() {
    //variable declaration and initialization
    int n = 0;
    int v1[n], v2[n];
    int vettoreSomma[n];
    //I ask how many numbers he wants to enter
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);
    
   
    //FIRST VECTOR
    printf("PRIMO VETTORE\n");
    //for loop
    for(int i = 0; i < n; i++) {
        //entering numbers
        printf("Inserisci un numero di posizione %d: ", i + 1);
        scanf("%d", &v1[i]);
    }

    //SECOND VECTOR
    printf("SECONDO VETTORE\n");
    //for loop
    for(int q = 0; q < n; q++) {
        //entering numbers
        printf("Inserisci un numero di posizione %d: ", q + 1);
        scanf("%d", &v2[q]);
    }
    
    //for loop
    for(int w = 0; w < n; w++) {
        vettoreSomma[w] = v1[w] + v2[w];
    }

    //for loop
    //output with result
    printf("Il vettore somma è: ");
    for(int e = 0; e < n; e++) {
        printf("%d ", vettoreSomma[e]);
    }
    
    return 0;
}