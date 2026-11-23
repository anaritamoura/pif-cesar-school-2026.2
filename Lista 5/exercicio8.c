/*Questão 08. Conversor de Fahrenheit para Celsius — Desenvolva um programa que leia
uma temperatura em graus Fahrenheit e utilize uma função float celsius(float fahr) para
convertê-la, aplicando a fórmula C = (F - 32) * 5 / 9. Exiba o resultado com duas casas
decimais.*/

#include <stdio.h>
#include <windows.h>

float celsius(float fahr);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float fahrenheit;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("%.2f°F é %.2f°C.\n", fahrenheit, celsius(fahrenheit));

    return 0;
}

float celsius(float fahr) {
    float celsius = (fahr - 32) * 5 / 9;
    return celsius;
}