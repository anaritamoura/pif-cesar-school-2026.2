/*Questão 24. Classificação de Triângulos quanto aos Ângulos Internos — Faça um programa que
leia três valores inteiros representando os ângulos internos de um triângulo. Valide se a soma dos
ângulos é exatamente igual a 180°. Se for um triângulo válido, classifique-o em:
• Retângulo: possui um ângulo igual a 90°;
• Obtusângulo: possui um ângulo maior que 90°;
• Acutângulo: possui todos os três ângulos menores que 90°.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int angulo_a, angulo_b, angulo_c;

    printf("Digite os valores dos ângulos separados por espaço: ");
    scanf("%d %d %d", &angulo_a, &angulo_b, &angulo_c);

    if (angulo_a + angulo_b + angulo_c == 180 && angulo_a > 0 && angulo_b > 0 && angulo_c > 0) {
        if (angulo_a == 90 || angulo_b == 90 || angulo_c == 90) {
            printf("Triângulo Retângulo\n");
        } else if (angulo_a > 90 || angulo_b > 90 || angulo_c > 90) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Ângulos inválidos para um triângulo.\n");
    }

    return 0;

}