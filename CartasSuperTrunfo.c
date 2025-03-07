#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

//DECLARAÇÃO DAS VARIÁVEIS CADA CARTA1.

    char estado1[3], nomedaCidade1[20], codigodaCarta1[4];
    float area1, PIB1, densidadePopulacional1, PIBperCapita1, superPoder1;
    unsigned long int populacao1;
    int numerosdepontosTuristicos1;

//DECLARAÇÕES DAS VARIÁVEIS DA CARTA2.

    char estado2[3], nomedaCidade2[20], codigodaCarta2[4];
    float area2, PIB2, densidadePopulacional2, PIBperCapita2, superPoder2;
    unsigned long int populacao2;
    int numerosdepontosTuristicos2;


//ENTRADA DE DADOS  DA CARTA1

    printf("Informe a sigla do estado: \n");
    scanf(" %2s", estado1);

    printf("Digite o código da carta: \n");
    scanf(" %3s", codigodaCarta1);

    printf("Informe o nome da cidade: \n");
    scanf(" %19[^\n]", nomedaCidade1);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: \n");
    scanf("%f",&PIB1);

    printf("Informe a quantidades de pontos turísticos: \n");
    scanf("%d", &numerosdepontosTuristicos1);


//CALCULO DA DENSIDADE(POPULACAO/AREA) E PIB PER CAPITA (PIB/POPULACAO) DA CARTA 1

    densidadePopulacional1 = (float) populacao1 / area1;
    PIBperCapita1 = PIB1 / (float) populacao1;
    superPoder1 = (float)populacao1 + area1 + PIB1 + numerosdepontosTuristicos1 + PIBperCapita1 + ( area1/(float)populacao1);


//SAÍDAS FORMATADAS DA CARTA1

    printf("Carta  :\n");
    printf("Estado : %s\n", estado1);
    printf("Código : %s\n", codigodaCarta1);
    printf("Nome da Cidade :%s\n", nomedaCidade1);
    printf("População : %lu\n",populacao1);
    printf("Área : %.2f km²\n", area1);
    printf("PIB :%.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos :%d\n", numerosdepontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB Per Capita: %.2f milhões de reais\n", PIBperCapita1);



//ENTRADAS DE DADOS DA CARTA2

    printf("Informe a sigla do Estado: \n");
    scanf(" %2s", estado2);

    printf("Digite o código da carta: \n");
    scanf(" %3s", codigodaCarta2);

    printf("Informe o nome da cidade: \n");
    scanf(" %19[^\n]", nomedaCidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Informe a aŕea da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f",&PIB2);

    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &numerosdepontosTuristicos2);


//CALCULO DA DENSIDADE (POPULACAO/AREA) E PIB PER CAPITA (PIB/POPULACAO) CARTA 2

    densidadePopulacional2 = (float) populacao2 / area2;
    PIBperCapita2 = PIB2 / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + PIB2 + numerosdepontosTuristicos2 + PIBperCapita2 + (area2 / (float)populacao2);


//SAÍDAS FORMATADAS DA CARTA2

    printf("Carta 2:\n");
    printf("Estado : %2s\n", estado2);
    printf("Código : %s\n",codigodaCarta2);
    printf("Nome da Cidade : %s\n", nomedaCidade2);
    printf("População :  %lu\n", populacao2);
    printf("Área : %.2f km²\n", area2);
    printf("PIB : %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos :%d\n", numerosdepontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capital: %.2f milhões de reais\n", PIBperCapita2);

//COMPARAÇÕES DE ATRIBUTOS POR ATRIBUTOS

    int compPop, compArea, compPIB, compPIBPerCap, compPontos, compDensidade, compSuper;

    compPop = (populacao1 > populacao2);
    compArea = (area1 > area2);
    compPIB = (PIB1 > PIB2);
    compPontos = (numerosdepontosTuristicos1 > numerosdepontosTuristicos2);
    compDensidade = (densidadePopulacional1 < densidadePopulacional2);
    compPIBPerCap = (PIBperCapita1 > PIBperCapita2);
    compSuper = (superpoder1 > superPoder2);

//RESULTADO DAS COMPARAÇÕES

    printf("\n === Comparação de Cartas=== \n");
    printf("População: %s (%d)\n",(compPop ? "Carta 1 venceu": "Carta 2 venceu"), compPop);
    printf("Aréa: %s (%d)\n",(compArea ? "Carta 1 venceu": "Carta 2 venceu"), compArea);
    printf("PIB: %s (%d)\n", (compPIB ? "Carta 1 venceu": "Carta 2 venceu"), compPIB);
    printf("Pontos turísticos: %s (%d)\n", (compPontos ? "Carta 1 venceu": "Carta 2 venceu"), compPontos);
    printf("Densidade Populacional: %s (%d)\n",(compDensidade ? "Carta 1 venceu": "Carta 2 venceu"), compDensidade);
    printf("PIB per Capital: %s (%d)\n",(compPIBPerCap ? "Carta 1 venceu": "Carta 2 venceu"), compPIBPerCap);
    printf("Super poder: %s (%d)\n",(compSuper ? "Carta 1 venceu": "Carta 2 venceu"), compSuper);

    return 0;
}
