#include <stdio.h>

int main() {
    // Variáveis para as cartas (pré-cadastradas)
    char cidade1[] = "São Paulo";
    char estado1 = 'A';
    unsigned long populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;
    float densidade1 = populacao1 / area1;  // Cálculo direto

    char cidade2[] = "Rio de Janeiro";
    char estado2 = 'B';
    unsigned long populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30;
    float densidade2 = populacao2 / area2;  // Cálculo direto

    int opcao;

    printf("===== SUPER TRUNFO - BATALHA DE CIDADES =====\n");
    
    // Exibição do menu
    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - POPULACAO\n");
    printf("2 - AREA\n");
    printf("3 - PIB\n");
    printf("4 - PONTOS TURISTICOS\n");
    printf("5 - DENSIDADE DEMOGRAFICA\n");
    printf("\nEscolha o atributo para comparar: ");
    scanf("%d", &opcao);

    // Switch para seleção do atributo
    switch(opcao) {
        case 1: // População
            printf("\n[ATRIBUTO ESCOLHIDO: POPULACAO] (maior valor vence)\n");
            printf("%s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
            printf("%s (%c): %lu habitantes\n", cidade2, estado2, populacao2);
            
            if(populacao1 > populacao2) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade1);
            } else if(populacao2 > populacao1) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade2);
            } else {
                printf("\nRESULTADO: EMPATE!\n");
            }
            break;
            
        case 2: // Área
            printf("\n[ATRIBUTO ESCOLHIDO: AREA] (maior valor vence)\n");
            printf("%s (%c): %.2f km²\n", cidade1, estado1, area1);
            printf("%s (%c): %.2f km²\n", cidade2, estado2, area2);
            
            if(area1 > area2) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade1);
            } else if(area2 > area1) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade2);
            } else {
                printf("\nRESULTADO: EMPATE!\n");
            }
            break;
            
        case 3: // PIB
            printf("\n[ATRIBUTO ESCOLHIDO: PIB] (maior valor vence)\n");
            printf("%s (%c): %.2f bilhões\n", cidade1, estado1, pib1);
            printf("%s (%c): %.2f bilhões\n", cidade2, estado2, pib2);
            
            if(pib1 > pib2) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade1);
            } else if(pib2 > pib1) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade2);
            } else {
                printf("\nRESULTADO: EMPATE!\n");
            }
            break;
            
        case 4: // Pontos Turísticos
            printf("\n[ATRIBUTO ESCOLHIDO: PONTOS TURISTICOS] (maior valor vence)\n");
            printf("%s (%c): %d pontos\n", cidade1, estado1, pontos_turisticos1);
            printf("%s (%c): %d pontos\n", cidade2, estado2, pontos_turisticos2);
            
            if(pontos_turisticos1 > pontos_turisticos2) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade1);
            } else if(pontos_turisticos2 > pontos_turisticos1) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade2);
            } else {
                printf("\nRESULTADO: EMPATE!\n");
            }
            break;
            
        case 5: // Densidade Demográfica
            printf("\n[ATRIBUTO ESCOLHIDO: DENSIDADE] (menor valor vence)\n");
            printf("%s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("%s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);
            
            if(densidade1 < densidade2) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade1);
            } else if(densidade2 < densidade1) {
                printf("\nRESULTADO: %s VENCEU!\n", cidade2);
            } else {
                printf("\nRESULTADO: EMPATE!\n");
            }
            break;
            
        default: // Opção inválida
            printf("\nOpcao invalida! Execute novamente e escolha uma opção entre 1-5.\n");
            return 1;
    }
    
    printf("\nFim da comparacao!\n");
    return 0;
}