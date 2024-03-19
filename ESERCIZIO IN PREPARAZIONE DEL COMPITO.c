/*Scrivere un programma in C che dopo aver inserito una stringa a piacere determini e o verifichi:
1) Il numero di consonanti e vocali contenute;
2) Che contenga solo lettere;
3) Il conteggio di una lettera (se presente) scelta dall'utente;
4) Crei 2 ulteriori stringhe che contengano 1 le lettere di posizione pari; la 2° le lettere di posizione
dispari;
5) Verifichi se contiene doppie.
Inserita una 2° stringa determinare:
1) Quale delle 2° più lunga e più corta;
2) Quale delle 2 stringhe contiene più vocali;
3) Quale delle 2 stringhe contiene più consonanti;
4) Quali sono le lettere contenute in ambedue le stringhe;*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int main(){
    //declaration and initialization of variables and arrays
    char frase[100], frase2[100];
    bool verifica=true, doppia=true, verifica2=true;
    int contv1=0, contc1=0, contl=0, pariv=0, dispariv=0, ris=0, confronto1=0, confronto2=0, contv2=0, contc2=0, trovato=0;
    char lettera;

	//do-while loop to check if there are letters in the second string
    do{
   	//inserting first string
    printf("\nInserisci una stringa: ");
    scanf("%s", frase);

	//for loop
    for(int i=0; i<strlen(frase); i++){
    		//if checks whether the string contains all letters or not
            if((frase[i]>='a'&&frase[i]<='z')||(frase[i]>='A'&&frase[i]<='Z')){
                verifica=true;
                
            } else{
                printf("Devi inserire solo lettere!");
                verifica=false;
            }
            
            
            
        }
   }while(!verifica);
    
    //for loop
    for(int q=0; q<strlen(frase); q++){
    	//conversion, if there are uppercase letters, all lowercase
    	if(isupper(frase[q])){
    		frase[q]=tolower(frase[q]);
		}
		//vowel/consonant count in string 1
    	if(frase[q]=='a'||frase[q]=='e'||frase[q]=='i'||frase[q]=='o'||frase[q]=='u'){
    		contv1++;
		} else{
			contc1++;
		}
	}
	
	//output number of vowels/consonants
	printf("\nIl numero di vocali nella stringa %s è: %d", frase, contv1);
	printf("\nIl numero di consonanti nella stringa %s e: %d", frase, contc1);
	
	//inserting second string
	printf("\nInserisci la lettera in minuscolo da cercare: ");
	scanf(" %c", &lettera);
	//for loop
	for(int w=0; w<strlen(frase); w++){
		//conversion, if there are uppercase letters, all lowercase
		if(tolower(frase[w])==tolower(lettera)){
			contl++;
		    
		}
	}
	//output of the number of times the letter entered by the user is present in string 1
	printf("\nLa lettera %c all'interno della stringa %s è: %d", lettera, frase, contl);
	
	//output the letters of string 1 that are in the even position
    printf("\nLe lettere in posizione pari sono: ");
    //for loop
    for(int e=0; e<strlen(frase); e++){
	    if(e%2==0){
            printf("%c", frase[e]);
	    }
    }
	//output letters in even position
	printf("\nLe lettere in posizione dispari sono: ");
	for(int r=0; r<strlen(frase); r++){
	    if(r%2!=0){
            printf("%c", frase[r]);
	    }
	}
	//for loop
	for(int t=0; t<strlen(frase); t++){
	    if(frase[t]==frase[t+1]){
	        doppia=true;
	    } else{
	        doppia=false;
	    }
	}
	
	//I check if there are any doubles in line 1
	if(doppia==true){
	    printf("\nSono presenti delle doppie");
	} else{
	    printf("\nNon ci sono doppie");
	}
	
	
	
	
	
	
	
	
	//do-while loop
	do{
	//insertion of second string
    printf("\nInserisci un'altra stringa: ");
	scanf("%s", frase2);

	//for loop
    for(int y=0; y<strlen(frase2); y++){
			//I check if there are letters in the second string
            if((frase2[y]>='a'&&frase2[y]<='z')||(frase2[y]>='A'&&frase2[y]<='Z')){
                verifica2=true;
                
            } else{
                printf("Devi inserire solo lettere!");
                verifica2=false;
            }
            
            
            
        }
   }while(!verifica2);
	
	//I check if the two strings have the same length
	ris=strcmp(frase, frase2);
	if(ris=0){
		//output
	    printf("Le due stringhe sono uguali!");
	} else if(ris<0){
		//output
	    printf("Le due stringhe sono diverse!");
	}
	
	//asI assign to the variables confronto1 and confronto2 their length
	confronto1=strlen(frase);
	confronto2=strlen(frase2);
	
	//I check which string is longer/shorter or if they are the same
	if(confronto1>confronto2){
	    printf("La stringa più lunga è: %s. La più corta è: %s", frase, frase2);
	} else if(confronto1<confronto2){
	    printf("La stringa più lunga è: %s. La più corta è: %s", frase2, frase);
	} else{
	    printf("Le due stringhe hanno uguale lunghezza!");
	}
	
	//for loop
    for(int u=0; u<strlen(frase2); u++){
    	//conversion, if there are uppercase letters, all lowercase
        if(isupper(frase2[u])){
    		frase2[u]=tolower(frase2[u]);
		}
		//count number of vowels/consonants within the second string
    	if(frase2[u]=='a'||frase2[u]=='e'||frase2[u]=='i'||frase2[u]=='o'||frase2[u]=='u'){
    		contv2++;
		} else{
			contc2++;
		}
    }
    
    //output vowels
    if(contv1>contv2){
        printf("\nLa stringa %s ha più vocali!", frase);
    } else if(contv1<contv2){
        printf("\nLa stringa %s ha più vocali!", frase2);
    } else{
        printf("\nLe due stringhe hanno il numero di vocali uguali!");
    }
    
    //output consonants
    if(contc1>contc2){
        printf("\nLa stringa %s ha più consonanti!", frase);
    } else if(contv1<contv2){
        printf("\nLa stringa %s ha più consonanti!", frase2);
    } else{
        printf("\nLe due stringhe hanno il numero di consonanti uguali!");
    }
    
    //I check the letters present in both strings
    printf("\nLe lettere in ambedue le stringhe sono: ");
    for(int o=0; o<strlen(frase); o++){
    	//for loop
        for(int p=0; p<strlen(frase2); p++){
            if(frase[o]==frase2[p]){
           	//output
            printf("%c", frase[o]);
            trovato==1;
            break;
            }
        
        } 
        
    }
    
    // if the two strings have no letters in common
    if(!trovato){
    	//output
        printf("le due stringhe non hanno lettere in comune!");
    }
}
