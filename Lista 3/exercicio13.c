/*Questão 13. Cálculo de Fatorial com Tratamento de Casos Especiais — Escreva um programa que
leia um número inteiro N e calcule o seu fatorial (N!). Lembre-se de que 0! = 1 e 1! = 1. O programa
deve utilizar o tipo de dado 'long long int' para evitar estouro de memória prematuro e deve exibir uma
mensagem de erro caso o usuário forneça um número negativo.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero, contador;
    long long int fatorial = 1;

    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Número inválido! Digite um numero positivo.\n");
        }
    } while (numero < 0);

    contador = numero;

    while (contador >= 2) {
        fatorial *= contador;
        contador -= 1;
    }    

    printf("O fatorial de %d é %lld.\n", numero, fatorial);

    return 0;
}