#include <stdio.h>

// Estrutura para representar uma carta
struct Carta {
    char estado[5];  // Estado representado por duas letras Ex: ES
    char codigo[5];  // Código da cidade (ex: A01, B03)
    char cidade[50]; // Nome da cidade
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    // Entrada de dados para a primeira carta
    printf("Digite a letra do estado (Ex: ES): ");
    scanf("%s", carta1.estado);
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do estado (Ex: ES): ");
    scanf("%s", carta2.estado);
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n--- Cartas Cadastradas ---\n");

    printf("\nEstado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nEstado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}