#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0};
    int linha, coluna;
    int i, j;

    printf("=== BATALHA NAVAL ===\n\n");

    tabuleiro[2][3] = 1;
    tabuleiro[5][5] = 1;
    tabuleiro[7][1] = 1;

    printf("Linha do ataque (0-9): ");
    scanf("%d", &linha);
    printf("Coluna do ataque (0-9): ");
    scanf("%d", &coluna);

    if (tabuleiro[linha][coluna] == 1) {
        printf("ACERTOU!\n");
        tabuleiro[linha][coluna] = 2;
    }
    else if (tabuleiro[linha][coluna] == 0) {
        printf("AGUA!\n");
        tabuleiro[linha][coluna] = -1;
    }
    else {
        printf("Posicao ja atacada!\n");
    }

    printf("\nTabuleiro Atual:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
