/* 
08/10/2026
calcolare il valore di pi greco utilizzando il metodo Monte Carlo
per la teoria dell'algoritmo fare riferimento a:
https://it.wikipedia.org/wiki/Metodo_Monte_Carlo#Determinazione_del_valore_%CF%80
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // inizializzo il generatore di numeri casuali
    srand(time(NULL));
    // dichiaro e inizializzo le variabili
    int inside = 0;
    // mi aspetto un errore intorno a 1/radice(tentativi)
    int attempts = 1000000;
    float x, y, pi;

    // genero delle coordinate x,y nel quadrato di lato 1
    for(int i = 0; i < attempts; i++){
        x = (float) rand() / RAND_MAX;
        y = (float) rand() / RAND_MAX;
        if(x*x + y*y < 1){
            // conto quanti dei punti sono anche dentro il cerchio
            inside += 1;
        }
    }
    // stimo l'area del segmento del cerchio come rapporto
    // tra i punti interni al cerchio e quelli generati e
    // la utilizzo per calcolare una stima di pi greco
    pi = (float) 4 * inside / attempts;
    printf("PI GRECO = %f\n", pi);
}