/*Questão 16. Autenticação de Senha com Limite Finito de Tentativas — Desenvolva um sistema de
autenticação que defina uma senha numérica secreta (ex: 2026). O programa deve permitir que o
usuário tente digitar a senha no máximo 3 vezes. Se o usuário acertar a senha, o programa deve
imprimir 'Acesso Concedido!' e o número de tentativas utilizadas, encerrando a execução. Se errar as 3
tentativas, o programa deve exibir 'Conta Bloqueada por Segurança!'.*/


#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int senha = 1234, senha_usuario, i;

    for (i = 1; i <= 3; i++) {
        printf("Digite uma senha numérica: ");
        scanf("%d", &senha_usuario);
        if (senha_usuario == senha) {
            printf("Acesso Concedido!\n");
            printf("Você acessou o sistema em %d tentativas.\n", i);
            break;
        } else {
            if (i < 3) {
                printf("Senha inválida! Você tem %d tentativas.\n", 3 - i);
            } else {
                printf("Senha inválida.\n");
            }
        }
    }
    
    if (i == 4) {
        printf("Conta Bloqueada por Segurança!");
    }

    return 0;
}