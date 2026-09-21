/* 
17/09/2026
verificare se un utente è maggiorenne
*/

#include <stdio.h>

int main(){
    // dichiaro una variabile intera dove salvo l'età
    int age;

    // faccio inserire un numero all'utente
    printf("inserire l'età: ");
    scanf("%d", &age);

    // utilizzo if-else per decidere cosa mostrare
    if(age >= 18){
        printf("Sei già maggiorenne!\n");
    }else{
        printf("Sei ancora minorenne!\n");
    }
}