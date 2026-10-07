/*Questão 08. Validação de Entrada de Dados com Laço Garantido (do-while) — Escreva um
programa em C que solicite ao usuário que informe uma nota válida no intervalo fechado de 0.0 a 10.0.
Caso o usuário digite um valor fora deste intervalo (por exemplo, -5.0 ou 12.5), o programa deve exibir
uma mensagem de erro e repetir a solicitação usando a estrutura do-while. O programa só deve
encerrar quando um valor válido for digitado, exibindo a mensagem 'Nota registrada com sucesso!'.*/


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
            printf("Nota inválida!\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso!");

    return 0;
}