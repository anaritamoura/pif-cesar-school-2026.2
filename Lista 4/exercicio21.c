/*Questão 21. Cálculo de Reajuste Salarial com Base em Categorias — Uma empresa concederá
aumentos salariais diferenciados de acordo com o cargo e o tempo de serviço. Crie um programa que
leia o salário atual e o código do cargo (1 = Técnico; 2 = Gerente; 3 = Demais Cargos). Calcule o novo
salário segundo os percentuais:
• Técnico (Código 1): 15% de aumento se salário <= 3000; 10% se salário > 3000.
• Gerente (Código 2): 10% de aumento se salário <= 5000; 5% se salário > 5000.
• Demais Cargos (Código 3): 8% de aumento fixo.
Exiba o valor do aumento em reais e o novo salário reajustado.*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float salario_atual, salario_final, aumento;
    int codigo;

    printf("Digite seu salário atual: ");
    scanf("%f", &salario_atual);

    printf("Digite a opção de acordo com o cargo:\n1 - Técnico\n2 - Gerente\n3 - Demais Cargos \n");
    scanf("%d", &codigo);

    switch (codigo)
    {
        case 1:
            if (salario_atual <= 3000) {
                aumento = salario_atual * 0.15;
                salario_final = salario_atual + aumento;
                printf("Valor do aumento: R$%.2f\nSalário após o reajuste: R$%.2f\n", aumento, salario_final);
            } else {
                aumento = salario_atual * 0.1;
                salario_final = salario_atual + aumento;
                printf("Valor do aumento: R$%.2f\nSalário após o reajuste: R$%.2f\n", aumento, salario_final);
            }
            break;
        case 2:
            if (salario_atual <= 5000) {
                aumento = salario_atual * 0.1;
                salario_final = salario_atual + aumento;
                printf("Valor do aumento: R$%.2f\nSalário após o reajuste: R$%.2f\n", aumento, salario_final);
            } else {
                aumento = salario_atual * 0.05;
                salario_final = salario_atual + aumento;
                printf("Valor do aumento: R$%.2f\nSalário após o reajuste: R$%.2f\n", aumento, salario_final);
            }
            break;
        case 3:
            aumento = salario_atual * 0.08;
            salario_final = salario_atual + aumento;
            printf("Valor do aumento: R$%.2f\nSalário após o reajuste: R$%.2f\n", aumento, salario_final);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;

}