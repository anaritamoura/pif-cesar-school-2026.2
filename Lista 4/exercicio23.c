/*Questão 23. Impressão de Data Por Extenso com switch-case — Elabore um programa que solicite
ao usuário uma data no formato numérico de três inteiros: Dia, Mês e Ano (exemplo: 25 12 2026). O
programa deve validar se o mês está no intervalo [1, 12] e utilizar a estrutura switch-case para
converter o número do mês em seu nome por extenso, imprimindo a saída formatada como: '25 de
dezembro de 2026'.*/

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int dia, mes, ano;
    char nome_mes[20];

    printf("Digite a data separada por espaço: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    switch (mes)
    {
        case 1:
            strcpy(nome_mes, "janeiro");
            break;
        case 2:
            strcpy(nome_mes, "fevereiro");
            break;
        case 3:
            strcpy(nome_mes, "março");
            break;
        case 4:
            strcpy(nome_mes, "abril");
            break;
        case 5:
            strcpy(nome_mes, "maio");
            break;
        case 6:
            strcpy(nome_mes, "junho");
            break;
        case 7:
            strcpy(nome_mes, "julho");
            break;
        case 8:
            strcpy(nome_mes, "agosto");
            break;
        case 9:
            strcpy(nome_mes, "setembro");
            break;
        case 10:
            strcpy(nome_mes, "outubro");
            break;
        case 11:
            strcpy(nome_mes, "novembro");
            break;
        case 12:
            strcpy(nome_mes, "dezembro");
            break;
        default:
            printf("Mês inválido.\n");
            return 0;
    }

    printf("%d de %s de %d", dia, nome_mes, ano);

    return 0;

}