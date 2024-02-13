#include <stdio.h>
#include<string.h> //libreria per il comando strlen
int main(){
char stringa[15];   //le [] mi indicano la lunghezza della stringa
int lungh;
char stringa2[15];
printf("Inserisci una stringa: \n");
scanf("%s", stringa);   //%s=stringa. Non c'è & perchè nelle stringhe non serve
printf("\n");
printf("Hai inserito la seguente stringa: %s", stringa);
printf("La quinta lettera della stringa è la seguente: %c", stringa[4]);    //%c perchè è una lettera, quindi UN SOLO CARATTERE
printf("La seconda lettera della stringa è la seguente: %c", stringa[1]); //tra parentesi c'è il numero della lettera che voglio trovare -1
//stringa[5]='\0';    //dentro la parentesi c'è il numero dei caratteri che si vuole vedere
//printf("I primi 5 caratteri sono: %s", stringa);
printf("Funzioni principali: \n");
printf("Lunghezza (strlen)\n");
lungh=strlen(stringa);   //strlen=calcola la lunghezza della stringa
printf("La lunghezza della stringa inserita è: %d", lungh);
scanf("%s", stringa2);
strcpy(stringa,stringa2);
/*for(i=0; i<strlen(stringa2); i++){
    stringa[i]=stringa2[i];   
}*/
printf("La stringa di destinazione %s", stringa);


    return 0;
    
}