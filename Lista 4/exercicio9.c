/*Questão 09. Cálculo de Média Ponderada e Situação Acadêmica — Elabore um programa que leia
as notas de três avaliações de um estudante: Trabalho de Laboratório (peso 2), Avaliação Semestral
(peso 3) e Exame Final (peso 5). O programa deve calcular a média ponderada e exibir a situação do
aluno conforme a tabela:
• Média entre 0.0 e 2.9: Reprovado
• Média entre 3.0 e 4.9: Em Recuperação
• Média igual ou superior a 5.0: Aprovado*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota_lab, nota_ava, nota_exa, media;

    printf("Digite as três notas separadas por espaço: ");
    scanf("%f %f %f", &nota_lab, &nota_ava, &nota_exa);

    media = ((nota_lab * 2) + (nota_ava * 3) + (nota_exa * 5)) / (float)(2 + 3 + 5);

    if (media < 3) {
        printf("Reprovado");
    } else if (media < 5) {
        printf("Em Recuperação");
    } else {
        printf("Aprovado");
    }

    return 0;
    
}