/*Questão 10. Resto da Divisão (`%`) e Decomposição do Tempo — Desenvolva um programa em C
que receba uma quantidade inteira de segundos informada pelo usuário. O programa deve calcular e
exibir o tempo equivalente decomposto em Horas, Minutos e Segundos restantes (Exemplo: 3665
segundos correspondem a 1 hora, 1 minuto e 5 segundos).*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int tempo, horas, minutos, segundos, resto_minuto;

    printf("Digite o número total de segundos: ");
    scanf("%d", &tempo);

    segundos = tempo % 60;
    resto_minuto = (tempo - segundos) / 60;
    minutos = resto_minuto % 60; 
    horas = tempo / 3600;
    
    printf("%d correspondem a %d horas, %d minutos e %d segundos.\n", tempo, horas, minutos, segundos);

    return 0;
}