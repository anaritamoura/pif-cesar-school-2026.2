/*Questão 23. Desenho de Moldura e Quadrado Vazado com Caracteres — Desenvolva um
programa que solicite ao usuário a dimensão do lado de um quadrado L (com L entre 3 e 20). O
programa deve utilizar laços aninhados para desenhar no console um quadrado vazado composto pelo
caractere 'X'. Por exemplo, para L = 5, a saída deve ser:
XXXXX
X X
X X
X X
XXXXX*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int lados, i, j;

    do {
        printf("Digite um número entre 3 e 20: ");
        scanf("%d", &lados);

        if (lados < 3 || lados > 20) {
            printf("Número inválido.\n");
        }
    } while (lados < 3 || lados > 20);

    for (i = 1; i <= lados; i++) {
        for (j = 1; j <= lados; j++) {
            if (i == 1 || i == lados || j == 1 || j == lados) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}