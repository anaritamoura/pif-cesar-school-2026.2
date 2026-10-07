/*Questão 07. Contagem Progressiva em Três Versões (for, while, do-while) — Desenvolva três
programas independentes (ou três funções no mesmo arquivo) que mostrem na tela os números
inteiros de 0 a 100 em ordem crescente. A primeira versão deve utilizar obrigatoriamente o laço for, a
segunda versão a estrutura while, e a terceira versão a estrutura do-while. Em comentário ao final do
código, responda: qual das três estruturas é a mais adequada para este caso e por quê?*/


#include <stdio.h>
#include <windows.h>

int main(){

    int numero = 0;

    for ( ; numero <= 100; numero++) {
        printf("%d\n", numero);
    }

    numero = 0;

    while (numero <= 100) {
        printf("%d\n", numero);
        numero += 1;
    }
    
    numero = 0;

    do {
        printf("%d\n", numero);
        numero++;
    } while (numero <= 100);

    return 0;
}
// O for é mais adequado pois já sabemos o número de repetições (100).