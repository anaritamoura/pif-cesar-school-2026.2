/*Questão 11. Cálculo Salarial com Gratificação e Impostos — Uma empresa contrata um técnico a R$
45,00 por dia trabalhado. Crie um programa em C que solicite o número de dias trabalhados, calcule o
salário bruto, adicione uma gratificação de 5% sobre o bruto e desconte 8% de imposto de renda
sobre o bruto. Ao final, exiba o holerite detalhado com o valor líquido a receber.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float dias, bruto, salario_liquido;

    printf("Insira a quantidade de dias trabalhados: ");
    scanf("%f", &dias);

    bruto = dias * 45.00;

    salario_liquido = bruto + (bruto * 0.05) - (bruto * 0.08);
    
    printf("O salário líquido final que você deve receber é R$%.2f.\n", salario_liquido);

    return 0;
}