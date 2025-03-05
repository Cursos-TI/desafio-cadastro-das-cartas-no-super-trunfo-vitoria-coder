#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

//DECLARAÇÃO DAS VARIÁVEIS PRA ARMAZENAR OS DADOS DE CADA CARTA.

    char estado[3], nomedaCidade[20], codigodaCarta[4];
    int  numerosdepontosTuristicos, populacao;
    float area, PIB, densidadePopulacional, PIBperCapita;

//ENTRADA DE DADOS  DA CARTA1

    printf("Informe a sigla do estado: \n");
    scanf(" %2s", estado);

    printf("Digite o código da carta: \n");
    scanf(" %3s", codigodaCarta);

    printf("Informe o nome da cidade: \n");
    scanf(" %19[^\n]", nomedaCidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: \n");
    scanf("%f",&PIB);

    printf("Informe a quantidades de pontos turísticos: \n");
    scanf("%d", &numerosdepontosTuristicos);



    densidadePopulacional = (float) populacao / area;
    PIBperCapita = PIB / (float) populacao;


//SAÍDAS FORMATADAS DA CARTA1

    printf("Carta 1 :\n");
    printf("Estado : %s\n", estado);
    printf("Código : %s\n", codigodaCarta);
    printf("Nome da Cidade :%s\n", nomedaCidade);
    printf("População : %d\n",populacao);
    printf("Área : %.2f km²\n", area);
    printf("PIB :%.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos :%d\n", numerosdepontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB Per Capita: %.2f milhões de reais\n", PIBperCapita);



//ENTRADAS DE DADOS DA CARTA2

    printf("Informe a sigla do Estado: \n");
    scanf(" %2s", estado);

    printf("Digite o código da carta: \n");
    scanf(" %3s", codigodaCarta);

    printf("Informe o nome da cidade: \n");
    scanf(" %19[^\n]", nomedaCidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Informe a aŕea da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: \n");
    scanf("%f",&PIB);

    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &numerosdepontosTuristicos);


    densidadePopulacional = (float) populacao / area;
    PIBperCapita = PIB / (float) populacao;

//SAÍDAS FORMATADAS DA CARTA2

    printf("Carta 2:\n");
    printf("Estado : %2s\n", estado);
    printf("Código : %s\n",codigodaCarta);
    printf("Nome da Cidade : %s\n", nomedaCidade);
    printf("População :  %d\n", populacao);
    printf("Área : %.2f km²\n", area);
    printf("PIB : %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos :%d\n", numerosdepontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capital: %.2f milhões de reais\n", PIBperCapita);

    return 0;
}
