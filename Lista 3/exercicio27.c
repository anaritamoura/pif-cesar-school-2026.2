/*Questão 27. Simulador de Caixa Eletrônico (Decomposição de Cédulas) — Escreva um programa
que simule o saque de um caixa eletrônico. O usuário informa o valor do saque em reais (número
inteiro positivo). O programa deve calcular e exibir a menor quantidade de cédulas de R$ 100, R$ 50,
R$ 20, R$ 10, R$ 5 e R$ 2 necessárias para compor o valor. Utilize laços de repetição para efetuar as
subtrações sucessivas.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int valor_saque, nota_100 = 0, nota_50 = 0, nota_20 = 0, nota_10 = 0, nota_5 = 0, nota_2 = 0;

    do {
        printf("Digite o valor que quer sacar: ");
        scanf("%d", &valor_saque);

        if (valor_saque <= 0) {
            printf("Valor inválido.\n");
        }
    } while (valor_saque <= 0);

    while (valor_saque >= 100) {
        valor_saque -= 100;
        nota_100 += 1;
    }

    while (valor_saque >= 50) {
        valor_saque -= 50;
        nota_50 += 1;
    }

    while (valor_saque >= 20) {
        valor_saque -= 20;
        nota_20 += 1;
    }

    while (valor_saque >= 10) {
        valor_saque -= 10;
        nota_10 += 1;
    }

    while (valor_saque >= 5) {
        valor_saque -= 5;
        nota_5 += 1;
    }

    while (valor_saque >= 2) {
        valor_saque -= 2;
        nota_2 += 1;
    }

    printf("Você precisará de:\n-%d notas de R$100,00;\n-%d notas de R$ 50,00;\n-%d notas de R$ 20,00;\n-%d notas de R$ 10,00;\n-%d notas de R$ 5,00;\n-%d notas de R$ 2,00.\n", nota_100, nota_50, nota_20, nota_10, nota_5, nota_2);

    return 0;
}