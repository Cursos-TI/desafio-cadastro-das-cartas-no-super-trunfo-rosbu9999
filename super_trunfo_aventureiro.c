#include <stdio.h>
int main(){

    char estado[20];
    char codigo[20];
    char cidade[30];
    unsigned int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float pib2;
    float densidade;

    printf("carta 01\n");

    printf("digite o nome do estado: ");
    scanf("%s", &estado);
    printf("digite o codigo da carta: ");
    scanf("%s", &codigo);
    printf("digite o nome da cidade: ");
    scanf("%s", &cidade);
    printf("digite o numero de habitantes: ");
    scanf("%d", &populacao);
    printf("digite a área da cidade: ");
    scanf("%f", &area);
    printf("digite o pib da cidade: ");
    scanf("%f", &pib);
    printf("digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    pib2 = (float)pib / populacao;
    densidade = (float)populacao / area;

    printf("carta: 01\n");
    printf("estado: %s\n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f \n", area);
    printf("Pib: %.2f \n", pib);
    printf("Pontos Turisticos: %d \n", pontosturisticos);
    printf("PIB per capita: %.2f reais\n", pib2);
    printf("Densidade populacional: %f hab/km²\n", densidade);

    printf("carta 02\n");

    printf("digite o nome do estado: ");
    scanf("%s", &estado);
    printf("digite o codigo da carta: ");
    scanf("%s", &codigo);
    printf("digite o nome da cidade: ");
    scanf("%s", &cidade);
    printf("digite o numero de habitantes: ");
    scanf("%d", &populacao);
    printf("digite a área da cidade: ");
    scanf("%f", &area);
    printf("digite o pib da cidade: ");
    scanf("%f", &pib);
    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontosturisticos);

    pib2 = (float)pib / populacao;
    densidade = (float)populacao / area;

    printf("carta 02\n");

    printf("estado: %s\n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f \n", area);
    printf("Pib: %.2f \n", pib);
    printf("Pontos Turisticos: %d \n", pontosturisticos);
    printf("PIB per capita: %.2f reais\n", pib2);
    printf("Densidade populacional: %f hab/km²\n", densidade);

    return 0;


}