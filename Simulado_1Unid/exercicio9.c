/*Questão 9. Geometria do Triângulo e Fórmula de Heron — Escreva um programa em C que leia os
comprimentos dos três lados (a, b, c) de um triângulo qualquer. Sabendo que o semiperímetro p é dado
por (a + b + c) / 2.0, calcule a área do triângulo utilizando a **Fórmula de Heron**: Area = sqrt(p * (p -
a) * (p - b) * (p - c)). Utilize a função sqrt() da biblioteca `<math.h>`.*/



#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float ladoa, ladob, ladoc, semiperimetro;

    printf("Digite os valores dos lados do triângulo: ");
    scanf("%f %f %f", &ladoa, &ladob, &ladoc);

    semiperimetro = (ladoa + ladob + ladoc) / 2.0;
    printf("A área do triângulo é %.2f.\n", sqrt(semiperimetro * (semiperimetro - ladoa) * (semiperimetro - ladob) * (semiperimetro - ladoc)));
    return 0;
}