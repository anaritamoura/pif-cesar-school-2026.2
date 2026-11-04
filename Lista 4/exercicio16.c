/*Questão 16. Classificação de Eficiência de Consumo de Combustível — Faça um programa que leia
a distância percorrida por um veículo em km (float) e a quantidade de litros de gasolina consumidos
(float). Calcule o consumo em km/l e exiba a mensagem apropriada:
• Consumo < 8.0 km/l: 'Venda o carro!'
• Consumo entre 8.0 e 14.0 km/l: 'Econômico!'
• Consumo > 14.0 km/l: 'Super econômico!'*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float distancia, litros, consumo;

    printf("Digite a distância percorrida: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }

    return 0;

}