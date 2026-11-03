/*Questão 18. Conversor Multidirecional de Escalas Termométricas — Desenvolva um programa que
apresente um menu de opções de conversão de temperatura:
1. Celsius para Fahrenheit (F = C * 1.8 + 32)
2. Celsius para Kelvin (K = C + 273.15)
3. Fahrenheit para Celsius (C = (F - 32) / 1.8)
4. Kelvin para Celsius (C = K - 273.15)
O programa deve ler a escolha do usuário via switch-case, solicitar a temperatura de entrada e exibir o
valor convertido com duas casas decimais.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    float temperatura;

    printf("Digite o código correspondente à operação desejada:\n1 - Celsius para Fahrenheit\n2 - Celsius para Kelvin\n3 - Fahrenheit para Celsius\n4 - Kelvin para Celsius\n");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao)
    {
        case 1:
            printf("%.2f °C é %.2f °F.\n", temperatura, temperatura * 1.8 + 32);
            break;
        case 2:
            printf("%.2f °C é %.2f K.\n", temperatura, temperatura + 273.15);
            break;
        case 3:
            printf("%.2f °F é %.2f °C.\n", temperatura, (temperatura - 32) / 1.8);
            break;
        case 4:
            printf("%.2f K é %.2f °C.\n", temperatura, temperatura - 273.15);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;

}