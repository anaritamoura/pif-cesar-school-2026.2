/*Questão 15. Filtragem Numérica Simultânea com Operadores Lógicos — Criar um programa em C
que solicite ao usuário um número limite inteiro positivo NUM. Em seguida, o programa deve imprimir
todos os números no intervalo fechado de 1 até NUM que sejam múltiplos de 3 e de 5 ao mesmo
tempo (por exemplo: 15, 30, 45, ...). Caso nenhum número satisfaça a condição, informe o usuário.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i, num, contador = 1;

    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) { 
            printf("%d\n", i);
        } else {
            contador++;
            }
        }
    
    if (contador == i) {
        printf("Não há nenhum múltiplo de 3 e 5 entre 1 e %d.\n", num);
    }

    return 0;
}