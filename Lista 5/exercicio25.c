/*Questão 25. Máximo Divisor Comum com Recursão (questão avançada) — Implemente o
algoritmo de Euclides em uma função recursiva int mdc(int a, int b). Na main(), leia dois
inteiros positivos e exiba o MDC. Utilize a função em um procedimento void simplifica(int
num, int den) que imprima a fração simplificada.*/

#include <stdio.h>
#include <windows.h>

void simplifica(int num, int den);
int mdc(int a, int b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numerador, denominador;

    printf("Digite o numerador e o denominador: ");
    scanf("%d %d", &numerador, &denominador);

    if (numerador <= 0 || denominador <= 0) {
        printf("Os valores devem ser positivos.\n");
        return 1;
    }

    printf("MDC: %d\n", mdc(numerador, denominador));

    printf("Fração simplificada: ");
    simplifica(numerador, denominador);

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("%d/%d\n", num / divisor, den / divisor);
}