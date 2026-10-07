/*Questão 28. Sistema de Folha de Pagamento com Menu Contínuo (do-while & switch) —
Desenvolva um programa completo para gerenciamento de folha de pagamento de uma empresa. O
programa deve exibir um menu de opções em um laço do-while contínuo:
1. Reajuste Salarial (Calcula e exibe novo salário: 15% de aumento para salários até R$ 2.000,00 e
10% para salários superiores).
2. Retenção de Imposto de Renda (Calcula desconto: 8% para salários até R$ 3.000,00 e 15% para
salários superiores).
3. Encerrar Programa.
O programa deve validar as opções do menu e só finalizar a execução quando a opção 3 for
expressamente selecionada.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int entrada;
    float salario, novo_salario, desconto; 

    do {
        printf("1. Reajuste Salarial\n2. Retenção de Imposto de Renda\n3. Encerrar Programa\n");
        printf("Digite uma opção do menu: ");
        scanf("%d", &entrada);

        switch (entrada) {
            case 1:
                printf("Digite seu salário: ");
                scanf("%f", &salario);

                if (salario <= 2000) {
                    novo_salario =  salario + (salario * 0.15);
                } else {
                    novo_salario = salario + (salario * 0.10);
                }

                printf("Novo salário: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("Digite seu salário: ");
                scanf("%f", &salario);

                if (salario <= 3000) {
                    desconto = salario * 0.08;
                } else {
                    desconto = salario * 0.15;
                }

                printf("Desconto: R$ %.2f\n", desconto);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida. Digite 1, 2 ou 3.\n");
        }
    } while (entrada != 3);

    return 0;
}