/* Questão 27. Escreva um programa em C que solicite ao usuário (usando a função scanf()) um valor
inteiro correspondente a um intervalo de tempo em segundos. O programa deve processar esse dado,
calcular e exibir o equivalente formatado em Horas, Minutos e Segundos restantes (Exemplo: 3665
segundos correspondem a 1 hora, 1 minuto e 5 segundos). */


#include <stdio.h>

int main(){
    int intervalo;
    int horas, minutos, segundos;

    printf("Digite um intervalo de tempo em segundos: \n");
    scanf("%d", &intervalo);

    horas = intervalo / 3600;
    minutos = (intervalo % 3600) / 60;
    segundos = minutos % 60;

    printf("%d segundos correspondem a %d hora, %d minutos e %d segundos.\n", intervalo, horas, minutos, segundos);
    return 0;
}