#include <stdio.h>

int main() {
    // Inicializa o tabuleiro 10x10 com zeros
    int tabuleiro[10][10] = {0};

    // Declara e inicializa os navios (vetores unidimensionais)
    int navioHorizontal[3] = {3, 3, 3};  // Navio de tamanho 3 (horizontal)
    int navioVertical[3] = {3, 3, 3};    // Navio de tamanho 3 (vertical)

    // Coordenadas iniciais dos navios
    int linhaHorizontal = 2, colunaHorizontal = 4;  // Começo do navio horizontal
    int linhaVertical = 5, colunaVertical = 7;      // Começo do navio vertical

    // Posiciona o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    // Posiciona o navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
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