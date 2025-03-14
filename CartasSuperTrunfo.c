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

    printf("Informe a area da cidade em quilômetros quadrados: \n");
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
    printf("PIB per Capita: %.2f milhões de reais\n", PIBperCapita2);

//Menu interativo pra escolha dos atributos;
int opcao, opcao2;

printf("\nEscolha o atributo para comparação:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Números de pontos turísticos\n");
printf("5. Densidade Populacional\n");

printf("Digite a opção desejada: ");
scanf("%d", &opcao);


//Segundo menu para garantir que o usúario não escolha o mesmo atributo duas vezes;

do{
    printf("\nEscolha o segundo atributo para comparação (não pode ser o mesmo):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite a segunda opção desejada: ");
    scanf("%d", &opcao2);
    if(opcao2 == opcao){
        printf("Você não pode escolher o mesmo atributo que foi escolhido anteriormente.Tente novamente!");
    }
    }while(opcao2 == opcao);

double atributo1_carta1 = 0, atributo1_carta2 = 0;
double atributo2_carta1 = 0, atributo2_carta2 = 0;


//Comparação do primiro atributo escolhido;////////////////

switch(opcao){

    case 1:

    atributo1_carta1 = (double) populacao1;
    atributo1_carta2 = (double) populacao2;
    printf("Comparação da População:\n");
    printf("Carta 1 -  %s (%s): %lu habitantes\n", nomedaCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nomedaCidade2, estado2, populacao2);
    if(populacao1 > populacao2){
        printf("Carta 1 venceu!! A cidade com maior população é %s.\n", nomedaCidade1);
    }else if(populacao1 < populacao2){
        printf("Carta 2 venceu!! A cidade com maior população é %s.\n", nomedaCidade2);
    }else{
        printf("Empate! Ambas as cartas têm a quantidade de população. ");
    }
    break;

    case 2: 

    atributo1_carta1 = (double) area1;
    atributo1_carta2 = (double) area2;
    printf("Comparação da Área:\n");
    printf("Carta 1 - %s (%s): %.2f km\n", nomedaCidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km\n", nomedaCidade2, estado2, area2);
    if(area1 > area2){
        printf("Carta 1 venceu!!A cidade com maior área é %s.\n", nomedaCidade1);
    }else if(area1 < area2){
        printf("Carta 2 venceu!!A cidade com maior área é %s\n", nomedaCidade2);
    }else{
        printf("Empate! Ambas têm a mesma área.\n");
    }
    break;


    case 3:

    atributo1_carta1 = (double) PIB1;
    atributo1_carta2 = (double) PIB2;
    printf("Comparação do PIB:\n");
    printf("Carta 1 - %s (%s): %.2f bilhões\n", nomedaCidade1, estado1, PIB1);
    printf("Carta 2 - %s (%s): %.2f bilhões\n", nomedaCidade2, estado2, PIB2);
    if(PIB1 > PIB2){
        printf("Carta 1 venceu!!A cidade com maior PIB é %s.\n", nomedaCidade1);
    }else if(PIB1 < PIB2){
        printf("Carta 2 venceu!!A cidade com maior PIB é %s.\n", nomedaCidade2);
    }else{
        printf("Empate!! Ambas têm o mesmo PIB.\n");
    }
    break;

    case 4:
    atributo1_carta1 = (double) numerosdepontosTuristicos1;
    atributo1_carta2 = (double) numerosdepontosTuristicos2;
    printf("Comparação dos Números de pontos turísticos:\n");
    printf("Carta 1 - %s (%s): %d pontos turísticos\n", nomedaCidade1, estado1, numerosdepontosTuristicos1);
    printf("Carta 2 - %s (%s): %d pontos turísticos\n", nomedaCidade2, estado2, numerosdepontosTuristicos2);
    if(numerosdepontosTuristicos1 > numerosdepontosTuristicos2){
        printf("Carta 1 venceu!!A cidade com maior ponto turísto é %s.\n", nomedaCidade1);
    }else if(numerosdepontosTuristicos1 < numerosdepontosTuristicos2){
        printf("Carta 2 venceu!!A cidade com maior ponto turístico é %s.\n", nomedaCidade2);
    }else{
        printf("Empate!!Ambas as têm a mesma quantidade de pontos turísticos.\n");
    }
    break;

    case 5:
    atributo1_carta1 = (double) densidadePopulacional1;
    atributo1_carta2 = (double) densidadePopulacional2;
    printf("Comparação da Densidade Populacional:\n");
    printf("Carta 1 - %.2f habitantes/km\n", nomedaCidade1, estado1, densidadePopulacional1);
    printf("Carta 2 - %.2f habitantes/km\n", nomedaCidade2, estado2, densidadePopulacional2);
    if(densidadePopulacional1 < densidadePopulacional2){
        printf("Carta 1 venceu!!A cidade com menor densidade populacional é %s.\n");
    }else if(densidadePopulacional1 > densidadePopulacional2){
        printf("Carta 2 venceu!!A cidade com menor densidade populacional é %s.\n");
    }else{
        printf("Empate!! Ambas as cidades têm a mesma densidade populacional.\n");
    }
    break;
    default:
    printf("Opção inválida.!");

}



//Comparação do segundo atributo escolhido;///////////

switch(opcao2){


    case 1: 
    atributo2_carta1 = (double) populacao1;
    atributo2_carta2 = (double) populacao2;
    printf("Comparação da População:\n");
    printf("Carta 1 - %s (%s): %lu habitantes\n", nomedaCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nomedaCidade2, estado2, populacao2);

    if(populacao1 > populacao2){
        printf("Carta 1 venceu!!A cidade com maior população é %s.\n",nomedaCidade1);
    }else if(populacao1 < populacao2){
        printf("Carta 2 venceu!!A cidade com maior população é %s.\n", nomedaCidade2);
    }else{
        printf("Empate!! Ambas as cidades têm a mesma quantidade de população!!");
    }
    break;


    case 2:
    atributo2_carta1 = (double) area1;
    atributo2_carta2 = (double) area2;

    printf("Comparação da Área:\n");
    printf("Carta 1 - %s (%s): %.2f km\n", nomedaCidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km\n", nomedaCidade2, estado2, area2);

    if(area1 > area2){
        printf("Carta 1 venceu!!A cidade com maior área é %s.\n", nomedaCidade1);
    }else if(area1 < area2){
        printf("Carta 2 venceu!!A cidade com maior área é %s.\n", nomedaCidade2);
    }else{
        printf("Empate!!Ambas as cidades têm a mesma área.");
    }
    break;



    case 3:

    atributo2_carta1 = (double) PIB1;
    atributo2_carta2 = (double) PIB2;

    printf("Comparação do PIB:\n");
    printf("Carta 1 - %s (%s): %.2f bilhões\n", nomedaCidade1, estado1, PIB1);
    printf("Carta 2 - %s (%s): %.2f bilhões\n", nomedaCidade2, estado2, PIB2);

    if(PIB1 > PIB2){
        printf("Carta 1 venceu!!A cidade com maior PIB é %s.\n", nomedaCidade1);
    }else if(PIB1 < PIB2){
        printf("Carta 2 venceu!!A cidade com maior PIB é %s.\n", nomedaCidade2);
    }else{
        printf("Empate!!Ambas as cidades têm o mesmo PIB.");
    }
    break;




    case 4:

    atributo2_carta1 = (double) numerosdepontosTuristicos1;
    atributo2_carta2 = (double) numerosdepontosTuristicos2;

    printf("Comparação dos números de pontos turístas");
    printf("Carta 1 - %s (%s): %d pontos turísticos\n", nomedaCidade1,estado1, numerosdepontosTuristicos1);
    printf("Carta 2 - %s (%s): %d pontos turísticos\n", nomedaCidade2, estado2, numerosdepontosTuristicos2);

    if(numerosdepontosTuristicos1 > numerosdepontosTuristicos2){
        printf("Carta 1 venceu!!A cidade com mais pontos turísticos é %s.\n", nomedaCidade1);
    }else if(numerosdepontosTuristicos1 < numerosdepontosTuristicos2){
        printf("Carta 2 venceu!! A cidade com mais pontos turísticos é %s.\n", nomedaCidade2);
    }else{
        printf("Empate!!Ambas as cidades têm a mesma quantidade de pontos turísticos.");
    }
    break;

    case 5:

    atributo2_carta1 = (double) densidadePopulacional1;
    atributo2_carta2 = (double) densidadePopulacional2;
    printf("Comparação da Densidade Populacional");
    printf("Carta 1 - %s (%s): %.2f habitantes/km\n", nomedaCidade1, estado1, densidadePopulacional1);
    printf("Carta 2 - %s (%s): %.2f habitantes/km\n", nomedaCidade2, estado2, densidadePopulacional2);

    if(densidadePopulacional1 < densidadePopulacional2){
        printf("Carta 1 venceu!! A cidade com menor densidade populacional é %s.\n", nomedaCidade1);
    }else if(densidadePopulacional1 > densidadePopulacional2){
        printf("Carta 2 venceu!! A cidade com menor densidade populacional é %s.\n", nomedaCidade2);
    }else{
        printf("Empate!!Ambas as cidades têm a mesma densidade populacional.");
    }
    break;


}

//Soma dos valores dos atributos escolhidos para cada carta;/////

double somaCarta1 = atributo1_carta1 + atributo2_carta1;
double somaCarta2 = atributo1_carta2 + atributo2_carta2;


//////Exibição final;///////////

printf("\n====Resultado Final====\n");

printf("Carta 1 - Cidade: %s (%s)\n", nomedaCidade1, estado1);
printf("Carta 2 - Cidade: %s (%s)\n", nomedaCidade2, estado2);

printf("\nAtributos utilizados:\n");

if(opcao == 1){
    printf("1. População:\n");
    printf("Carta 1: %lu habitantes\n", populacao1);
    printf("Carta 2: %lu habitantes\n", populacao2);
}else if(opcao == 2){
    printf("1. Área:\n");
    printf("Carta 1: %.2fkm\n", area1);
    printf("Carta 2: %.2fkm\n", area2);
}else if(opcao == 3){
    printf("1.PIB:\n");
    printf("Carta 1: %.2f habitantes/km\n", PIB1);
    printf("Carta 2: %.2f habitantes/km\n", PIB2);
}else if (opcao == 4){
    printf("1. Números de pontos turísticos:\n");
    printf("Carta 1: %d pontos\n", numerosdepontosTuristicos1);
    printf("Carta 2: %d pontos\n", numerosdepontosTuristicos2);
}else if(opcao == 5){
    printf("1. Densidade Populacional:\n");
    printf("carta 1: %.2f habitantes/km\n", densidadePopulacional1);
    printf("Carta 2: %.2f habitantes/km\n", densidadePopulacional2);
}


if(opcao2 == 1){
    printf("1. População:\n");
    printf("Carta 1: %lu habitantes\n", populacao1);
    printf("Carta 2: %lu habitantes\n", populacao2);
}else if(opcao2 == 2){
    printf("1. Área:\n");
    printf("Carta 1: %.2fkm\n", area1);
    printf("Carta 2: %.2fkm\n", area2);
}else if(opcao2 == 3){
    printf("1. PIB:\n");
    printf("Carta 1: %.2f habitantes/km\n", PIB1);
    printf("Carta 2: %.2f habitantes/km\n", PIB2);
}else if(opcao2 == 4){
    printf("1. Números de pontos turísticos:\n");
    printf("Carta 1: %d pontos\n", numerosdepontosTuristicos1);
    printf("Carta 2: %d pontos\n", numerosdepontosTuristicos2);
}else if(opcao2 == 5){
    printf("1. Densidade Populacional:\n");
    printf("Carta 1: %.2f habitantes/km\n", densidadePopulacional1);
    printf("Carta 2: %.2f habitantes/km\n", densidadePopulacional2);
}


///Exibição da soma dos atributos para cada carta;///
printf("\nSoma dos valores dos atributos:\n");
printf("Carta 1: %.2f\n", somaCarta1);
printf("Carta 2: %.2f\n", somaCarta2);

//Comparação da soma;/////

if(somaCarta1 > somaCarta2){
    printf("\nResultado final: Carta 1 venceu a rodada\n");   
}else if(somaCarta1 < somaCarta2){
    printf("\nResultado final: Carta 2 venceu a rodada\n");
}else{
    printf("\nResultado final: Empate!!\n");
}


    return 0;
}
