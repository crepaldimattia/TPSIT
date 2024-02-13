/*Scrivere un programma in C che, dopo aver letto N numeri (n scelto dall'utente) 
calcoli e visualizzi a video la somma dei numeri 
positivi, la somma dei numeri negativi in valore assoluto, 
il conteggio dei numeri negativi e positivi, la media dei numeri positivi e negativi.*/

#include <stdio.h>
int main(){
    //declaration and initialization of variables
    double numero, sommaP, sommaD, mediaD, mediaP;
    int nn, contD, contP;

    //do-while loop
    do{

        //l'utente inserisce quanti numeri desidera
        printf("Quanti numeri vuoi inserire? ");
        scanf("%d", &nn);

    //if the number is < 0 
    if(numero<0){
        printf("Il numero dei numeri deve essere positivo!!");
    }

}while(numero!=0);

    //I take the number as input
    printf("Inserisci il numero: \n");

//for loop 
for(int i=0; i<nn; ++i){
    scanf("%lf", &numero);
    
    //if the number is even or odd
    if(numero%2==0){
        sommaP=sommaP+numero;
    }else if (numero%2!=0){
        sommaD=sommaD+numero;
    }
    
    if(numero%2!=0){
        contD=contD+1;
    }else if (numero%2==0){
        contP=contP+1;
    }
    
    if(numero%2==0){
        mediaP=sommaP/contP;
    } else if (numero%2!=0) {
        mediaD=sommaD/contD;
    }
}

    //output results
    printf("La somma dei numeri pari è: %lf\n", sommaP);
    printf("La somma dei numeri dispari è: %lf\n", sommaD);
    printf("Il numero dei numeri dispari è: %d\n", contD);
    printf("Il numero dei numeri pari è: %d\n", contP);
    printf("La media dei numeri pari è: %.2lf\n", mediaP);
    printf("La media dei numeri dispari è: %.2lf\n", mediaD);
    
    return 0; 
}