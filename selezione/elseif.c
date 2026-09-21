/* 
18/09/2026
data una temperatura indicare se l'acqua si trova allo stato solido, liquido o gassoso
*/

#include <stdio.h>

int main(){
    // dichiaro una variabile
    int water_temp;

    // faccio inserire un numero all'utente
    printf("inserire la temperatura: ");
    scanf("%d", &water_temp);

    if(water_temp < 0){ // controllo se è ghiacciata 
        printf("l'acqua si trova allo stato solido\n");
    }else if(water_temp < 100){ // altrimenti controllo se è liquida
        printf("l'acqua si trova allo stato liquido\n");
    }else{ // se non è nessuno dei precedenti allora sarà vapore
        printf("l'acqua si trova allo stato gassoso\n");
    }
}