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
  char estado[20], cidade[20], codCarta[3], estado2[20], cidade2[20], codCarta2[3];
  int populacao, turismo, populacao2, turismo2;
  float area, pib, area2, pib2;
  //Criei uma var para cada dado pois não consigo armazenar 2 dados em apenas 1
  


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

  printf("Digite os pontos de turismo da sua primeira carta: ");
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

  printf("Digite os pontos de turismo da sua segunda carta: ");
  scanf("%d", &turismo2);

  //calculo das densidades e pib

  float densidadePop = populacao / area;
  float densidadePop2 = populacao2 / area2;

  float pibCapita = pib / populacao;
  float pibCapita2 = pib2 / populacao2;

  //Calculo de superpoder

  float superPoder = populacao + area + pib + turismo + pibCapita - densidadePop;
  float superPoder2 = populacao2 + area2 + pib2 + turismo2 + pibCapita2 - densidadePop2;
  // Área para exibição dos dados da cidade

  printf("Sua primeira carta!\n>Estado: %s\n>Cidade: %s\n>Código: %s\n>População: %d\n>Área: %.3f km²\n>PIB: R$%.2f\n>Pontos de turismo: %d\n>Densidade populacional: %.2f Hab/km²\n>PIB per Capita: R$%.2f\n>SuperPoder: %.2f\n\n",
  estado, cidade, codCarta, populacao, area, pib, turismo, densidadePop, pibCapita, superPoder);

  printf("Sua segunda carta!\n>Estado: %s\n>Cidade: %s\n>Código: %s\n>População: %d\n>Área: %.3f km²\n>PIB: R$%.2f\n>Pontos de turismo: %d\n>Densidade populacional: %.2f Hab/km²\n>PIB per Capita: R$%.2f\n>SuperPoder: %.2f\n\n",
  estado2, cidade2, codCarta2, populacao2, area2, pib2, turismo2, densidadePop2, pibCapita2, superPoder2);

  //comparaçao

  printf("Comparação de cada ponto das cartas\nCarta um melhor= (1)/////Carta dois melhor= (2)\n");

  printf("População: (%d)\n", populacao > populacao2);
  printf("Área: (%d)\n", area > area2);
  printf("PIB: (%d)\n", pib > pib2);
  printf("Pontos de turismo: (%d)\n", turismo > turismo2);
  printf("Densidade populacional: (%d)\n", densidadePop < densidadePop2);
  printf("PIB per capita: (%d)\n", pibCapita > pibCapita2);
  printf("SuperPoder: (%d)\n", superPoder > superPoder2);

return 0;
} 
