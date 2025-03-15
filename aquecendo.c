#include <stdio.h>

int main(){
    char produtoa [30] = "Produto A";
    char produtob [30] = "Produto B";

    unsigned int estoquea = 1000;
    unsigned int estoqueb = 2000;

    float valora = 10.50;
    float valorb = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalb;

    int resultadoA, resultadoB;

    printf("produto %s tem estoque %u e o valor unitário é: R$ %.2f\n", produtoa, estoquea, valora);
    printf("produto %s tem estoque %u e o valor unitário é: R$ %.2f\n", produtob, estoqueb, valorb);

    resultadoA = estoquea > estoqueMinimoA;
    resultadoB = estoqueb > estoqueMinimoB;

    printf ("O Produto %s tem estoque mínimo %d\n", produtoa, resultadoA);
    printf ("O Produto %s tem estoque mínimo %d\n", produtob, resultadoB);

    printf ("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d",estoquea * valora,estoqueb * valorb, (estoquea * valora) > (estoqueb * valorb));

    return 0;
}
