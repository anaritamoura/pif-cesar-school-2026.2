/*Questão 12. Tabela de Conversão de Temperaturas (Celsius, Fahrenheit e Kelvin) — Crie um
programa que imprima uma tabela de conversão de temperaturas de 0°C a 100°C, com variação de 5
em 5 graus Celsius. Para cada valor em Celsius, o programa deve calcular e exibir os valores
equivalentes em Fahrenheit (F = (9*C)/5 + 32) e Kelvin (K = C + 273.15), utilizando formatação
alinhada com duas casas decimais.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float grauscelsius = 0, fahrenheit, kelvin;

    for ( ; grauscelsius <= 100; grauscelsius += 5) {
        fahrenheit = (9 * grauscelsius) / 5 + 32;
        kelvin = grauscelsius + 273.15;
        printf("°C = %.2f\t°F = %.2f\t°K = %.2f\n", grauscelsius, fahrenheit, kelvin);
    }

    return 0;
}