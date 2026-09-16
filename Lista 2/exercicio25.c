/*Questão 25. Salário Líquido com Gratificação e Tributação — Faça um programa em C que leia
o salário-base de um funcionário. O programa deve calcular e exibir o salário líquido a receber
sabendo que esse funcionário tem uma gratificação fixa de 5% sobre o seu salário-base (adicional),
mas paga um imposto retido de 7% também calculado sobre o seu salário-base. Justifique a
fórmula matemática do cálculo através dos operadores aritméticos.*/


#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float salario;

    printf("Insira seu salário: ");
    scanf("%f", &salario);

    printf("Seu salário líquido é R$%.2f.\n", salario - (salario * 0.02));

    return 0;
}
// Para encontrar o salário final, adicionei 5% dele e tirei 7% do salário-base, cheguei à 2% de desconto.