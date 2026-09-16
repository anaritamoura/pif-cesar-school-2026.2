/*Questão 09. Operações Aritméticas Básicas e Cast de Tipos — Escreva um programa em C que
solicite e leia dois números inteiros do usuário. O programa deve calcular e exibir os resultados
das quatro operações aritméticas básicas (soma, subtração, multiplicação e divisão real). Certifique-
se de que o resultado da divisão seja exibido com duas casas decimais e trate de forma explícita a
divisão real sem perdas de precisão (divisão inteira). Adicione um comentário informando como
evitaria matematicamente a divisão por zero neste capítulo.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero1, numero2;

    printf("Digite dois números: ");
    scanf("%d %d", &numero1, &numero2);

    printf("A soma de %d e %d é %d.\n", numero1, numero2, numero1 + numero2);
    printf("A diferença entre %d e %d é %d.\n", numero1, numero2, numero1 - numero2);
    printf("A multiplicação entre %d e %d é %d.\n", numero1, numero2, numero1 * numero2);
    printf("A divisão entre %d e %d é %.2f.\n", numero1, numero2, (float) (numero1 / numero2));

    // Para evitar a divisão por zero, a variável numero2 precisa ser diferente de zero.

    return 0;
}