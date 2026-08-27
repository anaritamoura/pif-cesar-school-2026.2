/* Questão 28. Desenvolva um programa em C que leia três valores numéricos inteiros fornecidos pelo
usuário através do teclado, calcule a média aritmética simples desses valores como um número real de
dupla precisão (double) e exiba o resultado final na tela formatado com exatamente duas casas
decimais. */

#include <stdio.h>

int main(){
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);

    printf("Digite aqui o terceiro valor: \n");
    scanf("%d", &valor3);

    double media = (valor1 + valor2 + valor3) / 3;

    printf("A média dos valores é %.2f.\n", media);
    
    return 0;
}