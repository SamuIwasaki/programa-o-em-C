#include <stdio.h>

int main () {
     /*
     incremento (++)
     Pré-incremento ++a
     Pós-incremento a++
     Decremento (--)
     Pré-Decremento --a
     Pós-Decremento a--
     */

    int numero1 = 1, resultado;

    //numero1 = numero1 + 1
    //numero1 += 1
    printf("Antes incremento: %d \n", numero1);
    numero1++;
    printf("Após incremento: %d\n", numero1);

    //numero1 = numero1 - 1
    //numero1 -= 1
    printf("Antes Decremento: %d\n", numero1);
    numero1--;
    printf("Após Decremento: %d\n", numero1);
    
    resultado = numero1++;
    //Pós-incremento
    printf("Após pós-incremento - numero1: %d - resultado: %d\n", numero1, resultado);
    
    resultado = ++numero1;
    //Pré-incremento
    printf("Após pré -incremento - numero1: %d - resultado: %d\n", numero1, resultado);

    resultado = numero1--;
    //Pós-Decremento
    printf("Após pós -decremento - numero1: %d - resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    //Pré-Decremento
    printf("Após pré -decremento - numero1: %d - resultado: %d\n", numero1, resultado);
}