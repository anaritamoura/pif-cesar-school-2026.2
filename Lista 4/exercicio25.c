/*Questão 25. Decomposição de Troco na Menor Quantidade de Cédulas — Escreva um programa
em C que receba o valor total a pagar e o valor entregue pelo cliente ao caixa (inteiros positivos).
Calcule o troco devido. Se o valor entregue for insuficiente, exiba uma mensagem de erro. Caso
contrário, decomponha o troco na menor quantidade possível de cédulas de R$ 100, R$ 50, R$ 20, R$
10, R$ 5 e R$ 2 utilizando comandos condicionais e operações aritméticas inteiras.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int total, valor_pago, troco, troco_total, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2;

    printf("Insira o valor total da compra: ");
    scanf("%d", &total);

    printf("Insira o valor recebido: ");
    scanf("%d", &valor_pago);

    if (valor_pago < total) {
        printf("Erro: Valor insuficiente.\n");
    } else {
        troco_total = valor_pago - total;
        troco = troco_total;
        nota_100 = troco / 100;
        troco = troco - (100 * nota_100);
        nota_50 = troco / 50;
        troco = troco - (50 * nota_50);
        nota_20 = troco / 20;
        troco = troco - (20 * nota_20);
        nota_10 = troco / 10;
        troco = troco - (10 * nota_10);
        nota_5 = troco / 5;
        troco = troco - (5 * nota_5);
        nota_2 = troco / 2;
        troco = troco - (2 * nota_2);
        
        printf("Seu troco: R$%d\nNotas de R$100: %d\nNotas de R$50: %d\nNotas de R$20: %d\nNotas de R$10: %d\nNotas de R$5: %d\nNotas de R$2: %d\n", troco_total, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2);
    }

    return 0;

}