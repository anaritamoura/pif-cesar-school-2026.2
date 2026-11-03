/*Questão 10. Análise de Paridade e Sinal de Inteiros — Faça um programa em C que receba um
número inteiro do usuário e determine simultaneamente:

a) Se o número é PAR ou ÍMPAR (utilizando o operador resto da divisão %).
b) Se o número é POSITIVO, NEGATIVO ou ZERO.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Este número é par.\n");
    } else {
        printf("Este número é ímpar.\n");
    }

    if (numero > 0) {
        printf("Este número é positivo.\n");
    } else if (numero < 0) {
        printf("Este número é negativo.\n");
    } else {
        printf("O número é 0.\n");
    }

    return 0;

}