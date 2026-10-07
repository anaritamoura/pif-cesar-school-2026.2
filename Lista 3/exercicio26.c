/*Questão 26. Mapeamento e Soma de Primos em um Intervalo Fechado [A, B] — Desenvolva um
programa que solicite ao usuário dois números inteiros positivos A e B (garantindo A < B). O programa
deve encontrar e listar todos os números primos situados no intervalo fechado [A, B], e ao final exibir a
soma total de todos os primos encontrados nesse intervalo.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeroa, numerob, soma = 0, i, j, contador;

    do {
        printf("Digite dois números inteiros: ");
        scanf("%d %d", &numeroa, &numerob);

        if (numeroa > numerob || numeroa <= 0 || numerob <= 0) {
            printf("Números inválidos.\n");
        }
    } while (numeroa > numerob || numeroa <= 0 || numerob <= 0);

    for (i = numeroa; i <= numerob; i++) {
        contador = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                contador++;
            }
        }
        if (contador == 2) {
            printf("%d\n", i);
            soma += i;
        }
    }

    printf("A soma total de todos os primos entre %d e %d é %d.\n", numeroa, numerob, soma);

    return 0;
}