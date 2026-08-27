/* Questão 18. Desenvolva um programa completo em C que declare variáveis de ponto flutuante para os
seguintes itens e seus preços unitários: Lápis (4.88), Borrachas (234.54), Canetas (42.04), Cadernos
(8.00) e Fitas (13.05). Utilize a função printf() para exibir esses dados no console em formato de tabela,
alinhados à direita, com largura mínima de campo de 12 caracteres e precisão de duas casas decimais,
conforme a saída abaixo:

Lapis 4.88
Borrachas 234.54
Canetas 42.04
Cadernos 8.00
Fitas 13.05 */

#include <stdio.h>

int main(){
    float lapis = 4.88;
    float borrachas = 234.54;
    float canetas = 42.04;
    float cadernos = 8.00;
    float fitas = 13.05;

    printf("Lápis %12.2f\nBorrachas %12.2f\nCanetas %12.2f\nCadernos %12.2f\nFitas %12.2f\n", lapis, borrachas, canetas, cadernos, fitas);
    return 0;
}