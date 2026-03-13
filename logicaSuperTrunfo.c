#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    unsigned int turismo1, turismo2;
    
    
  // Área para entrada de dados
    printf("Vamos começar com uma carta de cada vez. Pronto?\n");
    printf(" \n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: \n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite o número de habitantes: \n");
    scanf("%u", &populacao1);
    printf("Digite a área dessa cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turísticos há nessa cidade: \n");
    scanf("%u", &turismo1);
    printf(" \n");

    printf("Agora vamos para a segunda carta. Pronto?\n");
    printf(" \n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite o número de habitantes: \n");
    scanf("%u", &populacao2);
    printf("Digite a área dessa cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos há nessa cidade: \n");
    scanf("%u", &turismo2);
    printf(" \n");

    float percapita1, percapita2;
    float densidade1, densidade2;

    percapita1 = (pib1 * 1000000000) / populacao1;
    percapita2 = (pib2 * 1000000000) / populacao2;

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    double superpoder1, superpoder2;

    superpoder1 = populacao1 + area1 + pib1 + turismo1 + percapita1 + (1 / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + turismo2 + percapita2 + (1 / densidade2);
  
  // Área para exibição dos dados da cidade
     printf("Pronto para conferir as 2 cartas registradas?\n");
     printf(" \n");
 
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %3s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf(" \n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %3s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf(" \n");
      
    printf("Pronto para conferir a carta vencedora de cada caretoria?\n");
    printf(" \n");
    
    printf("Comparação de Cartas:\n");
    printf("População: %i\n", resultado1);
    printf("Área: %i\n", resultado2);
    printf("PIB: %i\n", resultado3);
    printf("Pontos turísticos: %i\n", resultado4);
    printf("Densidade populacional: %i\n", resultado5);
    printf("PIB percapita: %i\n", resultado6);
    printf("Super Poder: %i\n", resultado7);
  
    // Desenvolvolvimento da lógica de comparação entre duas cartas.
   

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
