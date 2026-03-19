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
   double densidade1, densidade2, inversa1, inversa2;

   percapita1 = (pib1 * 1000000000) / populacao1;
   percapita2 = (pib2 * 1000000000) / populacao2;

   densidade1 = (double)populacao1 / area1;
   densidade2 = (double)populacao2 / area2;

   inversa1 = 1.0 / densidade1;
   inversa2 = 1.0 / densidade2;

   double superpoder1, superpoder2;
    
   superpoder1 = populacao1 + area1 + pib1 + turismo1 + percapita1 + inversa1;
   superpoder2 = populacao2 + area2 + pib2 + turismo2 + percapita2 + inversa2;
  
    // Desenvolvolvimento da lógica de comparação e o uso de switch.
      
   printf("Pronto para conferir a carta vencedora?\n");
   printf(" \n");
   printf("Escolha uma categoria para ser o critério de comparação: \n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - PIB\n");
   printf("4 - Turismo\n");
   printf("5 - PIB Percapita\n");
   printf("6 - Densidade Populacional\n");
   printf("7 - Super Poder\n");
   printf("\n");
   printf("O Super Poder é a soma de todos os atributos, porém na densidade é considerado seu valor inverso (1/densidade).\n");
   printf("\n");

   int criterio;

   printf("O critério escolhido é o: ");
   scanf("%u", &criterio);
   printf("\n");

   switch(criterio){
      case 1:
         printf("Comparação de Populações\n");
         printf("Carta 1 - %s: %i\n", cidade1, populacao1);
         printf("Carta 2 - %s: %i\n", cidade2, populacao2);
         if (populacao1 > populacao2 || populacao1 < populacao2){
            if(populacao1 > populacao2){
               printf("A carta 1 %s venceu!\n", cidade1);
            } else {
            printf("A carta 2 %s venceu!\n", cidade2);
            }
         } else {
         printf("As cartas empataram!\n");
         }
         break;
      case 2:
         printf("Comparação de Áreas\n");
         printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
         printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
         if(area1 > area2 || area1 < area2){
            if(area1 > area2){
               printf("A carta 1 %s venceu!\n", cidade1);
             } else {
               printf("A carta 2 %s venceu!\n", cidade2); 
            }
         } else {
         printf("As cartas empataram!\n");
         }
         break;
      case 3:
         printf("Comparação de PIBs\n");
         printf("Carta 1 - %s: %i bilhões de reais\n", cidade1, pib1);
         printf("Carta 2 - %s: %i bilhões de reais\n", cidade2, pib2);
         if(pib1 > pib2 || pib1 < pib2){
           if(pib1 > pib2){
               printf("A carta 1 %s venceu!\n", cidade1);
            } else {
               printf("A carta 2 %s venceu!\n", cidade2); 
            }
         } else {
         printf("As cartas empataram!\n");
         }
         break;
      case 4:
         printf("Comparação de Pontos Turísticos\n");
         printf("Carta 1 - %s: %i\n", cidade1, turismo1);
         printf("Carta 2 - %s: %i\n", cidade2, turismo2);
         if(turismo1 > turismo2 || turismo1 < turismo2){
            if(turismo1 > turismo2){
               printf("A carta 1 %s venceu!\n", cidade1);
            } else {
               printf("A carta 2 %s venceu!\n", cidade2); 
            }
         } else {
         printf("As cartas empataram!\n");
         }
         break;
      case 5:
         printf("Comparação de Dencidades Populacionais\n");
         printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
         printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
         if(densidade1 > densidade2 || densidade1 < densidade2){
            if(densidade1<densidade2){
               printf("A carta 1 %s venceu!\n", cidade1);
            } else {
               printf("A carta 2 %s venceu!\n", cidade2); 
            }
         } else {
         printf("As cartas empataram!\n");
         }
         break;
      case 6:
         printf("Comparação de PIBs Percapta\n");
         printf("Carta 1 - %s: %.2f R$/hab\n", cidade1, percapita1);
         printf("Carta 2 - %s: %.2f R$/hab\n", cidade2, percapita2);
         if(percapita1 > percapita2 || percapita1 < percapita2){
            if(percapita1 > percapita2){
               printf("A carta 1 %s venceu!\n", cidade1);
            } else {
               printf("A carta 2 %s venceu!\n", cidade2);
            }
         } else {
         printf("As cartas empataram!\n");
         }
         break;
      case 7:
         printf("Comparação de Super Poderes\n");
         printf("Carta 1 - %s: %.2f\n", cidade1, superpoder1);
         printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
         if(superpoder1 > superpoder2 || superpoder1 < superpoder2){
            if(superpoder1 > superpoder2){
               printf("A carta 1 %s venceu!\n", cidade1);
            } else {
              printf("A carta 2 %s venceu!\n", cidade2);
            }
         } else {
         printf("As cartas empataram!\n");
         }
         break;
      default:
         printf("Opção inválida. Tente novamente.\n");
   }

   return 0;
}
