#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};  // Inicializa o tabuleiro com 0

    // Posiciona um navio horizontal (3 células) na linha 1 (índice 0)
    for (int i = 0; i < 3; i++) {
        tabuleiro[0][i] = 1;
    }

    // Posiciona um navio vertical (3 células) na coluna 4 (índice 3)
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][3] = 2;
    }

    // Exibe as coordenadas dos navios
    printf("Coordenadas do navio horizontal (ID 1):\n");
    for (int i = 0; i < 3; i++) {
        printf("Linha: 0, Coluna: %d\n", i);
    }

    printf("\nCoordenadas do navio vertical (ID 2):\n");
    for (int i = 2; i < 5; i++) {
        printf("Linha: %d, Coluna: 3\n", i);
    }

    return 0;
}