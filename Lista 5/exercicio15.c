/*Questão 15. Média Ponderada e Situação — Escreva a função float mediaPonderada(float n1,
float n2, float n3), com pesos 2, 3 e 5, e o procedimento void exibeSituacao(float media), que
imprima Aprovado se a média for maior ou igual a 5.0, Em Recuperação se estiver entre 3.0 e
4.9, e Reprovado nos demais casos. Chame ambas na main().*/

#include <stdio.h>
#include <windows.h>

float mediaPonderada(float numero1, float numero2, float numero3);
void exibeSituacao(float media);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota1, nota2, nota3, media;

    printf("Digite suas três notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = mediaPonderada(nota1, nota2, nota3);
    exibeSituacao(media);

    return 0;
}

float mediaPonderada(float numero1, float numero2, float numero3) {
    float ponderada = ((numero1 * 2) + (numero2 * 3) + (numero3 * 5)) / 10;
    return ponderada;
}

void exibeSituacao(float media) {
    if (media >= 5) {
        printf("Aprovado\n");
    } else if (media >= 3) {
        printf("Em Recuperação\n");
    } else {
        printf("Reprovado\n");
    }
}