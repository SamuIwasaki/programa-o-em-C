 #include <stdio.h>

 int main() {
    float nota1, nota2, nota3;
    float media;

    printf("***programa de calculo de media***\n");

    printf("digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (float)(nota1 + nota2 + nota3)/3;

    printf("A média é de: %.1f\n", media);
    return 0;
 }