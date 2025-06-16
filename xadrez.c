#include <stdio.h>

int main() {
    // Movimento da Torre: x casas para a direita 
    int casas_torre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: x casas na diagonal para cima e à direita
    int casas_bispo = 5;
    int contador_bispo = 0;
    printf("\nMovimento do BISPO:\n");
    while (contador_bispo < casas_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // Movimento da Rainha: x casas para a esquerda
    int casas_rainha = 8;
    int contador_rainha = 0;
    printf("\nMovimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);

    return 0;
}
