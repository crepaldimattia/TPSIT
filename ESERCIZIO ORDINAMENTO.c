/*Dopo un vettore di N elementi scrivere un programma che ordini il vettore in ordine crescente. 
Utilizzare 2 Metodi di ordinamento: Boubble Sort e Selection sort .*/
#include <stdio.h>
int main(){
	//declaration and initialization of variables
	int lunghezza=0, count=0, temp=0, indice=0;
	
	//I ask how many numbers the user wants to enter
	printf("Quanti numeri vuoi inserire? ");
	scanf("%d", &lunghezza);
	
	////array declaration and initialization
	int array[lunghezza];
	
	//BUBBLE SORT
	//for loop
	for(int i=0; i<lunghezza; i++){
		//count variable
	    count++;
	    //I ask you to enter the numbers
	    printf("Inserisci il %d°numero: ", count);
	    scanf("%d", &array[i]);
	}
	
	//for loop for bubble sort
	for(int i=0; i<lunghezza-1; i++){
		for(int j=0; j<lunghezza-i-1; j++){
			if(array[j]>array[j+1]){
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;	
			}
		}
	}
	
	//output bubble sort
	printf("BUBBLE SORT: ");
	for(int i=0; i<lunghezza; i++){
		printf(" %d ", array[i]);
	}
	
	//SELECTION SORT
	//for loop for selection sort
	for(int i=0; i<lunghezza-1; i++){
		indice=i;
		for(int j=i+1; j<lunghezza; j++){
			if(array[j]<array[indice]){
				indice=j;
			}
		}
		temp=array[indice];
		array[indice]=array[i],
		array[i]=temp;	
	}
	
	//output selection sort
	printf("\nSELECTION SORT: ");
	for(int i=0; i<lunghezza; i++){
		printf(" %d ", array[i]);
	}	
}
