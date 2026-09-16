/*Questão 19. Cálculo de Salário Líquido com Desconto na Fonte — Uma empresa de prestação
de serviços contrata um encanador à taxa fixa de R$ 30,00 por dia útil trabalhado. Elabore um
programa que solicite ao usuário o número de dias efetivamente trabalhados pelo profissional.
Calcule e imprima a quantia bruta devida e o valor líquido final a ser pago, sabendo que são
descontados estritamente 8% de imposto de renda retido na fonte sobre o total bruto.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int dias;
    float bruto;
    
    printf("Digite a quantidade de dias trabalhados no mês: ");
    scanf("%d", &dias);

    bruto = (float) dias * 30.00;

    printf("A quantia bruta a ser paga é R$%.2f.\n", bruto);
    printf("O valor líquido final a ser pago é R$%.2f.\n", bruto - (bruto * 0.08));

    return 0;
}