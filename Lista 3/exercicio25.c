/*Questão 25. Análise e Teste de Primalidade de um Número Inteiro — Escreva um programa em C
que receba um número inteiro positivo N e determine se N é um número primo. Um número é primo se
for maior que 1 e divisível apenas por 1 e por ele mesmo. O programa deve contar a quantidade de
divisores encontrados no laço e exibir uma mensagem conclusiva.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero, i, contador = 1;

    do {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Número inválido.\n");
        }
    } while (numero <= 0);

    for (i = 1; i <= numero; i++) {
        if (numero % contador == 0) {
            contador++;
        }
    }

    if (contador > 2) {
        printf("%d não é primo, pois possui %d divisores.\n", numero, contador);
    } else {
        printf("%d é primo.\n", numero);
    }

    return 0;
}