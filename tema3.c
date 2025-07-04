#include <stdio.h>
#include <string.h>  // Para comparação de strings, se necessário no futuro

int main() {
    // ==========================================
    // COMPARANDO CARTAS DO SUPER TRUNFO
    // ==========================================

    // ========== DADOS DA CARTA 1 ==========
    char estado1[] = "AL";
    char codigo1[] = "A01";
    char cidade1[] = "Maceió";
    int populacao1 = 1387920;
    float area1 = 510.655;
    float pib1 = 27.5;
    int pontosTuristicos1 = 23;

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // ========== DADOS DA CARTA 2 ==========
    char estado2[] = "CE";
    char codigo2[] = "C02";
    char cidade2[] = "Fortaleza";
    int populacao2 = 4284450;
    float area2 = 312.353;
    float pib2 = 65.16;
    int pontosTuristicos2 = 23;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // ========== IMPRESSÃO DAS CARTAS ==========
    printf("=== Carta 1 ===\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões/hab\n\n", pibPerCapita1);

    printf("=== Carta 2 ===\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões/hab\n\n", pibPerCapita2);

    // ========== ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO ==========
    // Escolha um dos atributos abaixo: "populacao", "area", "pib", "densidade", "pibPerCapita"
    char atributoComparado[] = "densidade";  // <== Altere aqui para outro atributo, se quiser

    printf("=== Comparação de Cartas (Atributo: %s) ===\n", atributoComparado);

    // Variáveis auxiliares para facilitar comparação
    float valor1 = 0, valor2 = 0;

    // Definir os valores de acordo com o atributo escolhido
    if (strcmp(atributoComparado, "populacao") == 0) {
        valor1 = populacao1;
        valor2 = populacao2;
        printf("Carta 1 - %s (%s): %.0f habitantes\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.0f habitantes\n", cidade2, estado2, valor2);
    } else if (strcmp(atributoComparado, "area") == 0) {
        valor1 = area1;
        valor2 = area2;
        printf("Carta 1 - %s (%s): %.3f km²\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.3f km²\n", cidade2, estado2, valor2);
    } else if (strcmp(atributoComparado, "pib") == 0) {
        valor1 = pib1;
        valor2 = pib2;
        printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.2f bilhões\n", cidade2, estado2, valor2);
    } else if (strcmp(atributoComparado, "densidade") == 0) {
        valor1 = densidade1;
        valor2 = densidade2;
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, valor2);
    } else if (strcmp(atributoComparado, "pibPerCapita") == 0) {
        valor1 = pibPerCapita1;
        valor2 = pibPerCapita2;
        printf("Carta 1 - %s (%s): %.6f bilhões/hab\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.6f bilhões/hab\n", cidade2, estado2, valor2);
    } else {
        printf("Atributo de comparação inválido.\n");
        return 1;
    }

    // ========== COMPARAÇÃO E RESULTADO ==========
    if (strcmp(atributoComparado, "densidade") == 0) {
        // Densidade: quanto menor, melhor
        if (valor1 < valor2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (valor2 < valor1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    } else {
        // Para os demais atributos: maior vence
        if (valor1 > valor2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (valor2 > valor1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }

    printf("\n=== Fim do Programa ===\n");

    return 0;
}