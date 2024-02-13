 /*Una banca vuole conoscere alcune informazioni sulle proprie azioni detenute in portafoglio.
Scrivere il programma in c che dopo aver inserito da tastiera la denominazione dell’azione e il suo prezzo
determini e visualizzi in Output:
1) La somma dei prezzi delle azioni;
2) La media dei prezzi delle azioni;
3) L’azione con il prezzo massimo;
4) L’azione con il prezzo minimo
5) La media dei prezzi delle azioni con un importo compreso tra 2,50 e 3,50 euro, estremi inclusi.
L’inserimento termina con la parola “terminato”.
Il programma deve permettere il reinserimento del prezzo se è pari a zero o inferiore.*/

#include <stdio.h>
void main(){

    //declaration and initialization of variables
    char azione;
    double prezzo, somma=0, media=0, massimo=0, minimo=0, somma2=0, media2=0;
    int fine, contatore=0, contatore2=0;

//do-while loop
do{

    //get the character of the action name
    printf("\nInserisci la denominazione dell'azione: ");
    scanf("%c", &azione);

    //I acquire the price
    printf("\nInserisci il prezzo: ");
    scanf("%lf", &prezzo);

    //calculation of the sum
    somma=somma+prezzo;

    //average calculation
    contatore=contatore+1;
    media=somma/contatore;

    //maximum price calculation
    //for loop
    for (int i = 0; i < prezzo; i++) {
        if (prezzo > massimo) {
            massimo= prezzo;
        }
    }

    //minimum price calculation
    //for loop
     for (int i = 0; i < prezzo; i++) {
        if (prezzo < minimo) {
            minimo = prezzo;
        }
    }

    //if the price is between 2.5 and 3.5 inclusive
    if(prezzo>=2.5 && prezzo<=3.5){
        somma2=somma2+prezzo;
        contatore2=contatore2+1;
        media2=somma2/contatore2;
    }

    //if you want to end the loop
    printf("\nVuoi terminare? Digita 0 per terminare e 1 per continuare. Altri caratteri terminarenno il programma! ");
    scanf("%d", &fine);
    

}while(fine!=0);
    
    //final output
    printf("\nLa somma dei prezzi delle azioni è: %lf\n", somma);
    printf("La media dei prezzi delle azioni è: %lf\n", media);
    printf("L’azione con il prezzo massimo è: %lf\n", massimo);
    printf("L’azione con il prezzo minimo è: %lf\n", minimo);
    printf("La media dei prezzi delle azioni con un importo compreso tra 2,50 e 3,50 euro è: %lf\n", media2);

}