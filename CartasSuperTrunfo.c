#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

struct carta {
  char estado;
  char codigo_carta[4];
  char nome_cidade[50];
  int populacao;
  float area;
  float pib;
  int num_pontos_turisticos;
};

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  struct carta carta1;

  struct carta carta2;

  printf(">>> Cadastro de Cartas Super Trunfo <<<");

  // Área para entrada de dados
  //Carta 1
  printf("Insira os dados da Carta 1\n");
  printf("Estado (letra de 'A' a 'H'): ");
  scanf(" %c", &carta1.estado);

  printf("Código da Carta (ex: A01): ");
  scanf("%s", &carta1.codigo_carta);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", &carta1.nome_cidade);

  printf("População: ");
  scanf("%d", &carta1.populacao);

  printf("Área em Km2 (ex: 1636.25): ");
  scanf("%f", &carta1.area);

  printf("PIB (em bilhões de reais, ex: 754.39): ");
  scanf("%f", &carta1.pib);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &carta1.num_pontos_turisticos);

  //Carta 2
  printf("Insira os dados da Carta 2\n");
  printf("Estado (letra de 'A' a 'H'): ");
  scanf(" %c", &carta2.estado);

  printf("Código da Carta (ex: A01): ");
  scanf("%s", &carta2.codigo_carta);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", &carta2.nome_cidade);

  printf("População: ");
  scanf("%d", &carta2.populacao);

  printf("Área em Km2 (ex: 1636.25): ");
  scanf("%f", &carta2.area);

  printf("PIB (em bilhões de reais, ex: 754.39): ");
  scanf("%f", &carta2.pib);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &carta2.num_pontos_turisticos);

  // Área para exibição dos dados da cidade

  printf("\nDados Carta 1\n");  
  printf("Estado: %c\n", carta1.estado);
  printf("Codigo: %s\n", carta1.codigo_carta);
  printf("Nome da Cidade: %s\n", carta1.nome_cidade);
  printf("Populacao: %d\n", carta1.populacao);
  printf("Area: %.2f km2\n", carta1.area);
  printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
  printf("Numero de Pontos Turisticos: %d\n", carta1.num_pontos_turisticos);

  printf("\nDados Carta 2\n");  
  printf("Estado: %c\n", carta2.estado);
  printf("Codigo: %s\n", carta2.codigo_carta);
  printf("Nome da Cidade: %s\n", carta2.nome_cidade);
  printf("Populacao: %d\n", carta2.populacao);
  printf("Area: %.2f km2\n", carta2.area);
  printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
  printf("Numero de Pontos Turisticos: %d\n", carta2.num_pontos_turisticos);


  return 0;
} 
