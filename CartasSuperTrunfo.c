#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

struct carta {
  char estado[3];
  char codigo_carta[4];
  char nome_cidade[50];
  int populacao;
  float area;
  float pib;
  int num_pontos_turisticos;
  float densidade;
  float pib_per_capita;
};

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  struct carta carta1;

  struct carta carta2;

  printf(">>> Cadastro de Cartas Super Trunfo <<<");

  // Área para entrada de dados
  //Carta 1
  printf("Insira os dados da Carta 1\n");
  printf("Estado (ex: SP): ");
  scanf(" %s", &carta1.estado);

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
  printf("Estado (ex: SP): ");
  scanf(" %s", &carta2.estado);

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

  //Área para cálculos
  carta1.densidade = (float)carta1.populacao/carta1.area;
  carta1.pib_per_capita = carta1.pib/carta1.populacao;

  carta2.densidade = (float)carta2.populacao/carta2.area;
  carta2.pib_per_capita = carta2.pib/carta2.populacao;

  // Área para exibição dos dados da cidade

  printf("\nDados Carta 1\n");  
  printf("Estado: %c\n", carta1.estado);
  printf("Codigo: %s\n", carta1.codigo_carta);
  printf("Nome da Cidade: %s\n", carta1.nome_cidade);
  printf("Populacao: %d\n", carta1.populacao);
  printf("Area: %.2f km2\n", carta1.area);
  printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
  printf("Numero de Pontos Turisticos: %d\n", carta1.num_pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/km2\n", carta1.densidade);
  printf("PIB per capita: %.2f bilhoes de reais\n", carta1.pib_per_capita);

  printf("\nDados Carta 2\n");  
  printf("Estado: %c\n", carta2.estado);
  printf("Codigo: %s\n", carta2.codigo_carta);
  printf("Nome da Cidade: %s\n", carta2.nome_cidade);
  printf("Populacao: %d\n", carta2.populacao);
  printf("Area: %.2f km2\n", carta2.area);
  printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
  printf("Numero de Pontos Turisticos: %d\n", carta2.num_pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/km2\n", carta2.densidade);
  printf("PIB per capita: %.2f bilhoes de reais\n", carta2.pib_per_capita);

  //Comparação dos Dados
  float atributo1 = carta1.densidade;
  float atributo2 = carta2.densidade;
  char *nome_atributo = "Densidade Populacional";

  printf("Comparacao de cartas (Atributo: %s):\n", nome_atributo);
  printf("Carta 1 - %s (%s): %g\n", carta1.nome_cidade, carta1.estado, atributo1);
  printf("Carta 2 - %s (%s): %g\n", carta2.nome_cidade, carta2.estado, atributo2);

  // Lógica de vitória
  if (strcmp(nome_atributo, "Densidade Populacional") == 0) {
    // Vence a carta com menor valor
    if (atributo1 < atributo2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (atributo2 < atributo1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
      printf("Resultado: Empate!\n");
    }
  } else {
    // Vence a carta com maior valor
    if (atributo1 > atributo2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (atributo2 > atributo1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
      printf("Resultado: Empate!\n");
    }
  }

  return 0;
} 
