/* 
01/10/2026
far inserire un voto valido all'utente (in caso di errore richiedere l'inserimento)
se il voto è valido il programma deve indicare se sufficiente o insufficiente 
*/

#include <stdio.h>

int main(){
    // dichiaro una variabile per il voto da inserire
    float mark;
    
    do{
        // faccio inserire un voto all'utente
        printf("inserire un voto valido: ");
        scanf("%f", &mark);
    }while(mark < 1 || mark > 10);
    // ritorno al do quando il voto non è valido

    // se il voto è valido mostro il messaggio di output 
    if(mark >= 6){
        printf("sufficiente\n");
    }else{
        printf("insufficiente\n");
    }
}