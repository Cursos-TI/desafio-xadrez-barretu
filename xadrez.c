/* Desafio Nível Novato Xadrez, Thony Barreto */

#include <stdio.h>

#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

int main() {
    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimentacao do Bispo:\n");
    for (int i = 0; i < BISPO_PASSOS; i++) {
        printf("Diagonal Superior Direita -> Cima + Direita\n");
    }
    printf("\n");

    // Movimentação da Torre: 5 casas para a direita
    printf("Movimentacao da Torre:\n");
    for (int i = 0; i < TORRE_PASSOS; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Movimentacao da Rainha:\n");
    for (int i = 0; i < RAINHA_PASSOS; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    return 0;
}
