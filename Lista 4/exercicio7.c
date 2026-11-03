/*Questão 07. Raiz Quadrada ou Quadrado de um Número Real — Escreva um programa em C que
leia um número real. Se o número for positivo ou igual a zero, calcule e imprima a sua raiz quadrada
(utilizando a função sqrt() da biblioteca <math.h>). Caso o número seja negativo, imprima o quadrado
desse número (x2).*/

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float numero;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    if (numero >= 0.0) {
        printf("%.2f", sqrt(numero));
    } else {
        printf("%.2f", numero * numero);
    }

    return 0;

}