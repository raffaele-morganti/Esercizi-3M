/* 
02/10/2026
creare un gioco in cui il computer "pensa" a un numero casuale compreso tra 1 e 1000
l'utente dovrà poi provare a indovinarlo in vari tentativi ottenendo in risposta un
messaggio che indica se il numero inserito è troppo basso, troppo alto, o corretto
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // inizializzo il generatore di numeri casuali
    srand(time(NULL));
    // dichiaro le variabili
    int secret, attempt, count;

    // inizializzo numero tentativi e valore da indovinare
    count = 0;
    secret = rand() % 1000 + 1;

    // chiedo un numero all'utente
    do{
        count += 1;
        printf("Tentativo numero %d - inserisci un valore: ", count);
        scanf("%d", &attempt);

        if(attempt > secret){
            printf("Hai inserito un numero troppo alto\n");
        }else if(attempt < secret){
            printf("Hai inserito un numero troppo basso\n");
        }
    }while(attempt != secret);

    printf("Complimenti! Hai indovinato in %d tentativi\n", count);
}