#include <stdio.h>

int main() {
    // Cidade 1
    char nome_da_cidade1[50] = "Campo Largo";
    int codigo_da_cidade1 = 83602;
    float populacao1 = 142695.0;
    float pib1 = 49000000;
    float numero_de_pontos_turisticos1 = 9.0;

    printf("Nome da cidade 1: \n");
    scanf(" %[^\n]s", nome_da_cidade1);

    printf("Codigo da cidade: \n");
    scanf("%d", &codigo_da_cidade1);

    printf("Populacao da cidade: \n");
    scanf("%f", &populacao1);

    printf("PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Pontos turisticos: \n");
    scanf("%f", &numero_de_pontos_turisticos1);

    printf("\n--- Carta 01 ---\n");
    printf("Nome: %s\n", nome_da_cidade1);
    printf("Codigo: %d\n", codigo_da_cidade1);
    printf("Populacao: %.2f\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %.2f\n", numero_de_pontos_turisticos1);

    // Cidade 2
    char nome_da_cidade2[50] = "Curitiba";
    int codigo_da_cidade2 = 875353;
    float populacao2 = 1773718.0;
    float pib2 = 49000000;
    float numero_de_pontos_turisticos2 = 30.0;

    printf("\nNome da cidade 2: \n");
    scanf("%[^\n]s", nome_da_cidade2);

    printf("Codigo da cidade: \n");
    scanf("%d", &codigo_da_cidade2);

    printf("Populacao da cidade: \n");
    scanf("%f", &populacao2);

    printf("PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Pontos turisticos: \n");
    scanf("%f", &numero_de_pontos_turisticos2);

    printf("\n--- Carta 02 ---\n");
    printf("Nome: %s\n", nome_da_cidade2);
    printf("Codigo: %d\n", codigo_da_cidade2);
    printf("Populacao: %.2f\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %.2f\n", numero_de_pontos_turisticos2);

    return 0;
}