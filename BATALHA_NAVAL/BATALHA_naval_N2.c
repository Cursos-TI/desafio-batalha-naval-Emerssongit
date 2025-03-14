#include <stdio.h>

int main() {
    // Inicializa o tabuleiro 10x10 com zeros
    int tabuleiro[10][10] = {0};

    // Declara e inicializa os navios (vetores unidimensionais)
    int navioHorizontal1[3] = {3, 3, 3};  // Navio de tamanho 3 (horizontal)
    int navioVertical1[3] = {3, 3, 3};    // Navio de tamanho 3 (vertical)
    int navioHorizontal2[3] = {3, 3, 3};
    int navioVertical2[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    int linhaHorizontal1 = 2, colunaHorizontal1 = 4;  // Começo do navio horizontal
    int linhaVertical1 = 5, colunaVertical1 = 7;      // Começo do navio vertical

    int linhaHorizontal2 = 3, colunaHorizontal2 = 6;
    int linhaVertical2 = 7, colunaVertical2 = 2;

    // Posiciona o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal1][colunaHorizontal1 + i] = navioHorizontal1[i];
    }

        for (int j = 0; j < 3; j++){
            tabuleiro[linhaHorizontal2][colunaHorizontal2 + j] = navioHorizontal2[j];
        }

    // Posiciona o navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical1 + i][colunaVertical1] = navioVertical1[i];
    }
        for (int j = 0; j < 3; j++){
        tabuleiro[linhaVertical2 + j][colunaVertical2] = navioVertical2[j];
    }

    // Exibe o tabuleiro no formato solicitado
    char letra = 'A';
    printf("*****TABULEIRO BATALHA NAVAL*****\n");
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", letra);
        letra++;
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf(" %d ", i);
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    
    }

    return 0;
}