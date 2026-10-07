/*Questão 17. Estatísticas de Turma (Menor, Maior, Média e Contagem) — Faça um programa para
ler uma sequência de notas de alunos (valores reais de 0.0 a 10.0). A entrada de dados deve ser
encerrada quando o usuário digitar a nota '-1.0'. Ao final, o programa deve exibir: a) Total de alunos
avaliados; b) A maior nota da turma; c) A menor nota da turma; d) A média geral da turma.*/

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int alunos = 0;
    float nota, media, maior_nota = 0, menor_nota = 10, soma = 0;

    do {
        printf("Digite uma nota de 0.0 a 10.0: ");
        scanf("%f", &nota);

        if (nota == -1) {
            printf("Nenhuma nota foi adicionada ao sistema.\n");
            break;
        }

        if (nota >= 0.0 && nota <= 10.0) {
            alunos += 1;
            soma += nota;

            if (nota > maior_nota) {
                maior_nota = nota;
            }
            if (nota < menor_nota) {
                menor_nota = nota;
            }
        }
    } while (nota != -1.0);

    if (alunos >= 1) {
        media = soma / alunos;
        printf("Foram avaliados %d alunos.\n", alunos);
        printf("A maior nota da turma foi %.2f.\n", maior_nota);
        printf("A menor nota da turma foi %.2f.\n", menor_nota);
        printf("A média geral da turma foi %.2f.\n", media);
    }

    return 0;
}