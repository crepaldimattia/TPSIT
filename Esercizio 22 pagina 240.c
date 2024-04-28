
/*I codici a barre dei prodotti sono composti da 13 cifre, di cui l'ultima e' una cifra di controllo 
che si determina a partire dalle prime 12 (il codice vero e proprio) applicando le seguenti regole:
1)moltiplicare per 3 tutte le cifre in posizione dispari;
2)moltiplicare per 1 tutte le cifre in posizione pari;
3)sommare tra loro tutti i 12 valori così ottenuti;
4)calcolare il resto della divisione per 10 della somma ottenuta;
Codificare in linguaggio C un programma che, a paqrtire da un vettore di 12 elementi corrispondenti 
alle cifre di un codice a barre restituisca la cifra di controllo.*/
#include <stdio.h>
int main(){
	int numeri[12];
	int count=0;
	int somma=0;
	double cifraControllo=0;
	
	for(int i=0; i<12; i++){
		count++;
		printf("Inserisci il %d numero del codice a barre: ", count);
		scanf("%d", &numeri[i]);
	}
	
	
	
	for(int q=0; q<12; q++){
		if(q%2!=0){
			somma=somma+(numeri[q]*3);
		} else{
		    somma=somma+numeri[q];
		}
		printf(" %d ", numeri[q]);
	}

	
	cifraControllo=somma/10;
	printf("\nLa cifra di controllo è: %d", cifraControllo);	
	
	printf("\nIl codice a barre è: ");
	for(int e=0; e<12; e++){
	    printf(" %d ", numeri[e]);
	}
	printf(" %d ", cifraControllo);
}
