/*Questão 23. Macro versus Função — Defina a macro #define DOBRO(x) x*2 e a função int
dobro(int x). Na main(), chame ambas com o argumento 2+3, imprima os resultados e
explique em comentário por que eles diferem. Em seguida, corrija a macro com parêneteses
de proteção e teste novamente.*/

#include <stdio.h>
#include <windows.h>

//Sem parênteses de proteção, resultado 8.
#define DOBRO(x) x*2

//Com parênteses de proteção, resultado 10.
#define DOBRO(x) ((x)*2)

int dobro(int x);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /*Os resultados diferem por causa da ordem de precedência das operações, a multiplicação tem precedência em relação à soma, 
    então a multiplicação (3 * 2) é realizada antes da soma (2 + 3)*/
    printf("O dobro de 2 + 3 é %d.\n", DOBRO(2 + 3));
    printf("O dobro de 2 + 3 é %d.\n", dobro(2 + 3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}