/*Questão 08. Potências e Divisão com Ponto Flutuante — Desenvolva um programa em C que
leia do teclado um número inteiro fornecido pelo usuário. O programa deve calcular e exibir: a) O
seu quadrado (valor inteiro); b) A sua décima parte (valor real, com precisão de duas casas
decimais). Garanta que o cálculo da décima parte não sofra de truncamento de divisão inteira.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    printf("O quadrado de %d é %d e sua décima parte é %.2f.\n", numero, numero * numero, numero / 10.0);

    return 0;
}