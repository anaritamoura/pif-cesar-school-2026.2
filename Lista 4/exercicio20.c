/*Questão 20. Resolução da Equação do Segundo Grau (Fórmula de Bhaskara) — Desenvolva um
programa em C para calcular as raízes de uma equação do segundo grau ax2 + bx + c = 0. O programa
lê os coeficientes a, b e c (garantindo a != 0). Calcule o delta (Δ = b2 - 4ac) e exiba o resultado
apropriado:
• Se Δ < 0: 'A equação não possui raízes reais.'
• Se Δ == 0: Calcule e exiba a raiz única x = -b / (2a).
• Se Δ > 0: Calcule e exiba as duas raízes reais distintas x1 e x2 usando sqrt().*/


#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float coef_a, coef_b, coef_c, delta;

    do {
        printf("Digite os valores de 'a', 'b' e 'c': ");
        scanf("%f %f %f", &coef_a, &coef_b, &coef_c);
    } while (coef_a == 0);

    delta = (coef_b * coef_b) - 4 * coef_a * coef_c;
    
    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        printf("A raíz única é %.2f.\n", - coef_b / (2 * coef_a));
    } else {
        printf("A raíz 1 é %.2f e a raíz 2 é %.2f.\n", (- coef_b + sqrt(delta)) / (2 * coef_a), (- coef_b - sqrt(delta)) / (2 * coef_a));
    }

    return 0;

}