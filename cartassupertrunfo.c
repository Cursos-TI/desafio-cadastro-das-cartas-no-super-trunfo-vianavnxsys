#include <stdio.h>

int main() {
   
// Declaração e inicialização de variáveis com valores padrão
    char nome_da_cidade[50] = "Campo largo";
    int codigo_da_cidade = 83602;
    float populacao =  142695.0;
    float pib = 4225757.0;
    float numero_de_pontos_turisticos = 9.0;

// Entrada de dados do usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite o codigo da cidade: \n");
    scanf("%d", &codigo_da_cidade);

    printf("Qual a populaçao da cidade?: \n");
    scanf("%f", &populacao);

    printf("Qual o PIB dessa cidade?: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos a cidade tem?: \n");
    scanf("%f", &numero_de_pontos_turisticos);

// Exibição dos dados coletados
    printf("\n--- Dados da Cidade ---\n");
    printf("Nome: %s\n", nome_da_cidade);
    printf("Codigo: %d\n", codigo_da_cidade);
    printf("Populacao: %.2f\n", populacao);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %.2f\n", numero_de_pontos_turisticos);

}