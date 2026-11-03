/*Questão 17. Cálculo de Pagamento e Comissão de Vendas — Escreva um programa em C para
auxiliar um vendedor. O programa lê o valor total de uma compra e a opção de pagamento (1 = À Vista
com 10% de desconto; 2 = Parcelado em 3x sem juros). O programa deve calcular e exibir:

a) O valor final a pagar com desconto (se à vista) ou o valor de cada parcela (se parcelado).
b) A comissão do vendedor, que é de 5% sobre o valor com desconto (à vista) ou 5% sobre o valor
total (parcelado).*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float total, desconto;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &total);

    printf("Digite a forma de pagamento:\n1 - à Vista\n2 - Parcelado em 3x sem juros\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        desconto = total - (total * 0.10);
        printf("Valor a pagar R$%.2f.\n", desconto);
        printf("Valor da comissão R$%.2f.\n", desconto * 0.05);
    } else {
        printf("Valor da parcela R$%.2f.\n", total / 3);
        printf("Valor da comissão R$%.2f.\n", total * 0.05);
    }

    return 0;

}