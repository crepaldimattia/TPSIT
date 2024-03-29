/*Scrivere un programma in C che dopo aver inserito una stringa a piacere permetta di:
   1) Eliminare 1 carattere scelto dall’utente ( o   più di 1 se si ripetono);   
   2) Eliminare 1 carattere scelto dall’utente in  base alla sua posizione;   
   3) Aggiungere 1  carattere scelto dall’utente alla fine della stringa;*/
  
    /*1) PER ELIMINARE UN CARATTERE: SPOSTARE TUTTI I CARATTERI DI UN POSTO IN BASE AL CARATTERE ELIMINATO
    2) CREARE UN ALTRO VETTORE--> CREARE IF E VEDERE SE I CARATTERI SONO DIVERSI DA QUERLLO SCELTO DALL'UTENTE, LO METTO ALL'INTERNO DELLA STRINGA*/    
    
#include <stdio.h>
#include <string.h>
int main(){
	//declaration and initialization of variables/arrays
	char stringa[100], stringaNuova[100];
	char eliminaCarattere, aggiungiCarattere;
	int posizione=0, nuovaLunghezza=0, lunghezzaAttuale=0;
	
	//insert string
	printf("Inserisci una stringa: ");
	scanf("%s", stringa);
	
	//ask which character you want to delete from the string
	printf("Che carattere vuoi eliminare? ");
	scanf(" %c", &eliminaCarattere);        //-> C'E' LO SPAZIO PRIMA DI % PER IGNORARE GLI SPAZI VUOTI NELLA STRINGA PRIMA DI INSERIRE IL CARATTERE
	
	//for loop
	for(int i=0; i<strlen(stringa); i++){
		//if the contents of the position it is scrolling is different from the character it needs to delete
		if(stringa[i]!=eliminaCarattere){
			//creating a new string
			stringaNuova[nuovaLunghezza]=stringa[i];
			//counter for the length of the new string
			nuovaLunghezza++;	//--> E' DOPO PERCHE' LA PRIMA POSIZIONE DELLA STRINGA E' SEMPRE 0
			
		}
	}
	stringaNuova[nuovaLunghezza]='\0'; //TERMINATORE DI STRINGA --> //STRING TERMINATOR
	
	//new string after character deletion
	printf("Stringa dopo l'eliminazione del carattere: %s", stringaNuova);
	
	//entering the position whose character you want to delete
	printf("\nInserisci la posizione del carattere che vuoi eliminare all'interno della stringa: ");
	scanf("%d", &posizione);
	
	//I reset the string length value to 0
	nuovaLunghezza=0;
	//for loop
	for(int w=0; w<strlen(stringa); w++){
		//if the location it controls is different from the one entered by the user
		if(w!=posizione){
 			//creating a new string			 
			stringaNuova[nuovaLunghezza]=stringa[w];
			//counter for the length of the new string
			nuovaLunghezza++;
		}
	}
	//string terminator
	stringaNuova[nuovaLunghezza]='\0';
	
	//new string after character deletion
	printf("\n Stringa dopo l'eliminazione del carattere in base alla sua posizione: %s", stringaNuova);
	
	//I ask which character he wants to add to the end of the string
	printf("\nChe carattere vuoi aggiungere alla fine della stringa? ");
	scanf(" %c", &aggiungiCarattere);
	
	//union of the two strings
	strcat(stringa, &aggiungiCarattere);  	//si utilizza & perchè si sta utilizzando un puntatore. Quindi bisogna inserirlo nella stringa e quindi occupa uno spazio di memoria in più rispetto la stringa iniziale --> //you use & because you are using a pointer. So you have to insert it into the string and therefore it takes up more memory space than the initial string
	
	//new string after adding the character
	printf("\nStringa dopo il carattere aggiunto alla fine di essa: %s", stringa);		
}
