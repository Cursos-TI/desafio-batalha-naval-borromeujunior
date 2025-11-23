#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3

int main (){

    int tabuleiro [LINHAS][COLUNAS] = {0};
    int navio [NAVIO] = {3, 3, 3};

    // Posicionando o primeiro navio (vertical) começando em (3,2)

    for (int i = 0; i < 3; i++) {
        tabuleiro[3 + i][2] = navio[i];
    }
   
   // Posicionando o segundo navio (horizontal) começando em (7,5)

   for (int i = 0; i < 3; i++) {
         tabuleiro[7][5 + i] = navio[i];
    }

    // Posicionando o terceiro navio (diagonal) começando em (5,5)

    for (int i = 0; i < 3; i++) {
        tabuleiro[5 - i][5 + i] = navio[i];
    }

    // Posicionando o terceiro navio (diagonal) começando em (7,0)

   for (int i = 0; i < 3; i++) {
    tabuleiro[7 + i][0 + i] = navio[i];
    }

   
    // Exibir o tabuleiro

     printf("\nTabuleiro:\n");

     for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

        printf("%d ", tabuleiro[i][j]);

        }

    printf("\n");

    }

    return 0;
}