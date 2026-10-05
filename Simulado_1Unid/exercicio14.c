/*Questão 14. Autenticação de Senha com Limite Finito de Tentativas — Desenvolva um sistema de
autenticação que defina uma senha numérica secreta (ex: 2026). O programa deve permitir que o
usuário tente digitar a senha no máximo 3 vezes usando um laço `while` ou `for`. Se acertar, exiba
'Acesso Concedido!' e encerre; se errar as 3 vezes, exiba 'Conta Bloqueada por Segurança!'.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i, senha_usuario, senha = 1234, acertou = 0;

    for (i = 1; i <= 3; i++) {
        printf("Digite a senha secreta: ");
        scanf("%d", &senha_usuario);

        if (senha_usuario == senha) {
            printf("Acesso concedido!\n");
            acertou = 1;
            break;
        }
    }
    if (acertou == 0) {
        printf("Conta Bloqueada por Segurança!\n");
    } 
    return 0;
}