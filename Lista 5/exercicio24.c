/*Questão 24. Compilação Condicional para Depuração — Escreva um programa com uma
função int somaAteN(int n) que some os inteiros de 1 até n com um laço. Use #ifdef DEBUG
para imprimir, dentro do laço, o valor parcial da soma a cada iteração. Compile duas vezes,
com e sem #define DEBUG, e documente em comentários a diferença de comportamento.*/

#include <stdio.h>
#include <windows.h>

//Com DEBUG ativo, a cada iteração o programa mostra a soma parcial. Sem o DEBUG, o programa mostra apenas o resultado final da soma.
#define DEBUG

int somaAteN(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite um valor positivo: ");
    scanf("%d", &numero);

    printf("A soma é %d.\n", somaAteN(numero));

    return 0;
}

int somaAteN(int n) {
    int soma = 0, i;
    for (i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
            printf("Soma parcial: %d.\n", soma);
        #endif
    }
    return soma;
}