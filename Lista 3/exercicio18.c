/*Questão 18. Inversão de Dígitos de um Número Inteiro (Algoritmo Numérico) — Elabore um
programa que solicite ao usuário um número inteiro positivo (ex: 12345) e construa um novo número
inteiro com os dígitos em ordem inversa (ex: 54321). Dica: utilize um laço enquanto o número for
maior que zero, extraindo o último dígito com o operador resto (%) e reduzindo o número com a
divisão inteira (/).*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int numero, novo_numero = 0;

    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    while (numero > 0) {
        novo_numero = (numero % 10) + (novo_numero * 10);
        numero = numero / 10;
    }
    
    printf("%d\n", novo_numero);

    return 0;
}