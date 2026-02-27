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
  char estado[20], cidade[20], codigoCarta[3];
  char estado2[20], cidade2[20], codCarta2[3]; 
  //tive que usar indetificadores diferentes para o codigo da carta pois estava dando conflito
  int  turismo, turismo2;
  double area, pib, area2, pib2;
  long int populacao, populacao2;
  //Criei uma var para cada dado pois não consigo armazenar 2 dados em apenas 1
  


  // Área para entrada de dados
  printf("Hora de cadastrar sua primeira carta! Insira os dados corretamente.\n");

  printf("Digite o estado da sua primeira carta: ");
  scanf("%s", &estado);

  printf("Digite a cidade da sua primeira carta: ");
  scanf("%s", &cidade);

  printf("Digite o código da sua primeira carta: ");
  scanf("%s", &codigoCarta);

  printf("Digite a população do estado da sua primeira carta: ");
  scanf("%ld", &populacao);
  
  printf("Digite a área da sua primeira carta: ");
  scanf("%lf", &area);

  printf("Digite o PIB da sua primeira carta: ");
  scanf("%lf", &pib);

  printf("Digite os pontos de turismo da sua primeira carta: ");
  scanf("%d", &turismo);


  printf("Hora de cadastrar a sua segunda carta! Insira os dados corretamente.\n");

  printf("Digite o estado da sua segunda carta: ");
  scanf("%s", &estado2);

  printf("Digite a cidade da sua segunda carta: ");
  scanf("%s", &cidade2);

  printf("Digite o código da sua segunda carta: ");
  scanf("%s", &codCarta2);

  printf("Digite a população do estado da sua segunda carta: ");
  scanf("%ld", &populacao2);
  
  printf("Digite a área da sua segunda carta: ");
  scanf("%lf", &area2);

  printf("Digite o PIB da sua segunda carta: ");
  scanf("%lf", &pib2);

  printf("Digite os pontos de turismo da sua segunda carta: ");
  scanf("%d", &turismo2);

  //calculo das densidades e pib

  double densidadePop = populacao / area;
  double densidadePop2 = populacao2 / area2;

  double pibCapita = pib / populacao;
  double pibCapita2 = pib2 / populacao2;

  //Calculo de superpoder

  double superPoder = populacao + area + pib + turismo + pibCapita - densidadePop;
  double superPoder2 = populacao2 + area2 + pib2 + turismo2 + pibCapita2 - densidadePop2;
  // Área para exibição dos dados da cidade

  printf("Sua primeira carta!\n>Estado: %s\n>Cidade: %s\n>Código: %s\n>População: %ld\n>Área: %.3lf km²\n>PIB: R$%.2lf\n>Pontos de turismo: %d\n>Densidade populacional: %.2lf Hab/km²\n>PIB per Capita: R$%.2lf\n>SuperPoder: %.2lf\n\n",
  estado, cidade, codigoCarta, populacao, area, pib, turismo, densidadePop, pibCapita, superPoder);

  printf("Sua segunda carta!\n>Estado: %s\n>Cidade: %s\n>Código: %s\n>População: %ld\n>Área: %.3lf km²\n>PIB: R$%.2lf\n>Pontos de turismo: %d\n>Densidade populacional: %.2lf Hab/km²\n>PIB per Capita: R$%.2lf\n>SuperPoder: %.2lf\n\n",
  estado2, cidade2, codCarta2, populacao2, area2, pib2, turismo2, densidadePop2, pibCapita2, superPoder2);

  //comparaçao

  printf("Comparação de cada ponto das cartas\n");

  printf("Populaçao:\n");
  if(populacao > populacao2){
    printf("A primeira carta tem %ld/////A segunda carta tem %ld\n Carta um vence!\n", populacao, populacao2);
  } else{
    printf("A primeira carta tem %ld/////A segunda carta tem %ld\n Carta dois vence!\n", populacao, populacao2);
  }
  
  printf("Área:\n");
  if(area > area2){
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\nCarta um vence!\n", area, area2);
  } else{
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\n Carta dois vence!\n", area, area2);
  }

  printf("PIB:\n");
  if(pib > pib2){
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\nCarta um vence!\n", pib , pib2);
  } else{
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\n Carta dois vence!\n", pib, pib2);
  }

  printf("Pontos de turismo:\n");
  if(turismo > turismo2){
    printf("A primeira carta tem %d/////A segunda carta tem %d\nCarta um vence!\n", turismo, turismo2);
  } else{
    printf("A primeira carta tem %d/////A segunda carta tem %d\n Carta dois vence!\n", turismo, turismo2);
  }

  printf("Densidade populacional:\n");
  if(densidadePop < densidadePop2){
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\nCarta um vence!\n", densidadePop, densidadePop2);
  } else{
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\n Carta dois vence!\n", densidadePop, densidadePop2);
  }
  
  printf("PIB per capita:\n");
  if(pibCapita > pibCapita2){
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\nCarta um vence!\n", pibCapita, pibCapita2);
  } else{
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\n Carta dois vence!\n", pibCapita, pibCapita2);
  }

  printf("SuperPoder:\n");
  if(superPoder > superPoder2){
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\nCarta um vence!\n", superPoder, superPoder2);
  } else{
    printf("A primeira carta tem %.2lf/////A segunda carta tem %.2lf\n Carta dois vence!\n", superPoder, superPoder2);
  }

  printf("%s", codigoCarta);
return 0;
} 
