/*Questão 8. Cálculos Geométricos e Constantes com `<math.h>` — Desenvolva um programa em C
que solicite ao usuário o valor do raio R de uma esfera. Defina a constante PI como 3.14159265 e
calcule: a) A área da superfície da esfera (A = 4 * PI * R2); b) O volume da esfera (V = (4.0/3.0) * PI *
R3). Utilize a função pow() da biblioteca `<math.h>` e exiba os resultados formatados com 3 casas
decimais. Atenção para a divisão real de 4.0 por 3.0!*/


#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float raio;
    float PI = 3.14159265;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    printf("A área da superfície da esfera é %.3f.\n", 4 * PI * (pow(raio, 2)));
    printf("O volume da esfera é %.3f.\n", (4.0 / 3.0) * PI * pow(raio, 3));

    return 0;
}