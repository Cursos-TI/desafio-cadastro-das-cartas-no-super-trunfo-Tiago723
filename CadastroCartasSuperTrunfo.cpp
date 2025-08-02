#include <stdio.h>

// Protótipos das funções (declarações)
void nivelNovato();
void nivelAventureiro();
void nivelMestre();

int main() {
    // Descomente apenas o nível que deseja executar:

    nivelNovato();
    // nivelAventureiro();
    // nivelMestre();

    return 0;
}

// ======================= NÍVEL NOVATO =========================
void nivelNovato() {
    char codigo1[4], codigo2[4];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    printf("Cadastro da Carta 1:\n");
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("\n--- Carta 1 (%s) ---\n", codigo1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\n--- Carta 2 (%s) ---\n", codigo2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
}

// ===================== NÍVEL AVENTUREIRO ======================
void nivelAventureiro() {
    char codigo1[4], codigo2[4];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    printf("Cadastro da Carta 1:\n");
    scanf("%s", codigo1);
    scanf("%d", &pop1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    scanf("%s", codigo2);
    scanf("%d", &pop2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;
    float perCapita1 = pib1 / pop1;
    float perCapita2 = pib2 / pop2;

    printf("\n--- Carta 1 (%s) ---\n", codigo1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", dens1);
    printf("PIB per capita: %.6f\n", perCapita1);

    printf("\n--- Carta 2 (%s) ---\n", codigo2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", dens2);
    printf("PIB per capita: %.6f\n", perCapita2);
}

// ======================= NÍVEL MESTRE =========================
void nivelMestre() {
    char codigo1[4], codigo2[4];
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    printf("Cadastro da Carta 1:\n");
    scanf("%s", codigo1);
    scanf("%lu", &pop1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    scanf("%s", codigo2);
    scanf("%lu", &pop2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;
    float perCapita1 = pib1 / pop1;
    float perCapita2 = pib2 / pop2;

    float superPoder1 = pop1 + area1 + pib1 + pontos1 + perCapita1 + (1 / dens1);
    float superPoder2 = pop2 + area2 + pib2 + pontos2 + perCapita2 + (1 / dens2);

    printf("\n--- Comparações ---\n");
    printf("População: %d\n", pop1 > pop2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos turísticos: %d\n", pontos1 > pontos2 ? 1 : 0);
    printf("Densidade populacional: %d\n", dens1 < dens2 ? 1 : 0);
    printf("PIB per capita: %d\n", perCapita1 > perCapita2 ? 1 : 0);
    printf("Super Poder: %d\n", superPoder1 > superPoder2 ? 1 : 0);

    printf("\n--- Super Poder ---\n");
    printf("Carta 1: %.4f\n", superPoder1);
    printf("Carta 2: %.4f\n", superPoder2);
}
