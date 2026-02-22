#include <stdio.h>

int main() {

    int i;

    printf("=== MOVIMENTACAO DAS PECAS DE XADREZ ===\n\n");

    printf("Movimento da Torre:\n");
    for(i = 1; i <= 8; i++) {
        printf("Torre moveu %d casa(s) para frente\n", i);
    }

    printf("\nMovimento do Bispo:\n");
    i = 1;
    while(i <= 8) {
        printf("Bispo moveu %d casa(s) na diagonal\n", i);
        i++;
    }

    printf("\nMovimento do Cavalo:\n");
    i = 1;
    do {
        printf("Cavalo realizou movimento em L numero %d\n", i);
        i++;
    } while(i <= 2);

    return 0;
}
