/*Questão 28. Caixa Simples de Mercadinho — Desenvolva um programa com as funções
float calculaSubtotal(float preco, int quantidade), float aplicaDesconto(float valor, int
opcaoPagamento), com 10% de desconto à vista, e float calculaTroco(float total, float pago).
Na main(), leia o preço, a quantidade, a forma de pagamento e o valor pago, e exiba o
subtotal, o total a pagar e o troco.*/

#include <stdio.h>
#include <windows.h>
#include "pagamento.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float preco, valor_pago, subtotal, total_final, troco;
    int quantidade, forma_pagamento;

    printf("Digite o preço do item: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    subtotal = calculaSubtotal(preco, quantidade);

    printf("Subtotal: R$%.2f.\n", subtotal);

    printf("Digite a forma de pagamento:\n1 - À vista\n2 - Crédito\n3 - Débito\n");
    scanf("%d", &forma_pagamento);

    total_final = aplicaDesconto(subtotal, forma_pagamento);

    printf("Valor total após descontos: R$%.2f.\n", total_final);

    printf("Digite o valor pago: ");
    scanf("%f", &valor_pago);
    
    if (valor_pago < total_final) {
        printf("Valor inferior ao total.\n");
    } else {
        troco = calculaTroco(total_final, valor_pago);
        printf("Troco: R$%.2f.\n", troco);
    }

    return 0;
}