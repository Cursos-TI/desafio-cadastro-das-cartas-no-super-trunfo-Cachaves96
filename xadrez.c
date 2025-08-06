#include <stdio.h>

int main() {
    // Dados da Carta 1 
    char cidade1[] = "São Paulo";
    char estado1 = 'A';
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;

    // Dados da Carta 2 
    char cidade2[] = "Rio de Janeiro";
    char estado2 = 'B';
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30;

    // Cálculos básicos
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // 1. ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO 
    const char* atributo = "POPULACAO";  // Atributo que será comparado
    float valor1 = populacao1;           
    float valor2 = populacao2;

    // 2. DETERMINAÇÃO DOS VALORES COMPARADOS
    int menor_valor_vence = 0;  // Flag para regra especial de densidade
    
    if(atributo == "DENSIDADE") { 
        valor1 = densidade1;
        valor2 = densidade2;
        menor_valor_vence = 1;     // Ativa regra especial
    }

    // 3. COMPARAÇÃO SIMPLES COM APENAS UM IF-ELSE
    printf("\n--- SUPER TRUNFO: COMPARAÇÃO SIMPLES ---\n");
    printf("Atributo comparado: %s\n", atributo);
    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, valor2);

    // Lógica de comparação única
    if(menor_valor_vence) {
        // Caso especial para densidade (menor valor vence)
        if(valor1 < valor2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if(valor2 < valor1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nResultado: EMPATE!\n");
        }
    } else {
        // Demais atributos (maior valor vence)
        if(valor1 > valor2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if(valor2 > valor1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nResultado: EMPATE!\n");
        }
    }

    return 0;
}
   
