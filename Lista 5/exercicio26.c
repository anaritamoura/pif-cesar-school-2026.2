/*Questão 26. Sequência de Fibonacci Recursiva (questão avançada) — Desenvolva uma
função recursiva long fibonacci(int n) que retorne o n-ésimo termo da sequência (fibonacci(0)
= 0 e fibonacci(1) = 1). Na main(), leia a quantidade de termos e imprima a sequência
chamando a função em um laço. Comente por que a versão recursiva se torna lenta para
valores grandes de n.*/

#include <stdio.h>
#include <windows.h>

long fibonacci(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int quantidade, i;

    printf("Digite a quantidade de termos desejada da sequência de fibonacci: ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("%ld\n", fibonacci(i));
    }

    return 0;
}

//A execução fica lenta porque a função recalcula os mesmos termos várias vezes, criando um grande número de chamadas.
long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}