#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Variaveis da carta 1
    char estado1;
    char cod_carta1[5];
    char nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    // variaveis da carta 2

    char estado2;
    char cod_carta2[5];
    char nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    printf("Carta 1:  ");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo da Cartas: ");
    scanf("%s", cod_carta1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1); // le a linha inteira incluindo os espaços
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos_turisticos1);

    printf("\n");

    printf("Carta 2:  ");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo da Cartas: ");
    scanf("%s", cod_carta2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2); 
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos_turisticos2);

    printf("\n");

    printf("\n --- Informacoes coletadas --- \n");
    printf("Carta 1: \n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",cod_carta1);
    printf("Cidade: %s\n",nome_cidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area: %.2f km2\n",area1);
    printf("PIB: %.2f  bilhoes de reais\n",pib1);
    printf("Pontos Turisticos: %d \n",pontos_turisticos1);

    printf("\n");
    
    printf("Carta 2: \n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",cod_carta2);
    printf("Cidade: %s\n",nome_cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2f km2\n",area2);
    printf("PIB: %.2f  bilhoes de reais\n",pib2);
    printf("Pontos Turisticos: %d \n",pontos_turisticos2);
    
    return 0;
}
