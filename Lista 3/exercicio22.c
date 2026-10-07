/*Questão 22. Geração do Triângulo de Floyd com Laços Aninhados — Escreva um programa em C
que leia um número inteiro positivo N e imprima N linhas do Triângulo de Floyd. Por exemplo, se N =
5, a saída na tela deve ser exatamente:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero, i, j, contador = 1;

    do {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Número inválido.\n");
        }    
    } while (numero <= 0);

    for (i = 1; i <= numero; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d\t", contador);
            contador++;
        }
        printf("\n");
    }

    return 0;
}