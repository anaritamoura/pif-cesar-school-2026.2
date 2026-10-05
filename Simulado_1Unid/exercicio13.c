/*Questão 13. Cálculo do Fatorial com Tratamento do Zero e Tipo `long long int` — Escreva um
programa em C que solicite um número inteiro N e calcule o seu fatorial (N!). Lembre-se que 0! = 1 e 1!
= 1. O programa deve utilizar a variável do resultado como `long long int` com o especificador `%lld`
para evitar estouro de memória e tratar entradas inválidas (números negativos).*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    long long int resultado = 1;
    int numero, contador;

    do {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
    } while (numero < 0);

    contador = numero;

    while (contador >= 2) {
        resultado *= contador;
        contador -= 1;
    }

    printf("O fatorial de %d é %lld.\n", numero, resultado);

    return 0;
}