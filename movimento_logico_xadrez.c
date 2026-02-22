#include <stdio.h>

int main() {

    int linhaOrigem, colunaOrigem;
    int linhaDestino, colunaDestino;
    int opcao;

    printf("=== MOVIMENTO LOGICO - XADREZ ===\n\n");

    printf("1 - Torre\n2 - Bispo\n3 - Cavalo\nOpcao: ");
    scanf("%d", &opcao);

    printf("Linha origem (0-7): ");
    scanf("%d", &linhaOrigem);
    printf("Coluna origem (0-7): ");
    scanf("%d", &colunaOrigem);
    printf("Linha destino (0-7): ");
    scanf("%d", &linhaDestino);
    printf("Coluna destino (0-7): ");
    scanf("%d", &colunaDestino);

    if (opcao == 1) {
        if (linhaOrigem == linhaDestino || colunaOrigem == colunaDestino)
            printf("Movimento valido para Torre!\n");
        else
            printf("Movimento invalido para Torre!\n");
    }
    else if (opcao == 2) {
        if ((linhaOrigem - linhaDestino == colunaOrigem - colunaDestino) ||
            (linhaOrigem - linhaDestino == -(colunaOrigem - colunaDestino)))
            printf("Movimento valido para Bispo!\n");
        else
            printf("Movimento invalido para Bispo!\n");
    }
    else if (opcao == 3) {
        int difLinha = linhaOrigem - linhaDestino;
        int difColuna = colunaOrigem - colunaDestino;

        if ((difLinha == 2 || difLinha == -2) && (difColuna == 1 || difColuna == -1) ||
            (difLinha == 1 || difLinha == -1) && (difColuna == 2 || difColuna == -2))
            printf("Movimento valido para Cavalo!\n");
        else
            printf("Movimento invalido para Cavalo!\n");
    }
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
