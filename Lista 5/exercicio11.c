/*Questão 11. Verificação de Número Par — Desenvolva uma função int ehPar(int n) que
retorne 1 se o número for par e 0 caso contrário. Na main(), leia um inteiro e imprima uma
mensagem clara informando se ele é par ou ímpar.*/

#include <stdio.h>
#include <windows.h>

int ehPar(int numero);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero_teste;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero_teste);

    if (ehPar(numero_teste) == 1) {
        printf("%d é par.\n", numero_teste);
    } else {
        printf("%d é ímpar.\n", numero_teste);
    }

    return 0;
}

int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}