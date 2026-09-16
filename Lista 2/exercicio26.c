/*Questão 26. Orçamento para Cercamento Perimetral de Terrenos — Desenvolva um programa
para cercamento de terrenos agrícolas. O programa deve ler do teclado: a) O comprimento e a
largura do terreno em metros; b) O preço unitário do metro de arame farpado (em reais). Sabendo
que o cercamento de segurança exige exatamente 3 fios de arame esticados ao longo do
perímetro do terreno, calcule e mostre na tela quantos metros de arame farpado devem ser
comprados e o custo total do cercamento.*/


#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float comprimento, largura, preco_uni, perimetro;

    printf("Digite o comprimento e a largura do terreno em metros: ");
    scanf("%f %f", &comprimento, &largura);

    printf("Digite aqui o valor do metro do arame farpado em reais: ");
    scanf("%f", &preco_uni);

    perimetro = (comprimento * 2) + (largura * 2);

    printf("A quantidade de metros de arame farpado necessária para cobrir o perímetro é %.2fm.\n", perimetro * 3);
    printf("O custo total do cercamento é R$%.2f.\n", (perimetro * 3) * preco_uni);

    return 0;
}