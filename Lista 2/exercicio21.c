/*Questão 21. Leitura de Caractere e Exibição de seu Código ASCII — A tabela ASCII associa
cada caractere a um valor inteiro único de 1 byte. Desenvolva um programa em C que leia um
caractere do teclado informado pelo usuário e exiba na tela esse mesmo caractere formatado como
um número inteiro. Escreva uma breve explicação em comentários no seu código sobre o que esse
número representa.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char character;

    printf("Digite um caractere qualquer: ");
    scanf("%c", &character);

    printf("O número inteiro correspondente a \"%c\" é %d.\n", character, character);

    return 0;
}
// O número inteiro representado na saída pertence à tabela ASCII, que, por sua vez, associa caracteres a números para que o computador possa ler e usar. 