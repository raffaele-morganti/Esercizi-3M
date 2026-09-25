/* 
25/09/2026
calcolare il fattoriale di un numero
*/

#include <stdio.h>

int main(){
    // dichiaro una variabile per il numero da inserire, una per il risultato
    int number;
    // double precision (virgola mobile) salva anche numeri molto grandi (approssimati)
    double result = 1; // il risultato sarà esatto solo fino a 22! poi viene approssimato

    // faccio inserire un numero all'utente
    printf("inserire un numero: ");
    scanf("%d", &number);

    // calcolo il fattoriale con il ciclo for
    //   inizial.; condizione ; agg.
    for(int i = 1; i <= number; i++){
        result = result * i;
    }

    // mostro il risultato (%.f significa non mostrare cifre dopo la virgola)
    printf("%d! = %.f\n", number, result);
}