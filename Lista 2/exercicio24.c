/*Questão 24. Conversor de Velocidade de km/h para m/s — Escreva um programa em C que
leia do teclado uma velocidade expressa em quilômetros por hora (km/h) e exiba o seu valor
convertido e formatado para metros por segundo (m/s). Use a constante física de conversão: m/s =
km/h / 3.6.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float velocidade;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade);

    printf("A velocidade em m/s é %.2f.\n", velocidade / 3.6);

    return 0;
}