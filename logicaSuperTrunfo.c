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

    double percapita1, percapita2;
    double densidade1, densidade2;

    percapita1 = (pib1 * 1000000000) / populacao1;
    percapita2 = (pib2 * 1000000000) / populacao2;

    densidade1 = (double)populacao1 / area1;
    densidade2 = (double)populacao2 / area2;

    //manter armazenado o super poder
    //double superpoder1, superpoder2;
    //superpoder1 = populacao1 + area1 + pib1 + turismo1 + percapita1 + (1 / densidade1);
    //superpoder2 = populacao2 + area2 + pib2 + turismo2 + percapita2 + (1 / densidade2);
  
    // Desenvolvolvimento da lógica de comparação entre duas cartas.
      
    printf("Pronto para conferir a carta vencedora de cada caretoria?\n");
    printf(" \n");

    printf("Comparação de Populações");
    printf("Carta 1 - %s: %i\n", cidade1, populacao1);
    printf("Carta 2 - %s: %i\n", cidade2, populacao2);
    if(populacao1>populacao2){
       printf("A carta 1 %s venceu!\n", cidade1);
    } else {
       printf("A carta 2 %s venceu!\n", cidade2);
    }
    printf(" \n");

    printf("Comparação de Áreas");
    printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
    if(area1>area2){
       printf("A carta 1 %s venceu!\n", cidade1);
    } else {
       printf("A carta 2 %s venceu!\n", cidade2); 
    }
    printf(" \n");

    printf("Comparação de PIBs");
    printf("Carta 1 - %s: %i bilhões de reais\n", cidade1, pib1);
    printf("Carta 2 - %s: %i bilhões de reais\n", cidade2, pib2);
    if(pib1>pib2){
       printf("A carta 1 %s venceu!\n", cidade1);
    } else {
       printf("A carta 2 %s venceu!\n", cidade2); 
    }
    printf(" \n");

    printf("Comparação de Pontos Turísticos");
    printf("Carta 1 - %s: %i\n", cidade1, turismo1);
    printf("Carta 2 - %s: %i\n", cidade2, turismo2);
    if(turismo1>turismo2){
       printf("A carta 1 %s venceu!\n", cidade1);
    } else {
       printf("A carta 2 %s venceu!\n", cidade2); 
    }
    printf(" \n");

    printf("Comparação de Dencidades Populacionais");
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
    if(densidade1<densidade2){
       printf("A carta 1 %s venceu!\n", cidade1);
    } else {
       printf("A carta 2 %s venceu!\n", cidade2); 
    }

    printf(" \n");
    printf("Comparação de PIBs Percapta");
    printf("Carta 1 - %s: %.2f R$/hab\n", cidade1, percapita1);
    printf("Carta 2 - %s: %.2f R$/hab\n", cidade2, percapita2);
    if(percapita1>percapita2){
       printf("A carta 1 %s venceu!\n", cidade1);
    } else {
       printf("A carta 2 %s venceu!\n", cidade2);
    }

    return 0;
}
