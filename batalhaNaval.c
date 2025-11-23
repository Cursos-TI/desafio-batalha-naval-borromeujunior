#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3

int main() {

    int tabuleiro[LINHAS][COLUNAS] = {0};
    int navio[NAVIO] = {3, 3, 3}; // Representação do navio com tamanho 3 

    //Código que posiciona um navio na posição horizontal (Tam: 3 células)
    //Posição inicial escolhida: Linha 2 / Índice: 1

    for (int i = 1; i < 4; i++){
        tabuleiro [1] [i] = 3;
    
    }

    //Código que posiciona um navio na posição vertical (Tam: 3 células)
    //Posição inicial escolhida: Coluna 7 / Índice: 6

    for (int i = 6; i < 9; i++){
        tabuleiro [i] [6] = 3;
    }

    //Código que posiciona um navio na posição diagonal (Tam: 3 células)
    //Posição inicial escolhida: Coluna 0 / Índice: 0

    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[9 - i][0 + i] = 3;
    }

  // Exibe o tabuleiro com letras nas colunas e números nas linhas
    printf("\n   "); // espaço inicial para alinhar
    for (int j = 0; j < COLUNAS; j++) {
        printf("%c ", 'A' + j); // imprime letras A–J
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1); // imprime números 1–10
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}
