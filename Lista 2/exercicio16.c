/*Questão 16. Quantidade de Degraus em uma Escada de Obra — Um trabalhador da construção
civil deseja subir uma escada de degraus idênticos. Escreva um programa em C que receba do
usuário a altura de cada degrau (em centímetros) e a altura total que o usuário deseja alcançar
subindo a escada (em metros). O programa deve calcular e exibir o número mínimo de degraus
que ele deve subir. Certifique-se de realizar a compatibilidade de unidades de medida (metros vs.
centímetros).*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float altura_degrau, altura_total;

    printf("Insira a altura de cada degrau em centímetros e a altura total de subida desejada em metros: ");
    scanf("%f %f", &altura_degrau, &altura_total);

    altura_total = altura_total * 100;

    printf("Você deve subir no mínimo %d degraus.\n", (int) (altura_total / altura_degrau));

    return 0;
}