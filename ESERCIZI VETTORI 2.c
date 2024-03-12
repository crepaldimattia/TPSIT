/*Scrivere un programma in c che dopo aver inserito un vettore di N numeri interi separi il vettore
inserito in 2 ulteriori vettori il primo contenente i numeri pari ed il secondo con i numeri dispari.*/

#include <stdio.h>
int main(){
	//variable declaration and initialization
	int n=0;
	
	//I ask how many numbers you want to enter
	printf("Quanti numeri vuoi inserire? ");
	scanf("%d", &n);
	
	//vector declaration
	int v[n], pari[n], dispari[n];
	int cpari=0, cdispari=0;
	
	//for loop
	for(int i=0; i<n; i++){
		//entering numbers
		printf("Inserisci il %d nuemro: ", i+1);
		scanf("%d", &v[i]);
		
		//if numberi is even
		if(v[i]%2==0){
			pari[cpari]=v[i];
			cpari++;		
			
		}
		//else
		else{
			dispari[cdispari]=v[i];
			cdispari++;
		}
	}
 
 	//output
	printf("Numeri pari: ");
	//for loop
	for(int q=0; q<cpari; q++){
		printf("%d ", pari[q]);
	}
	
	//output
	printf("\n Numeri dispari: ");
	//for loop
	for(int w=0; w<cdispari; w++){
		printf("%d ", dispari[w]);
	}
	

}
