#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// %d: Imprime um inteiro no formato decimal.
// %i: Equivalente a %d.
// %f: Imprime um número de ponto flutuante no formato padrão.
// %e: Imprime um número de ponto flutuante na notação científica.
// %c: Imprime um único caractere.
// %s: Imprime uma cadeia (string) de caracteres.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[20], cidade[20], codCarta[4], estado2[20], cidade2[20], codCarta2[4];
  int populacao, turismo, populacao2, turismo2;
  float area, pib, area2, pib2;
  //Criei uma var para cada dado pois não consigo armazenar 2 dados em apenas 1 ainda

  // Área para entrada de dados
  printf("Hora de cadastrar sua primeira carta! Insira os dados corretamente.\n");

  printf("Digite o estado da sua primeira carta: ");
  scanf("%s", estado);

  printf("Digite a cidade da sua primeira carta: ");
  scanf("%s", cidade);

  printf("Digite o código da sua primeira carta: ");
  scanf("%s", codCarta);

  printf("Digite a população do estado da sua primeira carta: ");
  scanf("%d", &populacao);
  
  printf("Digite a área da sua primeira carta: ");
  scanf("%f", &area);

  printf("Digite o PIB da primeira sua carta: ");
  scanf("%f", &pib);

  printf("Digite os pontos turiscos da sua primeira carta: ");
  scanf("%d", &turismo);


  printf("Hora de cadastrar a sua segunda carta! Insira os dados corretamente.\n");

  printf("Digite o estado da sua segunda carta: ");
  scanf("%s", estado2);

  printf("Digite a cidade da sua segunda carta: ");
  scanf("%s", cidade2);

  printf("Digite o código da sua segunda carta: ");
  scanf("%s", codCarta2);

  printf("Digite a população do estado da sua segunda carta: ");
  scanf("%d", &populacao2);
  
  printf("Digite a área da sua segunda carta: ");
  scanf("%f", &area2);

  printf("Digite o PIB da sua segunda carta: ");
  scanf("%f", &pib2);

  printf("Digite os pontos turiscos da sua segunda carta: ");
  scanf("%d", &turismo2);

  // Área para exibição dos dados da cidade

  printf("Sua primeira carta!\n>Estado: %s\n>Cidade: %s\n>Código: %s\n>População: %d\n>Área: %f km²\n>PIB: R$%f\n>Pontos de turismo: %d\n\n",
  estado, cidade, codCarta, populacao, area, pib, turismo );

  printf("Sua segunda carta!\n>Estado: %s\n>Cidade: %s\n>Código: %s\n>População: %d\n>Área: %.3f km²\n>PIB: R$%.2f\n>Pontos de turismo: %d\n\n",
  estado2, cidade2, codCarta2, populacao2, area2, pib2, turismo2 );

return 0;
} 
