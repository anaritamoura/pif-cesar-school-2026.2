/*Questão 15. Cálculo de Média Aritmética Simples e Ponderada — Desenvolva um programa
que leia quatro notas escolares de um aluno. Calcule e exiba no console: a) A média aritmética
simples das notas; b) A média ponderada das notas, assumindo que as provas possuem os
seguintes pesos sequenciais: Peso 1 para as provas 1 e 2, e Peso 2 para as provas 3 e 4. Ambos
os resultados devem ser representados com duas casas decimais.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota1, nota2, nota3, nota4;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    printf("A média aritmética das notas é %.2f.\n", (nota1 + nota2 + nota3 + nota4) / 4);
    printf("A média ponderada das notas, considerando os respectivos pesos (1 para provas 1 e 2, e 2 para provas 3 e 4), é %.2f.\n", (nota1 + nota2 + (nota3 * 2) + (nota4 * 2)) / 6);

    return 0;
}