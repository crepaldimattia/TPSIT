/*
Dato un numero N intero positivo, 
stampare la somma dei primi N numeri primi alternati (uno sì e uno no)
*/


#include <stdio.h>


void main() {

    //declaration and initialization of variables
    int numero = 0;
    int c = 2;
    int somma = 0;
    int _flagPrimo;

    //user enters a number
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    //for loop
    for (int i = 1; i < numero; i++) {

        
        //if i>1
        if (i > 1) {
            
            
            _flagPrimo = 1;
            
                

            // Evaluate whether the number is prime
            for (int j = 2; j <= i / 2 && j != i; j++) {
                
                if (i % j == 0) {
                    _flagPrimo = 0;
                    break;
                }
            }
            
            printf("Count: %d\n", c);
            
            // if the number is prime and the counter is even then I update the sum
            if (_flagPrimo && c % 2 == 0) somma += i;
            
            // if the number (i) is prime then I update the counter
            if (_flagPrimo == 1) c++;
        }
        
        
        
    }
    
    printf("\nResult: %d\n", somma);
}