#include <stdio.h>

int main() {

    // ================= CARTA 1 =================
    char estado1[30];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    int area1;
    int pib1;
    int pontosTuristicos1;

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%d", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%d", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // ================= CARTA 2 =================
    char estado2[30];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    int area2;
    int pib2;
    int pontosTuristicos2;

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%d", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%d", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // ================= EXIBICAO =================

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %d km2\n", area1);
    printf("PIB: %d bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %d km2\n", area2);
    printf("PIB: %d bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
