/*Questão 18. Potência com Recursão — Implemente a função recursiva long potencia(int
base, int expoente), que calcule base elevado ao expoente (inteiro não negativo) sem usar
pow(). Na main(), leia a base e o expoente, valide com if que o expoente não é negativo e
exiba o resultado. Indique em comentário o caso base e o passo recursivo.*/

#include <stdio.h>
#include <windows.h>

long potencia(int base, int expoente);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int base, expoente;

    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0) {
        printf("O expoente deve ser positivo ou 0.\n");
    } else {
        printf("A potência de %d é %ld.\n", base, potencia(base, expoente));
    }

    return 0;
}

long potencia(int base, int expoente) {
    //Caso base
    if (expoente == 0) {
        return 1;
    } else {
        //Passo recursivo
        long resultado = base * potencia(base, expoente - 1);
        return resultado;
    }
}