/* 
06/11/2026
Scrivi una funzione celsius_to_others(float c, float *f, float *k)
che effettui le conversioni di una temperatura fornita in Celsius 
nelle scale Fahrenheit e Kelvin secondo le formule:
°F = °C × 9/5 + 32 e °K = °C + 273.15.
Nel main, leggi un numero e stampa entrambi i risultati.
*/
#include <stdio.h>

// la funzione non restituisce nulla, ma modifica il
// contenuto delle variabili all'indirizzo di f e k
void celsius_to_others(float c, float *f, float *k);

// le funzioni restituiscono il valore convertito
float celsius_to_fahrenheit(float c);
float celsius_to_kelvin(float c);

int main(){
    float temp_c, temp_f, temp_k;
    printf("Inserire una temperatura in °C: ");
    scanf("%f", &temp_c);
    // chiamo la funzione passando gli indirizzi
    // dove voglio che venga salvato il risultato
    celsius_to_others(temp_c, &temp_f, &temp_k);
    
    printf("°C = %g\t °F = %g\t °K  = %g\n", temp_c, temp_f, temp_k);
}


void celsius_to_others(float c, float *f, float *k){
    *f = celsius_to_fahrenheit(c);
    *k = celsius_to_kelvin(c);
}

// le funzioni restituiscono il valore convertito
float celsius_to_fahrenheit(float c){
    return c * 9 / 5 + 32;
}
float celsius_to_kelvin(float c){
    return c + 273.15;
}