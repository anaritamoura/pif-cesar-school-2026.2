/*Questão 11. Intervalo Numérico Dinâmico (Crescente e Decrescente) — Escreva um programa que
leia dois números inteiros quaisquer, A e B, fornecidos pelo usuário. O programa deve imprimir todos
os números inteiros situados no intervalo fechado entre A e B. Se A for menor ou igual a B, a
impressão deve ser em ordem crescente; caso A seja maior que B, a impressão deve ser em ordem
decrescente.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeroa, numerob;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &numeroa, &numerob);
    
    if (numeroa <= numerob) {
        for ( ; numeroa <= numerob; numeroa++) {
            printf("%d\n", numeroa);
        }
    } else {
        for ( ; numeroa >= numerob; numeroa-- ) {
            printf("%d\n", numeroa);
        }
    }

    return 0;    
}