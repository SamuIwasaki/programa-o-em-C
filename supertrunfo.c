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
    float superPoder1, superPoder2;
    unsigned resultado1,resultado2, resultado3;

    //superpoder
    superPoder1 = populacao1 + area1 + PIB1 + per1 + densidade1 + quant_pontos1;
    superPoder2 = populacao2 + area2 + PIB2 + per2 + densidade2 + quant_pontos2;

    //execução das cartas
    //carta 1

    printf("Carta 1:\n");
    printf("digite o estado 1: \n");
    scanf(" %c", &estado1);

    printf("codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Cidade 1:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

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
    printf("Carta 2: \n");
    printf("digite o estado : \n");
    scanf(" %c", &estado2);

    printf("codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Cidade :\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

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

    //comparação 
    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = PIB1 > PIB2;    

    //Cálculo da densidade e PIB per capita
    densidade1 = (float) (populacao1 / area1);
    per1 = (float) (PIB1 / populacao1);
    
    //execução da carta1
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de pontos túristicos: %d\n", quant_pontos1);
    printf("densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", per1);

    //Cálculo da densidade e PIB per capita
    densidade2 = (float)(populacao2 / area2);
    per2 = (float)(PIB2 / populacao2);

    //execução da carta2
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos túristicos: %d\n", quant_pontos2);
    printf("densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", per2);

    //execução do resultado
    printf("a população 1 é maior do que a população 2?: %u\n", resultado1);
    printf("a área 1 é maior do que a área 2?: %u\n", resultado2);
    printf("O PIB 1 é maior do que o PIB 2?: %u\n", resultado3);    
    return 0;

}