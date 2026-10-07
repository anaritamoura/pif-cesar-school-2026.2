/*Questão 24. Padrão Visual em X (Diagonais Cruzadas) — Crie um programa em C que solicite uma
dimensão ímpar N (entre 3 e 19). O programa deve utilizar laços aninhados e condicionais lógicas para
desenhar um padrão visual de duas diagonais que se cruzam no centro forming um 'X' com o caractere
'*'. Por exemplo, para N = 5:
*   *
 * *
  *
 * *
*   **/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int dimensao, i, j;

    do {
        printf("Digite um valor ímpar entre 3 e 19: ");
        scanf("%d", &dimensao);

        if (dimensao % 2 == 0 || dimensao < 3 || dimensao > 19) {
            printf("Número inválido.\n");
        }
    } while (dimensao < 3 || dimensao > 19 || dimensao % 2 == 0);

    for (i = 1; i <= dimensao; i++) {
        for (j = 1; j <= dimensao; j++) {
            if (i == j || i + j == dimensao + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}