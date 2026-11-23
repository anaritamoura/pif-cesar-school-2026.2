/*Questão 12. Procedimento de Menu — Crie um procedimento void exibeMenu(void) que
imprima um menu com as opções 1 - Cadastrar, 2 - Listar, 3 - Remover e 0 - Sair. Na main(),
chame o procedimento, leia a opção do usuário e exiba uma mensagem correspondente com
switch-case.*/

#include <stdio.h>
#include <windows.h>

void exibeMenu(void);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;

    exibeMenu();
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Você escolheu cadastrar.\n");
            break;
        case 2:
            printf("Você escolheu listar.\n");
            break;
        case 3:
            printf("Você escolheu remover.\n");
            break;
        case 0:
            printf("Você resolveu sair.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

void exibeMenu(void) {
    printf("1 - Cadastrar\n2 - Listar\n3 - Remover\n0 - Sair\n");
}