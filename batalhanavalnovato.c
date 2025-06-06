#include <stdio.h>

#define TAMANHO 10

int main() {
    // Variáveis para os navios
    int linha_h = 2, coluna_h = 4, comprimento_h = 3; // Navio horizontal
    int linha_v = 5, coluna_v = 3, comprimento_v = 3; // Navio vertical

    // Tabuleiro 10x10 inicializado com água (.)
    char tabuleiro[TAMANHO][TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = '.';
        }
    }

    // Posicionar navio horizontal
    for (int j = coluna_h; j < coluna_h + comprimento_h; j++) {
        tabuleiro[linha_h][j] = 'N';
    }

    // Posicionar navio vertical
    for (int i = linha_v; i < linha_v + comprimento_v; i++) {
        tabuleiro[i][coluna_v] = 'N';
    }

    // Exibir coordenadas dos navios
    printf("Coordenadas dos Navios:\n");
    printf("Navio Horizontal (tamanho %d):\n", comprimento_h);
    for (int j = coluna_h; j < coluna_h + comprimento_h; j++) {
        printf("(%d, %d) ", linha_h, j);
    }

    printf("\n\nNavio Vertical (tamanho %d):\n", comprimento_v);
    for (int i = linha_v; i < linha_v + comprimento_v; i++) {
        printf("(%d, %d) ", i, coluna_v);
    }

    return 0;
}