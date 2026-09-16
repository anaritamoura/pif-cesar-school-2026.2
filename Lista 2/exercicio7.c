/*Questão 07. Leitura e Inversão Formatada de Datas — Escreva um programa completo em C
que solicite ao usuário a inserção de uma data no formato dd/mm/aaaa (utilizando as barras como
separadores na digitação) e a exiba em formato invertido aaaa/mm/dd. Use as capacidades
específicas de formatação de string de controle da função scanf().*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int dia, mes, ano;

    printf("Digite uma data usando / como separador: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    printf("A data é %d/%d/%d.\n", ano, mes, dia);
    return 0;
}