/*Questão 08. Verificação de Ano Bissexto — Desenvolva um programa em C que solicite ao usuário
um ano (número inteiro positivo) e determine se esse ano é bissexto ou não. Regra: Um ano é bissexto
se for divisível por 400 OU se for divisível por 4 e NÃO for divisível por 100. Exiba uma mensagem
clara no console confirmando o resultado.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
        printf("O ano é bissexto.\n");
    } else {
        printf("O ano não é bissexto.\n");
    }

    return 0;
}