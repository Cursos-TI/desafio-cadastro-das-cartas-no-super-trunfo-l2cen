#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 5

typedef struct {
    char nome[50];
    int populacao;
    int area;
    int pib;
} Carta;

void cadastrarCartas(Carta cartas[], int *total) {
    for (int i = 0; i < MAX_CARTAS; i++) {
        printf("\nCadastro da carta %d\n", i + 1);
        printf("Nome do país: ");
        scanf(" %[^\n]", cartas[i].nome);
        printf("População (milhões): ");
        scanf("%d", &cartas[i].populacao);
        printf("Área (km²): ");
        scanf("%d", &cartas[i].area);
        printf("PIB (em bilhões): ");
        scanf("%d", &cartas[i].pib);
    }
    *total = MAX_CARTAS;
}

void exibirCartas(Carta cartas[], int total) {
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < total; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("País: %s\n", cartas[i].nome);
        printf("População: %d milhões\n", cartas[i].populacao);
        printf("Área: %d km²\n", cartas[i].area);
        printf("PIB: %d bilhões\n", cartas[i].pib);
    }
}

int main() {
    Carta cartas[MAX_CARTAS];
    int totalCartas = 0;

    cadastrarCartas(cartas, &totalCartas);
    exibirCartas(cartas, totalCartas);

    return 0;
}
