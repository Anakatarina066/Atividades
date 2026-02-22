#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {

    Carta carta1, carta2;
    int opcao;

    printf("=== SUPER TRUNFO AVANCADO ===\n");

    printf("\nCarta 1\n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);
    printf("Codigo: ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^
]", carta1.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);
    printf("Codigo: ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^
]", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\nOpcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        if (carta1.populacao > carta2.populacao)
            printf("Carta 1 venceu!\n");
        else if (carta1.populacao < carta2.populacao)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }
    else if (opcao == 2) {
        if (carta1.area > carta2.area)
            printf("Carta 1 venceu!\n");
        else if (carta1.area < carta2.area)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }
    else if (opcao == 3) {
        if (carta1.pib > carta2.pib)
            printf("Carta 1 venceu!\n");
        else if (carta1.pib < carta2.pib)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }
    else if (opcao == 4) {
        if (carta1.pontosTuristicos > carta2.pontosTuristicos)
            printf("Carta 1 venceu!\n");
        else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
