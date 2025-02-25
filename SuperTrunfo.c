#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1, codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Declaração das variáveis para a segunda carta
    char estado2, codigo2[5], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // Leitura dos dados da primeira carta
    printf("Informe os dados da carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // O espaço antes de %c é para consumir qualquer caractere de nova linha
    getchar();  // Limpa o buffer após a leitura do caractere

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer para a próxima leitura
    fgets(cidade1, 50, stdin);  // Lê a linha inteira com espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos
    densidade1 = populacao1 / area1;  // Densidade populacional
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB per capita (em reais)

    printf("\n");  // Quebra de linha após os dados da carta 1

    // Leitura dos dados da segunda carta
    printf("Informe os dados da carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);  // O espaço antes de %c é para consumir qualquer caractere de nova linha
    getchar();  // Limpa o buffer após a leitura do caractere

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer para a próxima leitura
    fgets(cidade2, 50, stdin);  // Lê a linha inteira com espaços

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade2 = populacao2 / area2;  // Densidade populacional
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB per capita (em reais)

    // Exibindo os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1); // Não há necessidade de adicionar '\n' porque fgets já inclui
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n");  // Quebra de linha entre as cartas

    // Exibindo os dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2); // Não há necessidade de adicionar '\n' porque fgets já inclui
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
