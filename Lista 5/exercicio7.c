/*Questão 07. Soma de Dois Inteiros — Escreva um programa em C que leia dois números
inteiros e utilize uma função int soma(int a, int b) para calcular e retornar a soma. O resultado
deve ser impresso na main(). Declare o protótipo antes da main().*/

#include <stdio.h>
#include <windows.h>

int soma(int, int);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero_a, numero_b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &numero_a, &numero_b);

    printf("A soma de %d e %d é %d.\n", numero_a, numero_b, soma(numero_a, numero_b));

    return 0;
}

int soma(int a, int b) {
    return (a + b);
}