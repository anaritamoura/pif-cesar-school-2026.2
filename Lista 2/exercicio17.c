/*Questão 17. Geometria do Círculo com Constantes — Escreva um programa em C que leia do
console o valor do raio de um círculo (ponto flutuante). O programa deve calcular e exibir o valor
de sua Área (A = Pi * R^2) e de sua Circunferência (C = 2 * Pi * R). Defina o valor de Pi como a
constante 3.141593.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const float pi = 3.141593;
    float raio;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    printf("O valor da área do círculo é %.2f.\n", pi * (raio * raio));
    printf("A circunferência do círculo mede %.2f.\n", pi * raio * 2);

    return 0;
}