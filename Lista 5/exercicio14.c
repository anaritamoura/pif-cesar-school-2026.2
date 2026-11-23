/*Questão 14. Soma dos Dígitos com Recursão — Crie uma função recursiva int
somaDigitos(int n) que retorne a soma dos dígitos de um inteiro positivo (exemplo: 1234
resulta em 10). Dica: use os operadores % e / para separar o último dígito. Na main(), leia o
número e exiba o resultado. Indique em comentário o caso base e o passo recursivo.*/

#include <stdio.h>
#include <windows.h>

int somaDigitos(int numero);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("A soma dos dígitos de %d é %d.\n", numero, somaDigitos(numero));

    return 0;
}

int somaDigitos(int numero) {
    //Caso base
    if (numero == 0) {
        return 0;
    } else {
        int soma = numero % 10;
        int novo_numero = numero / 10;
        //Passo recursivo
        soma += somaDigitos(novo_numero);
        return soma;
    }
}