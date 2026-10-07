/*Questão 20. Tabela de Caracteres ASCII e Códigos Hexadecimais — Escreva um programa que
utilize um laço for para imprimir a tabela de caracteres da tabela ASCII para os códigos decimais
compreendidos entre 32 e 126 (caracteres imprimíveis). Para cada código, imprima o valor em decimal,
o valor equivalente em hexadecimal (usando o formatador %X) e o próprio caractere visível.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int i;

    for (i = 32; i <= 126; i++) {
        printf("%d\t%x\t%c\t\n", i, i, i);
    }

    return 0;
}