/*Questão 17. Fatorial Iterativo e Recursivo — Escreva duas funções: long fatorialIterativo(int
n), usando laço de repetição, e long fatorialRecursivo(int n), usando recursão. Na main(), leia
um inteiro não negativo, imprima o resultado das duas versões e confirme se coincidem.*/

#include <stdio.h>
#include <windows.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("O fatorial de %d é %ld de acordo com fatorialIterativo.\n", numero, fatorialIterativo(numero));
    printf("O fatorial de %d é %ld de acordo com fatorialRecursivo.\n", numero, fatorialRecursivo(numero));

    if (fatorialIterativo(numero) == fatorialRecursivo(numero)) {
        printf("Resultados coincidem.\n");
    } else {
        printf("Os resultados não coincidem.\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    int i;
    long contador = 1;
    for (i = 1; i <= n; i++) {
        contador *= i;
    }
    return contador;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    } else {
        long resultado = n * fatorialRecursivo(n - 1);
        return resultado;
    }
}