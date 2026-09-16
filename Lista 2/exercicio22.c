/*Questão 22. Conversão de Caixa Alta para Baixa via Tabela ASCII — Escreva um programa que
solicite e leia uma letra maiúscula do usuário. O programa deve convertê-la em uma letra
minúscula utilizando operações aritméticas de deslocamento na tabela ASCII (offset de 32 posições
ou através da subtração do caractere 'A' e adição de 'a'). Não utilize funções prontas de bibliotecas
como <ctype.h>.*/


#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char letra;

    printf("Digite uma letra maiúscula: ");
    scanf("%c", &letra);

    printf("A letra minúscula de \"%c\" é \"%c\".\n", letra, letra + 32);

    return 0;
}