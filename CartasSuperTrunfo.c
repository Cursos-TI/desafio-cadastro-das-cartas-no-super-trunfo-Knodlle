#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char cod_carta1[4], cod_carta2[4];
    char nome_cidade1[20],nome_cidade2[20];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontos_turisticos1,pontos_turisticos2;
    
    //cadastro das cartas
    printf("---------Cadastro de cartas---------\n");
    printf("\nCarta 1\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta de 01 a 04 (ex: %c01, %c03): ", estado1,estado1);
    scanf(" %3s", &cod_carta1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("Populacao da carta: ");
    scanf(" %i", &populacao1);
    printf("Area da carta em km2: ");
    scanf(" %f", &area1);
    printf("Pib da carta: ");
    scanf(" %f",&pib1);
    printf("Numero de pontos turisticos: ");
    scanf(" %i", &pontos_turisticos1);

    printf("---CARTA 1 CADASTRADA---\n");

    printf("\nCarta 2\n");
    printf("Estado: (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta de 01 a 04 (ex: %c01, %c03): ", estado2, estado2);
    scanf(" %3s", &cod_carta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("Populacao da carta: ");
    scanf(" %i", &populacao2);
    printf("Area da carta em km2: ");
    scanf(" %f", &area2);
    printf("Pib da carta: ");
    scanf(" %f",&pib2);
    printf("Numero de pontos turisticos: ");
    scanf(" %i", &pontos_turisticos2);
    
    printf("---CARTA 2 CADASTRADA---\n");

    //exibiçao das cartas
    printf("\nCartas Cadastradas:\n");
    
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %i\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %i\n", pontos_turisticos1);
    printf("\n");
    
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %i\n", pontos_turisticos2);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
