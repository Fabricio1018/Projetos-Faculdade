#include <stdio.h>

int main(){

    // Declarando as Variáveis:

   char estado1[30], estado2[30];
   char codigoCarta1[20], codigoCarta2[20];
   char nomeCidade1[50], nomeCidade2[50];
   int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int pontosTuristicos1, pontosTuristicos2;

    // Coletando as informações das cidades:

    printf("                Cadastro de Cartas do Super Trunfo em C \n");  

    printf("    Insira as informações solicitadas abaixo e tecle 'enter' \n"); // Orienta o usuário sobre o que fazer

        // Carta 1:
        printf("Digite o nome do Estado: \n");
        fgets(estado1,30,stdin);

        printf("Qual o nome da cidade? \n");
        fgets(nomeCidade1,50,stdin);

        printf("Qual o código da carta? \n");
        scanf("%s", codigoCarta1);

        printf("Qual a população da cidade? \n");
        scanf("%d", &populacao1);

        printf("Qual a área da cidade em km²? \n");
        scanf("%f", &area1);

        printf("Qual o PIB da cidade? \n");
        scanf("%f", &pib1);

        printf("Quantos pontos turísticos existem na cidade? \n");
        scanf("%d", &pontosTuristicos1);

        printf("\n");

        printf("            CIDADE CADASTRADA COM SUCESSO! Vamos cadastrar a próxima carta!\n"); // Informa a conclusão do 1º cadastro

        printf("    Insira as informações solicitadas abaixo e tecle 'enter' \n"); // Orienta o usuário sobre o que fazer

        printf("\n");

        // Carta 2:
        printf("Digite o nome do Estado: \n");
        fgets(estado2,30,stdin);

        printf("Qual o nome da cidade? \n");
        fgets(nomeCidade2,50,stdin);

        printf("Qual o código da carta? \n");
        scanf("%s", codigoCarta2);

        printf("Qual a população da cidade? \n");
        scanf("%d", &populacao2);

        printf("Qual a área da cidade em km²? \n");
        scanf("%f", &area2);

        printf("Qual o PIB da cidade? \n");
        scanf("%f", &pib2);

        printf("Quantos pontos turísticos existem na cidade? \n");
        scanf("%d", &pontosTuristicos2);

    printf("                    CIDADE CADASTRADA COM SUCESSO! \n"); // Informa a conclusão do 2º cadastro

    printf("    Confira as informações fornecidas: \n");

    // Mostrar as informações que o usuário forneceu

    printf("CIDADE 1: \n");
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Estado: %s", estado1);
    printf("Cidade: %s", nomeCidade1);
    printf("População: %d pessoas.\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("A cidade tem %d pontos turísticos.\n", pontosTuristicos1);
    printf("A Densidade Populacional da cidade é: %.1f Hab/Km²\n", populacao1/area1);
    printf("O PIB per Capita na cidade é: R$%.2f\n", pib1/populacao1);

    printf("\n");

    printf("CIDADE 2: \n");
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Estado: %s", estado2);
    printf("Cidade: %s", nomeCidade2);
    printf("População: %d pessoas.\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("A cidade tem %d pontos turísticos.\n", pontosTuristicos2);
    printf("A Densidade Populacional da cidade é: %.1f Hab/Km²\n", populacao2/area2);
    printf("O PIB per Capita na cidade é: R$%.2f\n", pib2/populacao2);


    return 0;

}