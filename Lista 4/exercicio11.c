/*Questão 11. Ordenação Crescente de Três Valores Numéricos — Escreva um programa em C que
leia três números inteiros fornecidos pelo usuário e os exiba em ordem estritamente crescente (do
menor para o maior). Utilize estruturas de decisão para comparar e ordenar os valores sem usar
vetores.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero_a, numero_b, numero_c;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &numero_a, &numero_b, &numero_c);

    if (numero_a == numero_b || numero_a == numero_c || numero_b == numero_c) {
        printf("Não é possível colocar os números em ordem crescente pois há números com valores repetidos.\n");
    } else {
        if (numero_a < numero_b && numero_b < numero_c) {
            printf("%d %d %d\n", numero_a, numero_b, numero_c);
        } else if (numero_a < numero_c && numero_c < numero_b) {
            printf("%d %d %d\n", numero_a, numero_c, numero_b);
        } else if (numero_b < numero_a && numero_a < numero_c) {
            printf("%d %d %d\n", numero_b, numero_a, numero_c);
        } else if (numero_b < numero_c && numero_c < numero_a) {
            printf("%d %d %d\n", numero_b, numero_c, numero_a);
        } else if (numero_c < numero_a && numero_a < numero_b) {
            printf("%d %d %d\n", numero_c, numero_a, numero_b);
        } else {
            printf("%d %d %d\n", numero_c, numero_b, numero_a);
        }
    }
    
    return 0;

}