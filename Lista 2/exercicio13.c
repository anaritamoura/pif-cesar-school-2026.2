/*Questão 13. Cálculo de Áreas de Figuras Planas Básicas — Crie um programa unificado em C
que ofereça suporte ao cálculo de três geometrias fundamentais. O usuário deve fornecer os dados
necessários e o programa exibirá: a) A área de um quadrado de lado L; b) A área de um retângulo
de base B e altura H; c) A área de um triângulo retângulo de base B e altura H. Todos os valores
de entrada e saída devem ser numéricos de ponto flutuante.*/


#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float lado, base, altura, base_ret, alt_ret;

    printf("Digite a medida do lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite as medidas da base e da altura de um triângulo: ");
    scanf("%f %f", &base, &altura);

    printf("Digite as medidas da base e da altura de um triângulo retângulo: ");
    scanf("%f %f", &base_ret, &alt_ret);

    printf("A área do quadrado de lado %.2f é %.2f.\n", lado, lado * lado);
    printf("A área do retângulo de base %.2f e altura %.2f é %.2f.\n", base, altura, (base * altura) / 2);
    printf("A área do triângulo retângulo de base %.2f e altura %.2f é %.2f.\n", base_ret, alt_ret, (base_ret * alt_ret) / 2);

    return 0;
}