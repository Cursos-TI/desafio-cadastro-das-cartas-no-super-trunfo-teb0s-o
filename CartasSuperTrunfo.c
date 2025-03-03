#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

  char estado, codigo[4], nome[50];
  // area = área da cidade, e pib = Pib da cidade
  float area, pib;
  // tourist_spots = pontos turísticos da cidade, e population = número da população da cidade
  int tourist_spots, population;

  //registrar a letra do estado da cidade:
  printf("Digite a letra do estado da cidade: ");
  scanf("%c", &estado);

  //registrar o código da cidade:
  printf("Digite o código da cidade: ");
  scanf("%3s", &codigo);

  //registrar o nome da cidade:
  printf("Digite o nome da cidade: ");
  //scanf(" %s", &nome);
  getchar();
  fgets(nome, sizeof(nome), stdin);
  nome[strlen(nome)-1] = '\0';

  //registrar o número da cidade:
  printf("Digite o número da população da cidade: ");
  scanf("%d", &population);

  //registrar a área da cidade:
  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area);

  //registrar o PIB da cidade:
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  //registrar a quantidade de pontos turísticos da cidade:
  printf("Digite o número de pontos turísticos presentes na cidade: ");
  scanf("%d", &tourist_spots);


  //exibir informações da carta:
  printf("\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\n", 
         estado, codigo, nome, population, area, pib, tourist_spots);

    return 0;
}
