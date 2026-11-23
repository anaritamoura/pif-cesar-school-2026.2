/*Questão 27. Conversor de Temperaturas Modular — Crie as funções celsiusParaFahrenheit,
celsiusParaKelvin, fahrenheitParaCelsius e kelvinParaCelsius, todas com parâmetro e retorno
float. Na main(), apresente um menu, leia a escolha e a temperatura e exiba o valor convertido
com duas casas decimais usando a função correspondente.*/

#include <stdio.h>
#include <windows.h>
#include "temperaturas.h"

void exibe_menu(void);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    float temperatura;

    exibe_menu();
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura a converter: ");
    scanf("%f", &temperatura);

    switch (opcao)
    {
        case 1:
            printf("%.2f°C é %.2f°F.\n", temperatura, celsiusParaFahrenheit(temperatura));
            break;
        case 2:
            printf("%.2f°C é %.2f K.\n", temperatura, celsiusParaKelvin(temperatura));
            break;
        case 3:
            printf("%.2f°F é %.2f°C.\n", temperatura, fahrenheitParaCelsius(temperatura));
            break;
        case 4:
            printf("%.2f K é %.2f°C.\n", temperatura, kelvinParaCelsius(temperatura));
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

void exibe_menu(void) {
    printf("1 - Celsius para Fahrenheit\n2 - Celsius para Kelvin\n3 - Fahrenheit para Celsius\n4 - Kelvin para Celsius\n");
}