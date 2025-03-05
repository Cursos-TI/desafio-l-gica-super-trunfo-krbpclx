#include <stdio.h>

// Desafio Super Trunfo nivel 2 - Países
// Tema 2 - usos do if e else
//Teste Kayck

int main() {
    char estado [20];
    char estado2 [20];
    char codigo [20];
    char codigo2 [20];
    char nome [20];
    char nome2 [20];
    int populacao, populacao2, turisticos, turisticos2, opcao;
    float area, area2, pib, pib2, densidade, densidade2,pibcapita, pibcapita2, densidadeinv, densidadeinv2, superpoder1, superpoder2;
   
    // Inseri as variaveis das cidades de acordo com o ultimo projeto super trunfo.
    //Obtenção de dados da Carta 01

    printf("Bem vindo ao Desafio Super Trunfo! Insira os dados da Carta 01\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", &estado);

    printf("Digite a letra do Estado seguida de um número de 01 a 04(ex: F01, D03): ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilometros quadrados (km²): ");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto(PIB) da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turisticos);

    // Obtenção de dados da Carta 02

    printf("Muito bem! Agora insira os dados da carta 02\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", &estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04(ex: F01, D03): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilometros quadrados (km²): ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto(PIB) da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turisticos2);

    printf("\n");

    // Após obtenção dos dados, fiz as variaveis de cálculo das densidades, PIBs Per Capita e a densidade inversa da mesma maneira.

    densidade = (float)(populacao / area);
    densidade2 = (float)(populacao2 / area2);

    pibcapita = (pib / populacao);
    pibcapita2 = (pib2 / populacao2);

    densidadeinv = (float)(area / populacao);
    densidadeinv2 = (float)(area2 / populacao2);
    
    // Agora o calculo dos super poderes.

    superpoder1 = populacao + area + pib + turisticos + pibcapita + densidadeinv;
    superpoder2 = populacao2 + area2 + pib2 +  turisticos2 + pibcapita2 + densidadeinv2;

    // Após todas as linhas de obtenção de dados e cálculos, comecei a impressão dos dados.
    printf("Aqui estão os dados de suas cartas:\n");
    printf("\n");

    printf("Carta 01:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("Numero de habitantes: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turisticos: %d\n", turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibcapita);

    printf("\n");
    printf("Carta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Numero de habitantes: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);
    
    // Comparaçoes das cartas(impressões).
    printf("\n");
    printf("***Comparação das cartas***\n");
    printf("** Escolha qual atributo você quer comparar **\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    // Uso dos if e else dos dados e do switch.

    switch (opcao)
    {
    case 1:
        if (populacao > populacao2) {
        printf("** Carta 1 venceu neste atributo! **\n");
        } else if (populacao2 > populacao) { 
        printf("** Carta 2 venceu neste atributo! **\n");
        } else {
        printf("Houve um empate entre as cartas nesse atributo!\n");
      }
        break;
    case 2:
        if (area > area2) {
        printf("** Carta 1 venceu neste atributo! **\n");
        } else if (area2 > area) {
        printf("** Carta 2 venceu neste atributo! **\n");
        } else {
        printf("Houve um empate entre as cartas nesse atributo!\n");
        }
        break;
    case 3:
        if (pib > pib2) {
        printf("** Carta 1 venceu neste atributo! **\n");
        } else if (pib2 > pib) {
        printf("** Carta 2 venceu neste atributo! **\n");
        } else {
        printf("Houve um empate entre as cartas nesse atributo!\n");
        }
        break;
    case 4:
        if (turisticos > turisticos2) {
        printf("** Carta 1 venceu neste atributo! **\n");
        } else if (turisticos2 > turisticos) {
        printf("** Carta 2 venceu neste atributo! **\n");
        } else {
        printf("Houve um empate entre as cartas nesse atributo!\n");
        }
        break;
    case 5:
        if (densidadeinv > densidadeinv2) {
        printf("** Carta 1 venceu neste atributo! **\n");
        } else if (densidadeinv2 > densidadeinv) {
        printf("** Carta 2 venceu neste atributo! **\n");
        } else {
        printf("Houve um empate entre as cartas nesse atributo!\n");
        } 
        break;
    case 6:
        if (pibcapita > pibcapita2) {
        printf("** Carta 1 venceu neste atributo! **\n");
        } else if (pibcapita2 > pibcapita) {
        printf("** Carta 2 venceu neste atributo! **\n");
        } else {
        printf("Houve um empate entre as cartas nesse atributo!\n");
        }
        break;
    }

    if (superpoder1 > superpoder2) {
        printf("*** O vencedor é a carta 1! ***\n");
    } else if (superpoder2 > superpoder1) {
        printf("*** O vencedor é a carta 2! ***\n");
    } else {
        printf("** As cartas possuem o mesmo poder. Empate!! **\n");
    }

    printf("\n");
    printf("**Fim do jogo**");

    return 0;
}
