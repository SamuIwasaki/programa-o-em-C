#include <stdio.h>

//criando as cartas 

int main (){
    //variavéis para as cartas do jogo

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[12], cidade2[12];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int quant_pontos1, quant_pontos2;
    float densidade1, densidade2;
    float per1, per2;

    //execução das cartas
    //carta 1

    printf("Carta 1:\n");
    printf("digite o estado 1: \n");
    scanf("%c", &estado1);

    printf("codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Cidade:\n");
    scanf("%s", cidade1);

    printf("Populção: \n");
    scanf("%d", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Números de Pontos túristicos: \n");
    scanf("%d", &quant_pontos1);

    printf("densidade Populacional: \n");
    scanf("%f", &densidade1);

    printf("PIB per capita: \n");
    scanf("%f", &per1);

    //carta 2
    printf("Carta 2:\n");
    printf("digite o estado : \n");
    scanf("%c", &estado2);

    printf("codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Cidade:\n");
    scanf("%s", cidade2);

    printf("Populção: \n");
    scanf("%d", &populacao2);

    printf("Área:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &PIB2);

    printf("Números de Pontos túristicos: \n");
    scanf("%d", &quant_pontos2);

    printf("densidade Populacional: \n");
    scanf("%f", &densidade2);

    printf("PIB per capita: \n");
    scanf("%f", &per2);

    //execução da carta1
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Número de pontos túristicos: %d\n", quant_pontos1);

    //execução da carta2
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de pontos túristicos: %d\n", quant_pontos2);
    return 0;

}