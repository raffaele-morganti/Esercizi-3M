/* 
13/11/2026
salvare 5 voti in un array e mostrare la media
*/
#include <stdio.h>

int main(){
    // dichiaro il mio array da 5 elementi
    float voti[5];

    // riempio l'array utilizzando un ciclo for
    for(int i = 0; i < 5; i++){
        int num = i + 1;
        printf("Inserire il voto n°%d: ", num);
        scanf("%f", &voti[i]);
    }

    // calcolo la somma dei voti
    float somma = 0;
    for(int i = 0; i < 5; i++){
        somma += voti[i];
    }

    // calcolo la media
    float media = somma / 5;
    
    // mostro il risultato
    printf("La media dei voti");
    for(int i = 0; i < 5; i++){
        printf(" %g", voti[i]);
    }
    printf(" è: %g\n", media);
}