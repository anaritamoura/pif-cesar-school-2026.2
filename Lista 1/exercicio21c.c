/* Questão 21. Desenvolva três versões independentes de programas em C para produzir no console a
saída de texto abaixo. A primeira versão deve usar uma única chamada de printf(); a segunda deve usar
exatamente duas instruções de impressão independentes; e a terceira deve desenhar as frases
emolduradas utilizando caracteres gráficos de caixa:

Treinamento em programação.
Linguagem C. 

Cantos Superiores: Esquerdo = \xC9, Direito = \xBB
Cantos Inferiores: Esquerdo = \xC8, Direito = \xBC
Linha Horizontal: \xCD, Linha Vertical: \xBA */

#include <stdio.h>

int main(){
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA Treinamento em programação.   \xBA\n");
    printf("\xBA Linguagem C                   \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    return 0;
}