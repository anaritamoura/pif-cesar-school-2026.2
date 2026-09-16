/*Questão 12. Operadores Unários de Antecessor e Sucessor — Elabore um programa em C que
receba um número inteiro do usuário e, utilizando exclusivamente os operadores unários de
incremento (++) e decremento (--), exiba o seu antecessor e o seu sucessor no console,
justificando sua implementação lógica.*/

#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int antecessor = numero, sucessor = numero;
    
    --antecessor;
    ++sucessor;

    printf("O antecessor de %d é %d e o sucessor de %d é %d.\n", numero, antecessor, numero, sucessor);
    
    return 0;
}