/*Questão 09. Acumulador de Valores Reais com Sentinela de Parada Negativa — Faça um
programa que permita ao usuário fornecer uma sequência indeterminada de valores reais positivos. O
programa deve parar de solicitar valores no momento em que o usuário fornecer um valor negativo
(que funcionará como sentinela de parada). Ao final, o programa deve exibir a quantidade de valores
válidos digitados, a soma total e a média aritmética (garantindo que o valor negativo de parada não
entre nos cálculos).*/


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float numero, soma = 0.0, media = 0.0;
    int contador = 0;
    
    do {
        printf("Digite um valor real positivo: ");
        scanf("%f", &numero);
        
        if (numero > 0.0) {
            contador += 1;
            soma += numero;
        }    
    } while (numero > 0.0);
    
    media = soma / (contador);

    printf("Você digitou %d números válidos, a soma total desses números é %.2f e a média aritmética é %.2f.\n", contador, soma, media);

    return 0;
}