/*Questão 28. Caixa Simples de Mercadinho — Desenvolva um programa com as funções
float calculaSubtotal(float preco, int quantidade), float aplicaDesconto(float valor, int
opcaoPagamento), com 10% de desconto à vista, e float calculaTroco(float total, float pago).
Na main(), leia o preço, a quantidade, a forma de pagamento e o valor pago, e exiba o
subtotal, o total a pagar e o troco.*/


float calculaSubtotal(float preco, int quantidade) {
    float total = preco * quantidade;
    return total;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        float subtotal = valor - (valor * 0.10);
        return subtotal;
    } else {
        return valor;
    }
}

float calculaTroco(float total, float pago) {
    float troco = pago - total;
    return troco;
}