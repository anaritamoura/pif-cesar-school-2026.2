/*Questão 15. Verificação de Elegibilidade para Aposentadoria — Elabore um programa que leia a
idade e o tempo de serviço (em anos) de um trabalhador. O programa deve informar se o trabalhador
pode ou não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos de idade;
• OU ter trabalhado pelo menos 30 anos;
• OU ter pelo menos 60 anos de idade E ter trabalhado pelo menos 25 anos.*/


#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade, anos;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o tempo de serviço em anos: ");
    scanf("%d", &anos);

    if (idade >= 65 || anos >= 30 || (idade >= 60 && anos >= 25)) {
        printf("Aposentadoria aprovada.\n");
    } else {
        printf("Aposentadoria não aprovada.\n");
    }

    return 0;
    
}