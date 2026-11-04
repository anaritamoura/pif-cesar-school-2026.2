/*Questão 26. Quantidade de Dias de um Mês e Validação de Fevereiro Bissexto — Desenvolva um
programa que solicite o número de um mês (1 a 12) e o ano corrente. O programa deve informar o
nome do mês e quantos dias ele possui. Para o mês de fevereiro (mês 2), o programa deve checar se o
ano informado é bissexto para imprimir '29 dias' ou '28 dias'.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int mes, ano;

    printf("Digite o número do mês e o ano separados por espaço: ");
    scanf("%d %d", &mes, &ano);

    switch (mes)
    {
        case 1:
            printf("Janeiro - 31 dias\n");
            break;
        case 2:
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                printf("Fevereiro - 29 dias\n");
            } else {
                printf("Fevereiro - 28 dias\n");
            }
            break;
        case 3:
            printf("Março - 31 dias\n");
            break;
        case 4:
            printf("Abril - 30 dias\n");
            break;
        case 5:
            printf("Maio - 31 dias\n");
            break;
        case 6:
            printf("Junho - 30 dias\n");
            break;
        case 7:
            printf("Julho - 31 dias\n");
            break;
        case 8:
            printf("Agosto - 31 dias\n");
            break;
        case 9:
            printf("Setembro - 30 dias\n");
            break;
        case 10:
            printf("Outubro - 31 dias\n");
            break;
        case 11:
            printf("Novembro - 30 dias\n");
            break;
        case 12:
            printf("Dezembro - 31 dias\n");
            break;
        default:
            printf("Mês inválido.\n");
    }

    return 0;

}