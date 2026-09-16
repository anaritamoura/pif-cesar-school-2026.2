/*Questão 14. Fórmula de Heron para Triângulos Quaisquer — Escreva um programa em C que
calcule a área de um triângulo qualquer a partir do tamanho de seus três lados (a, b e c)
informados pelo usuário. Utilize a Fórmula de Heron: Area = sqrt(p * (p - a) * (p - b) * (p - c)), onde
p é o semi-perímetro dado por (a + b + c) / 2.0. Nota: para esta questão, inclua a biblioteca
matemática <math.h> e lembre-se de vincular a biblioteca na compilação do GCC (-lm).*/



#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float ladoa, ladob, ladoc, semip;

    printf("Digite o comprimento dos três lados do triângulo: ");
    scanf("%f %f %f", &ladoa, &ladob, &ladoc);

    semip = (ladoa + ladob + ladoc) / 2.0;

    printf("A área do triângulo é %.2f.\n", sqrt(semip * (semip - ladoa) * (semip - ladob) * (semip - ladoc)));

    return 0;
}