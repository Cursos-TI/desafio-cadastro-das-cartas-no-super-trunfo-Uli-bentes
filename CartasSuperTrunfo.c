#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   
    char estado1;
    char cod_carta1[5];
    char nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    double area1, pib1, densiPopulacional, pibPerCapita;
    
    
    char estado2;
    char cod_carta2[5];
    char nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    double area2, pib2, densiPopulacional2, pibPerCapita2;

    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%c", &estado1);
    printf("Codigo da Carta: ");
    scanf("%s", cod_carta1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%lf", &area1);  
    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib1);   
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);  
    printf("Codigo da Carta: ");
    scanf("%s", cod_carta2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2); 
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%lf", &area2);   
    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib2);    
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

  
    densiPopulacional = (double)populacao1 / area1;
    pibPerCapita = (pib1 * 1000000000) / populacao1;  
    double inverso1 = 1.0/densiPopulacional;
    double superPoder1 = populacao1 + pontos_turisticos1 + area1 + pib1 + inverso1 + pibPerCapita;


    densiPopulacional2 = (double)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;  
    double inverso2 = 1.0/densiPopulacional2;
    double superPoder2 = populacao2 + pontos_turisticos2 + area2 + pib2 + densiPopulacional2 + pibPerCapita2;

    printf("\n--- Informacoes coletadas ---\n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPopulacional);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

    printf("\n");
    
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);


    printf("----------------------------------------------------------------------");
    
  if(populacao1 > populacao2){
      printf("População: Carta 1 venceu!!\n");
  }else {
    printf("População: Carta 2 venceu!!\n");
  }

    if(area1 > area2){
      printf("Area:  Carta 1 venceu!!\n");
  }else {
    printf("Area: Carta 2 venceu!!\n");
  }

    if(pib1 > pib2){
      printf("PIB: Carta 1 venceu!!\n");
  }else {
    printf("PIB: Carta 2 venceu!!\n");
  }

    if(pontos_turisticos1 > pontos_turisticos2){
      printf("Pontos Turisticos:  Carta 1 venceu!!\n");
  }else {
    printf("Pontos Turisticos:  Carta 2 venceu!!\n");
  }

    if(densiPopulacional < densiPopulacional2){
      printf("Densidade: Carta 1 venceu!!\n");
  }else {
    printf("Densidade: Carta 2 venceu!!\n");
  }

    if(pibPerCapita > pibPerCapita2){
      printf("PIB per Capita: Carta 1 venceu!!\n");
  }else {
    printf("PIB per Capita: Carta 2 venceu!!\n");
  }

    if(superPoder1 > superPoder2){
      printf("Super Poder: Carta 1 venceu!!\n");
  }else {
    printf("Super Poder: Carta 2 venceu!!\n");
  }

    return 0;
}