#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

float densidade_pop(int populacao, float area){
  return populacao / area;
}

float pib_capta(float pib , int populacao){
  return pib / populacao;
}

int main () {

  // Registrar primeira carta
  char estado[2], codigo[4], nome[50];
  float area, pib;
  int pto_turisticos, populacao;
  
  printf("Registrar Carta 1:\n\n");

  // Registrar a letra do estado da cidade
  printf("Digite a letra do estado da cidade: ");
  scanf("%1s", estado);

  // Registrar o código da cidade
  printf("Digite o código da cidade: ");
  scanf("%3s", codigo);

  // Registrar o nome da cidade
  printf("Digite o nome da cidade: ");
  getchar();  // Consume newline
  fgets(nome, sizeof(nome), stdin);
  nome[strlen(nome)-1] = '\0';

  // Registrar o número da população da cidade
  printf("Digite o número da população da cidade: ");
  scanf("%d", &populacao);

  // Registrar a área da cidade
  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area);

  // Registrar o PIB da cidade
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  // Registrar a quantidade de pontos turísticos da cidade
  printf("Digite o número de pontos turísticos presentes na cidade: ");
  scanf("%d", &pto_turisticos);

  // Registrar segunda carta
  char estado_2, codigo_2[4], nome_2[50];
  float area_2, pib_2;
  int pto_turisticos_2, populacao_2;

  printf("\n\nRegistrar Carta 2:\n\n");

  // Registrar a letra do estado da cidade
  printf("Digite a letra do estado da cidade: ");
  getchar();  // Consume newline left by previous input
  scanf("%c", &estado_2);

  // Registrar o código da cidade
  printf("Digite o código da cidade: ");
  scanf("%3s", codigo_2);

  // Registrar o nome da cidade
  printf("Digite o nome da cidade: ");
  getchar();  // Consume newline
  fgets(nome_2, sizeof(nome_2), stdin);
  nome_2[strlen(nome_2)-1] = '\0';

  // Registrar o número da população da cidade
  printf("Digite o número da população da cidade: ");
  scanf("%d", &populacao_2);

  // Registrar a área da cidade
  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area_2);

  // Registrar o PIB da cidade
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib_2);

  // Registrar a quantidade de pontos turísticos da cidade
  printf("Digite o número de pontos turísticos presentes na cidade: ");
  scanf("%d", &pto_turisticos_2);

  // Exibir informações das cartas
  printf("\n\nCarta 1:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capta: %.2f reais\n",
  estado, codigo, nome, populacao, area, pib, pto_turisticos, densidade_pop(populacao, area), pib_capta(pib, populacao));

  printf("\n\nCarta 2:\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capta: %.2f reais\n",
  estado_2, codigo_2, nome_2, populacao_2, area_2, pib_2, pto_turisticos_2, densidade_pop(populacao_2, area_2), pib_capta(pib_2, populacao_2));

  return 0;
}

