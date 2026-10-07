/*Questão 21. Jogo de Adivinhação com Letras Aleatórias e Dicas (rand()) — Desenvolva um jogo
interativo em C que sorteie uma letra minúscula aleatória entre 'a' e 'z' usando a função rand() % 26 +
'a' da biblioteca <stdlib.h>. O programa deve pedir para o usuário adivinhar a letra. A cada tentativa
errada, o programa deve informar se a letra secreta vem antes ou depois da letra digitada no alfabeto.
Quando o usuário acertar, exiba uma mensagem de parabéns e o total de tentativas.*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    char letra_secreta, tentativa_usuario;
    int tentativas = 0;

    letra_secreta = rand() % 26 + 'a';
    printf("%c\n", letra_secreta);

    do {
        printf("Digite uma letra entre 'a' e 'z': ");
        scanf(" %c", &tentativa_usuario);

        if (tentativa_usuario < letra_secreta) {
            printf("A letra secreta vem depois de '%c'.\n", tentativa_usuario);
        } else if (tentativa_usuario > letra_secreta) {
            printf("A letra secreta vem antes de '%c'.\n", tentativa_usuario);
        } else {
            printf("Parabéns, você acertou a letra secreta em %d tentativas!\n", tentativas);
        }

        tentativas++;
    } while (tentativa_usuario != letra_secreta);

    return 0;
}