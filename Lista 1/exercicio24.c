/* Questão 24. Desenvolva um programa em C que organize dados de notas escolares em uma tabela
no console. Seu programa deve usar especificadores de formato e largura de campos para que as
colunas fiquem perfeitamente alinhadas, gerando a saída mostrada abaixo:

ALUNO(A) NOTA
========= =====
ALINE 9.0
MÁRIO DEZ
SÉRGIO 4.5
SHIRLEY 7.0 */


#include <stdio.h>

int main(){
    printf("%-9s%5s\n", "ALUNO(A)", "NOTA");
    printf("%-9s %5s\n", "=========", "=====");
    printf("%-9s%5s\n", "ALINE", "9.0");
    printf("%-9s%6s\n", "MÁRIO", "DEZ");
    printf("%-9s%6s\n", "SÉRGIO", "4.5");
    printf("%-9s%5s\n", "SHIRLEY", "7.0");

    return 0;
}