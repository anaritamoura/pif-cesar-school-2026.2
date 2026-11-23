/*Questão 19. Contagem Regressiva Recursiva — Crie um procedimento recursivo void
contagem(int n) que imprima os números de n até 1 e, ao final, a mensagem "Fogo!". Na
main(), leia n, valide que ele é positivo e chame o procedimento. Em seguida, crie uma
segunda versão que imprima de 1 até n, e explique em comentário o que muda na posição da
chamada recursiva em relação ao printf.*/

#include <stdio.h>
#include <windows.h>

void contagem(int n);
void reverso(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Insira um número positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O número deve ser positivo.\n");
    } else {
        contagem(numero);
        reverso(numero);
    }

    return 0;
}

//Imprime o número e depois chama a recursiva
void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
    } else {
        printf("%d\n", n);
        contagem(n - 1);
    }
}

//Chama a recursiva até o fim e volta imprimindo o número
void reverso(int n) {
    if (n == 0) {
        printf("Fogo!\n");
    } else {
        reverso(n - 1);
        printf("%d\n", n);
    }
}