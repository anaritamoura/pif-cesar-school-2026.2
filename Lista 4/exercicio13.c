/*Questão 13. Calculadora Aritmética e Científica com Menu switch — Crie um programa em C que
apresente um menu para o usuário escolher entre as operações: + (Soma), - (Subtração), *
(Multiplicação), / (Divisão) e ^ (Potenciação usando pow()). Em seguida, o programa lê os dois
operandos reais, realiza o cálculo selecionado via switch-case e exibe o resultado formatado. Caso a
operação seja divisão, valide para impedir divisão por zero.*/

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float numero1, numero2;
    char operacao;

    printf("Digite o símbolo correspondente para a operação desejada:\n(+) Soma\n(-) Subtração\n(*) Multiplicação\n(/) Divisão\n(^) Potenciação \n");
    scanf("%c", &operacao);

    printf("Digite dois valores reais separados por espaço: ");
    scanf("%f %f", &numero1, &numero2);

    switch (operacao)
    {
        case '+':
            printf("%.2f\n", numero1 + numero2);
            break;
        case '-':
            printf("%.2f\n", numero1 - numero2);
            break;
        case '*':
            printf("%.2f\n", numero1 * numero2);
            break;
        case '/':
            if (numero2 == 0) {
                printf("Não é possível fazer a divisão por 0.\n");
                break;
            } else {
                printf("%.2f\n", numero1 / numero2);
            }
            break;
        case '^':
            printf("%.2f\n", pow(numero1, numero2));
            break;
        default:
            printf("Opção inválida.\n");
        }
        
    return 0;

}