/* 
12/11/2026
funzione per calcolare il fattoriale di un numero
*/

#include <stdio.h>


// int  è per numeri interi salvati in 32 bit (numero massimo 2^31 - 1)
// long è per numeri interi salvati in 64 bit (numero massimo 2^63 - 1)
long fattoriale(int n);

int main(){
    int number;
    long result;

    // faccio inserire un numero all'utente
    printf("inserire un numero: ");
    scanf("%d", &number);

    // evita di mostrare risultati errati
    if(number < 0 || number > 20){
        printf("Non so calcolare il fattoriale\n");
    }else{
        // calcolo il fattoriale con la funzione
        result = fattoriale(number);
        // mostro il risultato (%ld è usato per il tipo long)
        printf("%d! = %ld\n", number, result);
    }
}

long fattoriale(int n){
    long r = 1;
    for(int i=1; i<=n; i++){
        r *= i;
    }
    return r; // il risultato sarà esatto solo fino a 20!
}