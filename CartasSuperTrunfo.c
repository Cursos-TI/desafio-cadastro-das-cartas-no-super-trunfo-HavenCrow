#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // variáveis separadas para cada atributo da cidade.
    char estado1[2], estado2[2], cod_carta1[4], cod_carta2[4];
    char cidade1[15], cidade2[15];
    int populacao1, populacao2, ponto_tur1, ponto_tur2;
    float area1, area2, pib1, pib2;

    // Cadastro da carta 1
    printf("Cadastro da 1ª carta.\n");

    printf("digite o codigo do estado:");
    scanf("%s", estado1);

    printf("digite o codigo da carta:");
    scanf("%s", cod_carta1);

    printf("digite a cidade:");
    scanf("%s", cidade1);

    printf("digite a população:");
    scanf("%d", &populacao1);
 
    printf("digite a área (em km²):");
    scanf("%f", &area1);
    
    printf("digite o PIB (em Bilhões):");
    scanf("%f", &pib1);
    
    printf("digite o número de pontos turísticos:");
    scanf("%d", &ponto_tur1);

    // Exibição dos dados da Carta 1:
    printf("Carta 1:\nEstado:%s\n", estado1);
    printf("Código:%s\n", cod_carta1);
    printf("Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%.2f km²\n", area1);
    printf("PIB:%.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos:%d\n\n", ponto_tur1);

    // Cadastro da Carta 2:
    printf("Cadastro da 2ª carta.\n");

    printf("digite o codigo do estado:");
    scanf("%s", estado2);

    printf("digite o codigo da carta:");
    scanf("%s", cod_carta2);

    printf("digite a cidade:");
    scanf("%s", cidade2);

    printf("digite a população:");
    scanf("%d", &populacao2);
 
    printf("digite a área (em km²):");
    scanf("%f", &area2);
    
    printf("digite o PIB (em Bilhões):");
    scanf("%f", &pib2);
    
    printf("digite o número de pontos turísticos:");
    scanf("%d", &ponto_tur2);

    //Exibição dos dados da carta 2:
    printf("Carta 2:\nEstado:%s\n", estado2);
    printf("Código:%s\n", cod_carta2);
    printf("Cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%.2f km²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos:%d\n", ponto_tur2);

    return 0;
}
