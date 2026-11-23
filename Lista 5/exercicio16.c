/*Questão 16. Ano Bissexto — Crie a função int ehBissexto(int ano), que retorne 1 se o ano for
bissexto e 0 caso contrário (divisível por 400, ou divisível por 4 e não por 100). Na main(), leia
um ano e exiba uma mensagem clara com o resultado.*/


#include <stdio.h>
#include <windows.h>

int ehBissexto(int ano);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano) == 1) {
        printf("O ano é bissexto.\n");
    } else {
        printf("O ano não é bissexto.\n");
    }

    return 0;
}

int ehBissexto(int ano) {
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    } else {
        return 0;
    }
}