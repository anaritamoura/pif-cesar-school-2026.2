/*Questão 21. Macros Utilitárias — Defina as macros SQR(x), MAX(a,b) e MIN(a,b) com
parênteses de proteção. Na main(), leia dois inteiros e exiba o quadrado de cada um, o maior
e o menor, usando apenas as macros.*/

#include <stdio.h>
#include <windows.h>

#define SQR(x) ((x)*(x))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero1, numero2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("O quadrado de %d é %d.\n", numero1, SQR(numero1));
    printf("O quadrado de %d é %d.\n", numero2, SQR(numero2));
    printf("O maior número é %d.\n", MAX(numero1, numero2));
    printf("O menor número é %d.\n", MIN(numero1, numero2));

    return 0;
}