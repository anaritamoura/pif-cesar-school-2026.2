/*Questão 22. Cálculo de Impostos Estaduais sobre Produtos — Uma empresa vende produtos para
quatro estados diferentes. Escreva um programa em C que leia o valor de um produto (float) e a sigla
do estado de destino do frete (lida como inteiro ou código char: 1=MG, 2=SP, 3=RJ, 4=MS). O
programa deve adicionar a alíquota de imposto correspondente ao valor final:
• MG: 7% | SP: 12% | RJ: 15% | MS: 8%
Exiba o preço final acrescido do imposto. Se o código do estado for inválido, mostre uma mensagem de
erro.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float valor_produto, valor_final;
    int codigo;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    printf("Digite o código do estado:\n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
        case 1:
            valor_final = valor_produto + (valor_produto * 0.07);
            break;
        case 2:
            valor_final = valor_produto + (valor_produto * 0.12);
            break;
        case 3:
            valor_final = valor_produto + (valor_produto * 0.15);
            break;
        case 4:
            valor_final = valor_produto + (valor_produto * 0.08);
            break;
        default:
            printf("Erro: código do estado inválido.\n");
            return 0;
    }

    printf("Valor final: R$%.2f\n", valor_final);

    return 0;

}