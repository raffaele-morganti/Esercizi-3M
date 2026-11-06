/* 
05/11/2026
Scrivi le funzioni celsius_to_fahrenheit e fahrenheit_to_celsius 
che effettuino le conversioni tra le due scale. Nel main, mostra  
una tabella di conversione da 0°C a 100°C con passo di 10°C.
*/
#include <stdio.h>

float celsius_to_fahrenheit(float c);
float fahrenheit_to_celsius(float f);

int main(){
    printf("-------------\n|  °C |  °F |\n|-----|-----|\n");
    for(float temp_c = 0; temp_c <= 100; temp_c += 10){
        // chiamo la funzione e salvo il risultato in temp_f
        float temp_f = celsius_to_fahrenheit(temp_c);
        printf("| %3.f | %3.f |\n", temp_c, temp_f);
    }
    printf("-------------\n");
}

float celsius_to_fahrenheit(float c){
    float f = c * 9 / 5 + 32; 
    return f;
}

// questa funzione non viene mai usata quindi potrei eliminarla
float fahrenheit_to_celsius(float f){
    // posso anche restituire direttamente il risultato
    return (f - 32) * 5 / 9;
}