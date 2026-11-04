/*Questão 28. Sistema de Atendimento Automático Bancário (SAC) — Crie um programa em C que
simule a URA (Unidade de Resposta Audível) de um banco. O programa apresenta o menu:
1 - Consultar Saldo
2 - Efetuar Extrato
3 - Fazer Transferência
4 - Falar com Atendente
O programa lê a opção digitada e, utilizando a estrutura switch-case, exibe a mensagem de
direcionamento correspondente para cada opção. Trate opções inválidas com default.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;

    printf("Digite a opção desejada:\n1 - Consultar Saldo\n2 - Efetuar Extrato\n3 - Fazer Transferência\n4 - Falar com Atendente \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Você será direcionado para a consulta de saldo.\n");
            break;
        case 2:
            printf("Você será direcionado para a emissão do extrato.\n");
            break;
        case 3:
            printf("Você será direcionado para a área de transferências.\n");
            break;
        case 4:
            printf("Você será direcionado para um atendente. Aguarde.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
    
}