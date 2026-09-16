/*Questão 11. Conversor de Ângulos de Graus para Radianos — Desenvolva um programa que
leia do teclado o valor de um ângulo em graus e o converta em seu equivalente em radianos. Exiba
o resultado final formatado no console. Use a fórmula: radianos = graus * (Pi / 180.0), definindo Pi
como uma constante de 3.141593.*/


#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const double pi = 3.141593;
    double graus;

    printf("Digite um ângulo em graus: ");
    scanf("%lf", &graus);

    printf("O valor de %.2f em radianos é %.2f.\n", graus, graus * (pi / 180.0));

    return 0;
}