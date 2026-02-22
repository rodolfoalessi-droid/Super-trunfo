int main(void) {
    /* ===== Carta 1 ===== */
    char estado1;
    char codigo1[4];
    char nomeCidade1[60];
    unsigned long int populacao1;
    float area1;
    float pibBilhoes1;
    int pontosTuristicos1;

    /* ===== Carta 2 ===== */
    char estado2;
    char codigo2[4];
    char nomeCidade2[60];
    unsigned long int populacao2;
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

    printf("Populacao (inteiro, sem pontos/virgulas): ");
    scanf("%lu", &populacao1);

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

    printf("Populacao (inteiro, sem pontos/virgulas): ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pibBilhoes2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ===== Cálculos (float com conversões) ===== */
    /* Densidade = população / área */
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    /* PIB per capita (R$) = (PIB em bilhões * 1e9) / população */
    float pibPerCapita1 = (pibBilhoes1 * 1000000000.0f) / (float)populacao1;
    float pibPerCapita2 = (pibBilhoes2 * 1000000000.0f) / (float)populacao2;

    /* Inverso da densidade (quanto menor a densidade, maior o "poder") */
    float invDensidade1 = 1.0f / densidade1;
    float invDensidade2 = 1.0f / densidade2;

     float superPoder1 =
        (float)populacao1 +
        area1 +
        pibBilhoes1 +
        (float)pontosTuristicos1 +
        pibPerCapita1 +
        invDensidade1;

    float superPoder2 =
        (float)populacao2 +
        area2 +
        pibBilhoes2 +
        (float)pontosTuristicos2 +
        pibPerCapita2 +
        invDensidade2;

    /* ===== Exibição dos dados (mantém níveis anteriores) ===== */
    printf("\n==============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pibBilhoes1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pibBilhoes2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("==============================\n");

    /* ===== Comparações (resultado 1 se Carta1 vence, 0 se Carta2 vence) ===== */
    int vencePopulacao = (populacao1 > populacao2);
    int venceArea = (area1 > area2);
    int vencePIB = (pibBilhoes1 > pibBilhoes2);
    int vencePontos = (pontosTuristicos1 > pontosTuristicos2);

    /* Densidade: menor vence */
    int venceDensidade = (densidade1 < densidade2);

    int vencePIBPerCapita = (pibPerCapita1 > pibPerCapita2);
    int venceSuperPoder = (superPoder1 > superPoder2);

    /* ===== Saída das comparações ===== */
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta %d venceu (%d)\n", vencePopulacao ? 1 : 2, vencePopulacao);
    printf("Area: Carta %d venceu (%d)\n", venceArea ? 1 : 2, venceArea);
    printf("PIB: Carta %d venceu (%d)\n", vencePIB ? 1 : 2, vencePIB);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", vencePontos ? 1 : 2, vencePontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", venceDensidade ? 1 : 2, venceDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vencePIBPerCapita ? 1 : 2, vencePIBPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", venceSuperPoder ? 1 : 2, venceSuperPoder);

    return 0;