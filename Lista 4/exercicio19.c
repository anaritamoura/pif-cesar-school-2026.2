/*Questão 19. Validação de Condição de Existência e Tipo de Triângulo — Crie um programa em C
que leia três valores reais A, B e C representando os lados de um triângulo. O programa deve
primeiramente verificar a condição de existência: cada lado deve ser menor que a soma dos outros dois
(A < B + C e B < A + C e C < A + B). Caso seja um triângulo válido, classifique-o em:

• Equilátero: todos os três lados iguais;
• Isósceles: quaisquer dois lados iguais;
• Escaleno: todos os três lados diferentes.
Se os lados não formarem um triângulo, exiba 'Erro: Os lados fornecidos não formam um triângulo!'.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float lado_a, lado_b, lado_c;

    printf("Digite os valores dos lados do triângulo separados por espaço: ");
    scanf("%f %f %f", &lado_a, &lado_b, &lado_c);

    if (lado_a < (lado_b + lado_c) && lado_b < (lado_a + lado_c) && lado_c < (lado_a + lado_b) && lado_a > 0 && lado_b > 0 && lado_c > 0) {
        if (lado_a == lado_b && lado_a == lado_c) {
            printf("Triângulo Equilátero.\n");
        } else if (lado_a == lado_b || lado_b == lado_c || lado_a == lado_c) {
            printf("Triângulo Isósceles.\n");
        } else {
            printf("Triângulo Escaleno.\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }

    return 0;

}