/*Questão 20. Número Primo — Crie uma função int ehPrimo(int n) que retorne 1 se n for primo
e 0 caso contrário, usando um laço de repetição. Na main(), leia um inteiro e informe o
resultado. Em seguida, use a função dentro de um laço for para imprimir todos os números
primos de 1 até 50.*/

#include <stdio.h>
#include <windows.h>

int ehPrimo(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero) == 1) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    for (i = 0; i <= 50; i++) {
        if (ehPrimo(i) == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int ehPrimo(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        } 
    }
    return 1;
}