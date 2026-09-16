/*Questão 20. Teorema de Pitágoras e a Hipotenusa — Escreva um programa em C que peça
para o usuário inserir os valores correspondentes aos dois catetos (lado_a e lado_b) de um
triângulo retângulo. O programa deve calcular e exibir na tela o comprimento de sua hipotenusa.
Dica: utilize o teorema de Pitágoras (hipotenusa = raiz quadrada da soma dos quadrados dos
catetos), importando as funções pow() ou sqrt() de <math.h>.*/

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float ladoa, ladob;

    printf("Digite os valores dos catetos: ");
    scanf("%f %f", &ladoa, &ladob);

    printf("O comprimento da hipotenusa é %.2f.\n", sqrt(pow(ladoa, 2) + pow(ladob, 2)));
    
    return 0;
}