/*Su una somma di denaro (relativa all'acquito di un prodotto) si vuole applicare uno sconto in base all'importo inserito seguendo il seguente schema:
            da 0 a 500€ sconto del 10%;
            da 501 a 1000 sconto del 20%;
            oltre i 1001 sconto 30%;
 Il programma dopo aver calcolato e visualizzato a video lo sconto ed il prezzo netto deve permettere di re-inserire
 ulteriori somme di denaro.*/

#include <stdio.h>
int main(){

// declaration and initialization of variables
double prezzo = 0;
double totale = 0;

//do-while loop
do
{
    //user enters price
    printf("\n Inserisci il prezzo: ");
    scanf("%lf", &prezzo);

    //if the price is >=0 and <= 500
    if (prezzo <= 500)
    {
        //calculations and output result
        totale = prezzo*10 / 100;
        printf("SCONTO DEL 10");
        printf("\n Il prezzo totale è: %.2lf", totale);
    } else{
        
    //if the price is >= 501 and <= 1000
    if (prezzo > 1001);
        {
            totale = prezzo * 30 / 100;
        printf("SCONTO DEL 30 ");
        printf("\n Il prezzo totale è: %.2lf", totale);
            
        }

  //if the price is >=1001
    else  {
        totale = prezzo * 20 / 100;
            printf("\n SCONTO DEL 20");
            printf("\n Il prezzo totale è: %.2lf", totale);
    }
    }
} while (prezzo != 0);
}