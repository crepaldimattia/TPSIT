/*Scrivere un programma in c che dopo aver inserito un vettore di N numeri controlli l’esistenza di
un numero richiesto successivamente all’utente. In caso affermativo visualizzare quante volte si
ripete il numero e che posizione/i occupa nel vettore utilizzato.*/

#include <stdio.h>

int main() {
	//variable declaration
    int N, num, trovato = 0, ripetizioni = 0;
    
    // I ask how many numbers you want to enter
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &N);

    // vector declaration
    int vettore[N];

    // entering numbers
    printf("Inserisci %d numeri nel vettore:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vettore[i]);
    }

    // I ask what number to look for
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &num);

    // Check the existence of the number and repeat count
    for (int i = 0; i < N; i++) {
        if (vettore[i] == num) {
            trovato = 1;
            ripetizioni++;
            //output
            printf("Il numero %d si trova alla posizione %d\n", num, i + 1);
        }
    }

    // Output the number of repetitions if found
    if (trovato) {
        printf("Il numero %d si ripete %d volte nel vettore.\n", num, ripetizioni);
    } 
	//elzeùùse
	else {
        printf("Il numero %d non è presente nel vettore.\n", num);
    }


}
