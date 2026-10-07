/*Questão 10. Geração de Múltiplos com Formatação em Colunas — Desenvolva um programa que
determine e exiba no console os 100 primeiros múltiplos inteiros e positivos de 3 (isto é: 3, 6, 9, 12,
...). A saída deve ser formatada organizadamente em colunas contendo 10 números por linha separados
por tabulação (\t).*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int multiplo = 3, i;

    for (i = 1; i <= 100; i++) {
        printf("%d", multiplo);
        multiplo += 3;
        if (i % 10 == 0) {
            printf("\n");
        } else {
            printf("\t");
        }
    }
    
    return 0;
}