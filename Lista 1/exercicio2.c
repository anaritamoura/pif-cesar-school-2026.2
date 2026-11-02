/*Questão 02. Faça um programa em C que declare uma variável de ponto flutuante de precisão simples
(float), atribua a ela um valor constante real de sua preferência (como o valor do número de Euler 
'e' = 2.71828) e exiba o resultado no console formatado com exatamente três casas decimais de precisão.*/

#include <stdio.h>

int main(){
    float euler = 2.71828;
    printf("O valor da constante de Euler é %.3f.\n", euler);
    return 0;
}