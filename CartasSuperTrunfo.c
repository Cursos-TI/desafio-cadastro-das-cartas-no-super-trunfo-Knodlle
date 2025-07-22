#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

//Teste larissa

int main() {
    //variáveis
    char estado1, estado2;
    char cod_carta1[4], cod_carta2[4];
    char nome_cidade1[20],nome_cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1,area2,densidade_populacao1,densidade_populacao2;
    float pib1,pib2,pib_capita1,pib_capita2;
    int pontos_turisticos1,pontos_turisticos2;
    float super_poder1,super_poder2;
    
    
    //cadastro das cartas
    printf("---------Cadastro de cartas---------\n");
    
    //carta 1
    printf("\nCarta 1\n");
    
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Codigo da carta de 01 a 04 (ex: %c01, %c03): ", estado1,estado1);
    scanf(" %3s", &cod_carta1);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    
    printf("Populacao da carta: ");
    scanf(" %lu", &populacao1);
    
    printf("Area da carta em km2: ");
    scanf(" %f", &area1);
    
    printf("Pib da carta: ");
    scanf(" %f",&pib1);
    
    printf("Numero de pontos turisticos: ");
    scanf(" %i", &pontos_turisticos1);

    printf("---CARTA 1 CADASTRADA---\n");
    
    //carta 2
    printf("\nCarta 2\n");
    
    printf("Estado: (letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Codigo da carta de 01 a 04 (ex: %c01, %c03): ", estado2, estado2);
    scanf(" %3s", &cod_carta2);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Populacao da carta: ");
    scanf(" %lu", &populacao2);
    
    printf("Area da carta em km2: ");
    scanf(" %f", &area2);
    
    printf("Pib da carta: ");
    scanf(" %f",&pib2);
    
    printf("Numero de pontos turisticos: ");
    scanf(" %i", &pontos_turisticos2);
    
    printf("---CARTA 2 CADASTRADA---\n");


    //calculos
    densidade_populacao1 = populacao1/area1;
    densidade_populacao2 = populacao2/area2;

    pib_capita1 = pib1/populacao1;
    pib_capita2 = pib2/populacao2;

    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_capita1 + (1/densidade_populacao1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2 + (1/densidade_populacao2);

    //exibiçao das cartas
    printf("\nCartas Cadastradas:\n");
    
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Densidade populacional: %.2f\n", densidade_populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per Capita: %.2f\n", pib_capita1);
    printf("Numero de pontos turisticos: %i\n", pontos_turisticos1);
    printf("\n");
    
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Densidade populacional: %.2f\n", densidade_populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per Capita: %.2f\n", pib_capita2);
    printf("Numero de pontos turisticos: %i\n", pontos_turisticos2);


    //comparando cartas
    printf("\n=+=+=+=+=+=+=BATALHA=+=+=+=+=+=+=\n");

    if (populacao1 > populacao2)
    {
        printf("Populacao: Carta 1 venceu (1)\n");
    }else
    {
        printf("Populacao: Carta 2 venceu (0)\n");
    }

    if (area1 > area2){
        printf("area: Carta 1 venceu (1)\n");
    }else{
        printf("area: Carta 2 venceu (0)\n");
    }

    if (pib1 > pib2){
        printf("PIB: Carta 1 venceu (1)\n");
    }else{
        printf("PIB: Carta 2 venceu (0)\n");
    }
    
    if (pontos_turisticos1 > pontos_turisticos2)
    {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    }else{
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    if (densidade_populacao1 < densidade_populacao2)
    {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    }else{
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if(pib_capita1 > pib_capita2){
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    }else{
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    if (super_poder1 > super_poder2){
        printf("Super Poder: Carta 1 venceu (1)\n");
    }else{
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
    
    return 0;
}
