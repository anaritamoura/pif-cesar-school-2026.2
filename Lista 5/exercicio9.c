/*Questão 09. Maior de Dois Números — Crie uma função int maior(int a, int b) que retorne o
maior entre dois inteiros. Na main(), leia os valores e exiba o resultado.*/

#include <stdio.h>
#include <windows.h>

int maior(int, int);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero_a, numero_b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &numero_a, &numero_b);

    printf("O número %d é o maior.\n", maior(numero_a, numero_b));

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}