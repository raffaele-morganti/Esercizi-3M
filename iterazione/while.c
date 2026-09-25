/* 
24/09/2026
calcolare il fattoriale di un numero
*/

#include <stdio.h>

int main(){
    // dichiaro una variabile per il numero da inserire, una per il risultato
    int number;
    int result = 1; // massimo numero possibile: 2^31-1 = 2'147'483'647

    // faccio inserire un numero all'utente
    printf("inserire un numero: ");
    scanf("%d", &number);

    // calcolo il fattoriale 
    while(number > 1){
        result = result * number;
        number = number - 1;
    }

    // mostro il risultato
    printf("il risultato è %d\n", result);
}