#include <stdio.h>

int main() {

    // ============================
    //  DECLARAÇÃO DAS VARIÁVEIS DA CARTA 1
    // ============================
    char estado1;              // Estado (A-H)
    char codigo1[4];           // Código da carta (ex: A01)
    char cidade1[50];          // Nome da cidade
    int populacao1;            // População
    float area1;               // Área em km²
    float pib1;                // PIB em bilhões
    int pontosTuristicos1;     // Número de pontos turísticos

    float densidade1;          //Novo cálculo
    float pibPerCapita1;         //Novo cálculo



    // ============================
    //  ENTRADA DE DADOS DA CARTA 1
    // ============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    //=============================
    // CÁLCULOS  DA CARTA 1
    //=============================
     densidade1 = populacao1 / area1;
     pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    // Multiplicamos PIB por 1 bilhão para transformar em reais



    // ============================
    //  DECLARAÇÃO DAS VARIÁVEIS DA CARTA 2
    // ============================
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    float densidade2;
    float pibPerCapita2;




    // ============================
    //  ENTRADA DE DADOS DA CARTA 2
    // ============================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);



    //=============================
    // CÁLCULOS DA CARTA 2
    //=============================
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;



    // ============================
    //  EXIBIÇÃO DAS DUAS CARTAS
    // ============================


    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    return 0;
}

