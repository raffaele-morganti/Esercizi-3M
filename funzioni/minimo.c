/* 
22/10/2026
creare una funzione per trovare il minimo tra due numeri
*/
#include <stdio.h>

// tipo_restituito nome_funzione(argomenti);
float minimo(float num1, float num2); // dichiarazione

int main(){ // funzione principale
    float number1, number2, min;

    printf("Inserire il primo numero: ");
    scanf("%f", &number1);
    printf("Inserire il secondo numero: ");
    scanf("%f", &number2);

    // chiamo la funzione e salvo il risultato nella variabile min
    min = minimo(number1, number2);

    printf("Il minimo è %g\n", min);
}

float minimo(float num1, float num2){ // definizione
    if(num1 > num2){
        // la funzione termina restituendo il valore di num2
        return num2;
    }else{
        // la funzione termina restituendo il valore di num1
        return num1;
    }
}