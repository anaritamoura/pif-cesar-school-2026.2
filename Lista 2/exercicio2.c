#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char letra;
    printf("Digite uma letra: ");

    do {
        letra = getchar();
    } while (letra == '\n');
    printf("A letra que você digitou foi \"%c\".\n", letra);
    return 0;
}