#include <stdio.h>

int main(void) {
    /* ===== Carta 1 ===== */
    char estado1;
    char codigo1[4];          // Ex: "A01" + '\0'
    char nomeCidade1[60];     // permite nomes com espaço
    long long populacao1;
    float area1;
    float pibBilhoes1;
    int pontosTuristicos1;

    /* ===== Carta 2 ===== */
    char estado2;
    char codigo2[4];
    char nomeCidade2[60];
    long long populacao2;
    float area2;
    float pibBilhoes2;
    int pontosTuristicos2;

    /* ===== Entrada - Carta 1 ===== */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-Z): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da cidade (pode ter espacos): ");
    scanf(" %59[^\n]", nomeCidade1);

    printf("Populacao (numero inteiro): ");
    scanf("%lld", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pibBilhoes1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ===== Entrada - Carta 2 ===== */
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-Z): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Nome da cidade (pode ter espacos): ");
    scanf(" %59[^\n]", nomeCidade2);

    printf("Populacao (numero inteiro): ");
    scanf("%lld", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pibBilhoes2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ===== Cálculos =====
       Densidade = população / área
       PIB per capita (R$) = (PIB em bilhões * 1e9) / população
    */
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pibBilhoes1 * 1000000000.0f) / (float)populacao1;

    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pibBilhoes2 * 1000000000.0f) / (float)populacao2;

    /* ===== Saída ===== */
    printf("\n==============================\n");
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lld\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pibBilhoes1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n------------------------------\n");
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lld\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pibBilhoes2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("==============================\n");
    return 0;
}