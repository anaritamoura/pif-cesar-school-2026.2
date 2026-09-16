/*Questão 18. Geometria da Esfera e Frações de Ponto Flutuante — Crie um programa em C
que leia o raio de uma esfera e calcule sua área de superfície (A = 4 * Pi * R^2) e o seu volume (V
= (4.0/3.0) * Pi * R^3). Defina Pi como 3.141593. Atenção: Garanta que o termo fracionário 4/3
do volume não sofra truncamento de divisão inteira, o que comprometeria gravemente o resultado.*/


#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const float pi = 3.141593;
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("A área da superfície mede %.2f.\n", 4 * pi * (raio * raio));
    printf("O volume da esfera é %.2f.\n", (4.0 / 3.0) * pi * (raio * raio * raio));

    return 0;
}