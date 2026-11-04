/*Questão 27. Tarifador de Estacionamento com Faixas Progressivas — Um estacionamento cobra
tarifação progressiva conforme o tempo de permanência do veículo. Escreva um programa em C que
leia o número de horas inteiras que o carro permaneceu no local e calcule o valor total do ticket:
• 1a e 2a hora: R$ 2,00 por hora;
• 3a e 4a hora: R$ 2,50 por hora;
• 5a hora em diante: R$ 3,00 por hora adicional.
Exiba o tempo total e o valor final cobrado.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int horas, horas_progressao;
    float valor_total;

    printf("Insira a quantidade de horas de permanência: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Quantidade de horas inválida.\n");
    } else if (horas <= 2) {
        valor_total = horas * 2;
    } else if (horas <= 4) {
        horas_progressao = horas - 2;
        valor_total = 4 + (horas_progressao * 2.50);
    } else {
        horas_progressao = horas - 4;
        valor_total = 9 + (horas_progressao * 3);
    }

    printf("Tempo total: %d\nValor total: R$%.2f\n", horas, valor_total);

    return 0;

}