/*Questão 13. Calculadora com Quatro Operações — Implemente o desafio visto em aula: crie
as funções soma, subtrai, multiplica e divide, todas recebendo dois valores float e retornando
float. A main() deve exibir um menu, ler a opção e os dois operandos e chamar a função
correspondente. Na divisão, valide a divisão por zero antes de chamar a função.*/


#include <stdio.h>
#include <windows.h>

void exibe_menu(void);
float soma(float, float);
float subtrai(float, float);
float multiplica(float, float);
float divide(float, float);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    float numero_a, numero_b;

    exibe_menu();
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("Digite os dois operandos: ");
    scanf("%f %f", &numero_a, &numero_b);

    switch (opcao)
    {
        case 1:
            printf("A soma de %.2f e %.2f é %.2f.\n", numero_a, numero_b, soma(numero_a, numero_b));
            break;
        case 2:
            printf("A diferença entre %.2f e %.2f é %.2f.\n", numero_a, numero_b, subtrai(numero_a, numero_b));
            break;
        case 3:
            printf("A multiplicação de %.2f e %.2f é %.2f.\n", numero_a, numero_b, multiplica(numero_a, numero_b));
            break;
        case 4:
            if (numero_b == 0) {
                printf("Não é possível a divisão por 0.\n");
                break;
            } else {
                printf("O resultado da divisão entre %.2f e %.2f é %.2f.\n", numero_a, numero_b, divide(numero_a, numero_b));
                break;
            }
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

void exibe_menu(void) {
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
}

float soma( float numero_a, float numero_b) {
    float soma = numero_a + numero_b;
    return soma;
}

float subtrai(float numero_a, float numero_b) {
    float sub = numero_a - numero_b;
    return sub;
}

float multiplica(float numero_a, float numero_b) {
    float multi = numero_a * numero_b;
    return multi;
}

float divide(float numero_a, float numero_b) {
    float divi = numero_a / numero_b;
    return divi;
}