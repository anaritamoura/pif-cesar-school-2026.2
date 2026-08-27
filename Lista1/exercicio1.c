/*Questão 01. Escreva um programa completo em C que declare uma variável do tipo inteiro, 
atribua um valor a ela (como o seu ano de nascimento ou o ano letivo corrente) e a imprima 
na tela junto com uma mensagem de texto explicativa utilizando a função printf() com o 
especificador de formato correspondente.*/

#include <stdio.h>

int main(){
    int ano_atual = 2026;

    printf("O ano corrente é %d.\n", ano_atual);
    return 0;
}