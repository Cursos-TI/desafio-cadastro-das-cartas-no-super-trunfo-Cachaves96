#include <stdio.h>

int main(){

    // Variáveis para a primeira carta
    char estado1;
    char codigo1[5]; 
    char cidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_percapita1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_percapita2;

    // Entrada de dados para a Carta 1
    printf("Cadastro da Carta 1:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Codigo (ex: A0123): ");
    scanf("%5s", codigo1);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade1); 
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //calculo carta 1 

    densidade_populacional1 = populacao1 / area1;
    pib_percapita1 = pib1/populacao1;

    // Entrada de dados para a Carta 2
    printf("\nCadastro da Carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Codigo (ex: B0234): ");
    scanf("%5s", codigo2);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //calculo carta 2

    densidade_populacional2 = populacao2 / area2;
    pib_percapita2 = pib2/populacao2;

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos1);
    printf("Densidade populacional:%.2f\n", densidade_populacional1);
    printf("Pib per capita:%.2f\n", pib_percapita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional:%.2f\n", densidade_populacional2);
    printf("Pib per capita:%.2f\n", pib_percapita2);

    return 0;
}
