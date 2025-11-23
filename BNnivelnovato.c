#include <stdio.h>

int main() {

    int tabuleiro [10] [10] = {0}; // Tabuleiro bidimensional inicializado com 0
    int i, j;
    
    //Código que posiciona um navio na posição horizontal (Tam: 3 células)
    //Posição escolhida: Linha 2 / Índice: 1

    for (i = 2; i < 5; i++){
        tabuleiro [1] [i] = 1;
    }

    //Código que posiciona um navio na posição vertical (Tam: 3 células)
    //Posição escolhida: Coluna 7 / Índice: 6

    for (i = 6; i < 10; i++){
        tabuleiro [i] [6] = 7;
    }

    //Exibe as coordenadas dos navios posicionados

    //Exibição das coordenadas do navio horizontal
    printf("Coordenadas do navio horizontal (NAVIO 1): \n");
    for (i = 2; i < 5; i++){
        printf("Linha: 1, Coluna: %d\n", i);
    }

    //Exibição das coordenadas do navio vertical
    printf("\nCoordenadas do navio vertical (NAVIO 2): \n");
    for (i = 7; i < 10; i++){
        printf("Linha: %d, Coluna: 7\n", i);
    }

    return 0;
}