/*Questão 10. Conversão de Temperatura de Celsius para Fahrenheit e Kelvin — Escreva um
programa em C que leia uma temperatura expressa em graus Celsius (float ou double) e mostre na
tela o seu valor convertido para duas escalas termométricas: graus Fahrenheit e Kelvin. As fórmulas
de conversão são: F = (C * 9/5) + 32 e K = C + 273.15.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float temperatura;

    printf("Digite uma temperatura em Celcius: ");
    scanf("%f", &temperatura);

    printf("A temperatura em Fahrenheit é %.2f.\n", (temperatura * 9/5) + 32);
    printf("A temperatura em Kelvin é %.2f.\n", temperatura + 273.15);

    return 0;
}