#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

  char id[4], name[50];
  // id e name = código e nome da cidade
  float area, pib;
  // area = área da cidade, e pib = Pib da cidade
  int tourist_spots, population;
  // tourist_spots = pontos turísticos da cidade, e population = número da população da cidade


  //registrar o código da cidade:
  printf("Digite o código da cidade: ");
  scanf("%s", &id);

  //registrar o nome da cidade:
  printf("Digite o nome da cidade: ");
  scanf("%s", &name);

  //registrar o número da cidade:
  printf("Digite o número da população da cidade: ");
  scanf("%d", &population);

  //registrar a área da cidade:
  printf("Digite a área da cidade em m²: ");
  scanf("%f", &area);

  //registrar o PIB da cidade:
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  //registrar a quantidade de pontos turísticos da cidade:
  printf("Digite o número de pontos turísticos presentes na cidade: ");
  scanf("%d", &tourist_spots);


  //exibir informações da carta:
  printf("\nCarta:\n\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %.3fm²\nPIB: %.2f R$\nQuantidade de pontos turísticos: %d\n", 
         id, name, population, area, pib, tourist_spots);

    return 0;
}