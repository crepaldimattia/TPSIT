/*Scrivere
un programma in C che dopo aver inserito una stringa a piacere
permetta di:

1)Inserire un carattere, scelto dall’utente in una posizione sempre
scelta dall’utente;

2)Sostituisca un carattere, scelto dall’utente, con il seguente: X.*/
#include <stdio.h>
#include <string.h>
int main(){
	//declaration and initialization of variables/arrays
	char stringa [100], carattere, carattereDaSostituire, stringaAggiunta[100];
	int posizione=0, nuovaLunghezza=0;
	
	//inserting the string
	printf("Inserisci una stringa: ");
	scanf("%s", stringa);
	
	//I ask for the character you want to insert
	printf("Che carattere vuoi inserire? ");
	scanf(" %c", &carattere);
	
	//do-while loop
	do{
		//I ask in which position he wants to insert the character
		printf("In che posizione vuoi inserire il carattere? ");
		scanf("%d", &posizione);
		
		//if the position is <0 or is greater than the length of the string +1
		if(posizione<0||posizione>strlen(stringa)+1){
			//output
			printf("Posizone non valida. ");
		}
	}while(posizione<0||posizione>=strlen(stringa)+1);
	
	//for loop
	for(int i=strlen(stringa); i>=posizione; i--){
		stringa[i+1]=stringa[i];
	}
	stringa[posizione]=carattere;
	//output
	printf("Stringa aggiornata: %s", stringa);
	
	//I ask what character he wants to replace with the X
	printf("\nChe carattere vuoi sostituire con una X? ");
	scanf(" %c", &carattereDaSostituire);
	
	//for loop
	for (int i = 0; i < strlen(stringa); i++){
		//I check if the string cell contains the character you entered to replace
        if (stringa[i] != carattereDaSostituire) {
            stringaAggiunta[i] = stringa[i];
        } else {
            stringaAggiunta[i] = 'X';
        }
    }
    //string terminator
    stringaAggiunta[strlen(stringa)] = '\0';

	//output 
    printf("Stringa aggiornata dopo la sostituzione del carattere con X: %s\n", stringaAggiunta);
}
