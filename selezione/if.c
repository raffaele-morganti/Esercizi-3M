/* 
18/09/2026
calcolare il valore assoluto di un numero
*/

#include <stdio.h>

int main(){
    // dichiaro una variabile
    float number;

    // faccio inserire un numero all'utente
    printf("inserire un numero: ");
    scanf("%f", &number);

    // utilizzo if per convertire i numeri negativi
    if(number < 0){
        number = -number;
    }

    // mostro il risultato
    printf("Il valore assoluto è: %g\n", number);
}