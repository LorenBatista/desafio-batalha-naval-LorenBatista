#include <stdio.h>

int main() {
    // Define o tamanho do tabuleiro (10x10)
    #define LARGURA 10
    #define ALTURA 10

    // Para simplificar, o tamanho dos navios é fixo neste nível.
    #define TAMANHO_NAVIO_VERTICAL 3
    #define TAMANHO_NAVIO_HORIZONTAL 4

    // Declara vetores bidimensionais para armazenar as coordenadas de cada navio.
    int navioVertical[TAMANHO_NAVIO_VERTICAL][2];
    int navioHorizontal[TAMANHO_NAVIO_HORIZONTAL][2];

    // --- Posicionamento dos Navios (Entrada de Dados Manual) ---

    // Define a posição inicial do navio vertical (ex: coluna 2, começando na linha 1)
    int yInicialVertical = 1;
    int xInicialVertical = 2;

    // Define a posição inicial do navio horizontal (ex: linha 5, começando na coluna 3)
    int yInicialHorizontal = 5;
    int xInicialHorizontal = 3;

    // --- Lógica de Posicionamento ---

    // Preenche as coordenadas do navio vertical
    for (int i = 0; i < TAMANHO_NAVIO_VERTICAL; i++) {
        navioVertical[i][0] = xInicialVertical;       // Coordenada X (coluna)
        navioVertical[i][1] = yInicialVertical + i;   // Coordenada Y (linha)
    }

    // Preenche as coordenadas do navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO_HORIZONTAL; i++) {
        navioHorizontal[i][0] = xInicialHorizontal + i; // Coordenada X (coluna)
        navioHorizontal[i][1] = yInicialHorizontal;     // Coordenada Y (linha)
    }

    // --- Saída de Dados ---

    printf("--- ⛵ Batalha Naval - Nível Novato ⛵ ---\n\n");

    printf("Coordenadas do Navio Vertical (Tamanho %d):\n", TAMANHO_NAVIO_VERTICAL);
    for (int i = 0; i < TAMANHO_NAVIO_VERTICAL; i++) {
        // Exibe as coordenadas (X, Y) de cada parte do navio.
        printf("Parte %d: (X: %d, Y: %d)\n", i + 1, navioVertical[i][0], navioVertical[i][1]);
    }

    printf("\n--------------------------------------------\n\n");

    printf("Coordenadas do Navio Horizontal (Tamanho %d):\n", TAMANHO_NAVIO_HORIZONTAL);
    for (int i = 0; i < TAMANHO_NAVIO_HORIZONTAL; i++) {
        // Exibe as coordenadas (X, Y) de cada parte do navio.
        printf("Parte %d: (X: %d, Y: %d)\n", i + 1, navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    return 0;
}