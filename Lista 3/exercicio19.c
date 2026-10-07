/*Questão 19. Cálculo do N-ésimo Termo da Sequência de Fibonacci — A sequência de Fibonacci é
dada por: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... onde cada termo a partir do terceiro é a soma dos dois
anteriores. Escreva um programa que solicite ao usuário o número do termo desejado (N) e calcule e
imprima o valor correspondente desse termo, além de listar todos os termos até N.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero, anterior = 0, atual = 1, proximo, i;

    printf("Digite o índice do termo desejado da sequência de Fibonacci: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        printf("%d\t", atual);

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return 0;
}