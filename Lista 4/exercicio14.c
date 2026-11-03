/*Questão 14. Matriz de Classificação de Conceito por Nota e Faltas — Uma instituição de ensino
define o conceito do estudante combinando a nota final e a quantidade de faltas. Escreva um programa
em C que leia a nota (float) e o número de faltas (int) e determine o conceito conforme a tabela:

• Nota 9.0 a 10.0: Até 20 faltas = Conceito A | Acima de 20 faltas = Conceito B
• Nota 7.5 a 8.9: Até 20 faltas = Conceito B | Acima de 20 faltas = Conceito C
• Nota 5.0 a 7.4: Até 20 faltas = Conceito C | Acima de 20 faltas = Conceito D
• Nota 4.0 a 4.9: Até 20 faltas = Conceito D | Acima de 20 faltas = Conceito E
• Nota 0.0 a 3.9: Qualquer quantidade de faltas = Conceito E*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota;
    int faltas;

    printf("Insira a quantidade de faltas: ");
    scanf("%d", &faltas);

    printf("Insira a nota: ");
    scanf("%f", &nota);

    if (nota < 4) {
        printf("Conceito E\n");
    } else {
        if (nota < 5) {
            if (faltas <= 20) {
                printf("Conceito D\n");
            } else {
                printf("Conceito E\n");
            }
        } else if (nota < 7.5) {
            if (faltas <= 20) {
                printf("Conceito C\n");
            } else {
                printf("Conceito D\n");
            }
        } else if (nota < 9) {
            if (faltas <= 20) {
                printf("Conceito B\n");
            } else {
                printf("Conceito C\n");
            }
        } else {
            if (faltas <= 20) {
                printf("Conceito A\n");
            } else {
                printf("Conceito B\n");
            }
        }
    }

    return 0;

}