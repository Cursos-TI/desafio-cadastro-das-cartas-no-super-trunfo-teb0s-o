#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

float densidade_pop(int populacao, float area){
  return populacao / area;
}

float pib_capta(float pib , int populacao){
  return pib / populacao;
}

//n = número da carta
char* registro_cartas(int n) {
  static char carta[500];

  char estado, codigo[4], nome[50];
  // area = área da cidade, e pib = Pib da cidade
  float area, pib;
  // pto_turisticos= pontos turísticos da cidade, e populacao= número da população da cidade
  int pto_turisticos, populacao;

  //registrar a letra do estado da cidade:
  printf("Digite a letra do estado da cidade: ");
  scanf("%c", &estado);

  //registrar o código da cidade:
  printf("Digite o código da cidade: ");
  scanf("%3s", &codigo);

  //registrar o nome da cidade:
  printf("Digite o nome da cidade: ");
  getchar();
  fgets(nome, sizeof(nome), stdin);
  nome[strlen(nome)-1] = '\0';

  //registrar o número da cidade:
  printf("Digite o número da população da cidade: ");
  scanf("%d", &populacao);

  //registrar a área da cidade:
  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area);

  //registrar o PIB da cidade:
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  //registrar a quantidade de pontos turísticos da cidade:
  printf("Digite o número de pontos turísticos presentes na cidade: ");
  scanf("%d", &pto_turisticos);


  //exibir informações da cartas
  sprintf(carta, "Carta %d:\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capta: %.2f reais\n",
  n, estado, codigo, nome, populacao, area, pib, pto_turisticos, densidade_pop(populacao, area), pib_capta(pib, populacao));

  getchar();

  return carta;
}

int main (){

  char carta1[600];
  char carta2[600];

  printf("\nRegistrar carta 1: \n\n");
  sprintf(carta1, "%s", registro_cartas(1));

  printf("\nRegistrar carta 2: \n\n");
  sprintf(carta2, "%s", registro_cartas(2));

  printf("\n\n%s\n\n", carta1);
  printf("%s", carta2);

  return 0;
}
