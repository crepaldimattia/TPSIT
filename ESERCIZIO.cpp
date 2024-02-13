/*Dopo aver letto N numeri (interi), con N scelto dall'utente 
e non superiore ai 30 elementi,  calcolare la somma e la media 
dei numeri pari, e dei numeri dispari (utilizzare %).*/

#include <stdio.h>
int main(){
   //variable declaration and initialization
   int numero, vett[30], cont, somma=0;
   float media=0;

   //do-while loop
   do{
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &numero);
    //if the number is <=0
    if(numero<=0){
        printf("Il numero deve essere maggiore di 0! \n");
    }
    //if the number is >30
    if(numero>30){
        printf("Si possono inserire massimo 30 numeri! \n");
    }
   }while(numero<=0 || numero>20);
   //for loop
   for(int i=0; i<numero; i++)
   {
    printf("Inserisci il numero: \n");
    scanf("%d", &vett[i]);
    //if the vector is >0
    if (vett[i]>0){
        cont++;
        somma=somma+vett[i];
    } 
    }
    //if the number of numbers entered are >0
    if(cont>0){
        media=(float)somma/cont;
        printf("La media dei numeri maggiori di 0 risulta: %.2f\n", media);
    }
    //if the numbers are <0
    else printf("Non ci sono numeri maggiori di 0");
    printf("La somma dei numeri maggiori di 5 risulta: %d\n", somma);
}