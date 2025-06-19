#include <stdio.h>

int main()
{
    //Variaveis Carta 1
    int populacao1, pontos1; // carta: Identificação da Carta - populacao: Número de Habitantes - pontos: Quantidade de Pontos Turísticos da cidade.
    float area1, pib1;       // area: Área da cidade - pib: Produto Interno Bruto da cidade.
    char estado1;           // Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigo1[10];       // Letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char cidade1[50];       // Nome da cidade

    //Variaveis Carta 2
    int populacao2, pontos2; // carta: Identificação da Carta - populacao: Número de Habitantes - pontos: Quantidade de Pontos Turísticos da cidade.
    float area2, pib2;       // area: Área da cidade - pib: Produto Interno Bruto da cidade.
    char estado2;           // Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigo2[10];       // Letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char cidade2[50];       // Nome da cidade

    printf("=>CARTAS SUPER TRUNFO<=\n"); // cabeçalho

    printf("Carta 1: \n");

    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", &cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontos1);

  
    
    printf("\n"); // cabeçalho

    printf("Carta 2: \n");

    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", &cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontos2);


    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
   
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}