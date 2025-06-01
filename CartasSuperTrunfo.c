#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jean Marc Sperandio

int main() {
    
    int carta, populacao, pontos; //carta: Identificação da Carta - populacao: Número de Habitantes - pontos: Quantidade de Pontos Turísticos da cidade.
    float area, pib; //area: Área da cidade - pib: Produto Interno Bruto da cidade.
    char estado; //Uma letra de 'A' a 'H' (representando um dos oito estados). 
    char codigo[3]; //Letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char cidade[50]; //Nome da cidade

    printf("=>DESAFIO CARTAS SUPER TRUNFO<=\n"); //cabeçalho

    printf("Digite o número de sua Carta:\n");
    scanf("%d", &carta);

    printf("Digite a letra do Estado:\n");
    scanf(" %c", &estado);

    printf("Digite o Código:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &cidade);

    printf("Digite a População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área da Cidade:\n");
    scanf("%ff", &area);

    printf("Digite o PIB da Cidade:\n");
    scanf("%ff", &pib);

    printf("Digite a quantidade de Pontos Turísticos da Cidade:\n");
    scanf("%d", &pontos);

    printf("Carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);

    return 0;
}
