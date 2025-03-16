#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis
    char estado1[3] = "SP", estado2[3] = "RJ";
    char codigo1[5] = "A01", codigo2[5] = "B02";
    char cidade1[50] = "São Paulo", cidade2[50] = "Rio de Janeiro";
    
    int populacao1 = 12300000, populacao2 = 6000000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontos_turisticos1 = 50, pontos_turisticos2 = 30;

    // Cálculo da densidade populacional e PIB
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões/hab\n\n", pib_per_capita1);

    printf("Carta 2 - %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões/hab\n\n", pib_per_capita2);

    // COMPARAÇÃO
    char atributo_comparado[] = "População";

    printf("Comparação de cartas (Atributo: %s):\n\n", atributo_comparado);

    // Comparação pelo atributo definido
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
        printf("Resultado: Empate!\n");
    }

    return 0;
}