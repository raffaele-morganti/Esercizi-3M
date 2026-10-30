/* 
30/10/2026
creare una funzione in grado di scambiare il contenuto di due variabili
*/
#include <stdio.h>

// void: non restituisce nulla
void scambia(int* var1, int* var2);

int main(){
    int number1, number2;

    printf("Inserire il primo numero: ");
    scanf("%d", &number1); // passo l'indirizzo della variabile
    printf("Inserire il secondo numero: ");
    scanf("%d", &number2); // passo l'indirizzo della variabile

    // mostro i contenuti delle variabili di partenza
    printf("Prima\t- number1:%3d\t- number2:%3d\n", number1, number2);
    
    // chiamo la funzione passando gli indirizzi della variabile
    scambia(&number1, &number2);

    // mostro i contenuti delle variabili dopo lo scambio
    printf("Dopo\t- number1:%3d\t- number2:%3d\n", number1, number2);
}


void scambia(int* var1, int* var2){
    int temp;
    temp = *var1;
    *var1 = *var2; // cambiare *var1 equivale a cambiare number1 nel main
    *var2 = temp;  // cambiare *var2 equivale a cambiare number2 nel main
}