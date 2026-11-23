/*Questão 22. Biblioteca de Áreas com Arquivo de Cabeçalho — Crie um arquivo areas.h
contendo a constante PI e as macros A_CIRC(raio), A_RET(base,alt) e A_TRI(base,alt), todas
com parênteses de proteção. Em um programa principal que utilize #include "areas.h", leia os
dados do usuário e exiba as áreas calculadas.*/

#include <stdio.h>
#include <windows.h>
#include "areas.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio, base_ret, alt_ret, base_tri, alt_tri;

    printf("Digite a medida do raio: ");
    scanf("%f", &raio);

    printf("Digite a medida da base e da altura do retângulo: ");
    scanf("%f %f", &base_ret, &alt_ret);

    printf("Digite a medida da base e da altura do triângulo: ");
    scanf("%f %f", &base_tri, &alt_tri);

    printf("A área do círculo é %.2f.\n", A_CIRC(raio));
    printf("A área do retângulo é %.2f.\n", A_RET(base_ret, alt_ret));
    printf("A área do triângulo é %.2f.\n", A_TRI(base_tri, alt_tri));

    return 0;
}