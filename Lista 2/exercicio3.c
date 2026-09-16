#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite aqui um número inteiro: ");
    scanf("%d", &numero);
    printf("O valor em base decimal é %d,\no valor em base hexadecimal em caixa baixa é %x,\no valor em base octal é %o,\ne o caractere correspondente à tabela ACII do valor é %c.", numero, numero, numero, numero);
    return 0;
}