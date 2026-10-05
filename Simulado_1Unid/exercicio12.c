/*Questão 12. Validação de Entrada de Dados com Laço Garantido (`do-while`) — Escreva um
programa em C que solicite ao usuário uma nota válida no intervalo fechado de 0.0 a 10.0. Caso o
usuário digite um valor inválido (como -2.5 ou 11.0), o programa deve exibir uma mensagem de erro e
repetir a solicitação utilizando a estrutura `do-while`. O programa só deve encerrar quando uma nota
válida for digitada.*/



#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota;

    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota inválida! Digite novamente.\n");
        }
    } while (nota < 0 || nota > 10);
        
    printf("Sua nota é %.1f.\n", nota);

    return 0;
}