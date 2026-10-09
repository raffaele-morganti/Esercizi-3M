/* 
09/10/2026
creare un programma per validare la correttezza di una data inserita nella forma gg/mm/aaaa
*/
#include <stdio.h>

int main(){
    // dichiaro le variabili
    int day, month, year;

    // leggo una data inserita dall'utente
    printf("Inserire una data nella forma gg/mm/aaaa: ");
    scanf("%d/%d/%d", &day, &month, &year);
    
    if(month <= 0 || month > 12){
        printf("Il mese deve essere compreso tra 1 e 12.\n");
    }else if(day <= 0 || day > 31){
        printf("Il giorno deve essere compreso tra 1 e 31.\n");
    }else if(day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)){
        printf("Il mese %d ha massimo 30 giorni.\n", month);
    }else if(day > 29 && month == 2){
        printf("Il mese %d ha massimo 29 giorni.\n", month);
    }else if(day == 29 && month == 2 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))){
        printf("L'anno %d non è bisestile.\n", year);
    }else{
        printf("La data inserita è valida.\n");
    }
}