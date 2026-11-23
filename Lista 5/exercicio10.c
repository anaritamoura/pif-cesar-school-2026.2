/*Questão 10. Área da Esfera com #define — Escreva um programa que leia o raio de uma
esfera e calcule sua área por meio de uma função float area(float r), usando a fórmula 4 * PI *
r * r. Defina PI com a diretiva #define e declare o protótipo da função antes da main().*/


#include <stdio.h>
#include <windows.h>

#define PI 3.14

float area(float raio);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("A área da esfera é %.2f.\n", area(raio));

    return 0;
}

float area(float raio) {
    float area = 4 * PI * raio * raio;
    return area;
}