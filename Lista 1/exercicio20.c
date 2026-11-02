/* Questão 20. Caracteres gráficos baseados na tabela ASCII estendida (Codepage 437) podem ser
usados para desenhar molduras e caixas de diálogo na tela de modo console. Desenvolva um programa
em C que produza uma moldura simples com exatamente 4 caracteres de largura por 4 de altura. 

Dica: utilize constantes de caracteres em hexadecimal para representar os cantos e as retas
horizontais/verticais:

Cantos Superiores: Esquerdo = \xC9, Direito = \xBB
Cantos Inferiores: Esquerdo = \xC8, Direito = \xBC
Linha Horizontal: \xCD, Linha Vertical: \xBA */

#include <stdio.h>

int main(){
    printf("\xC9\xCD\xCD\xBB\n\xBA  \xBA\n\xBA  \xBA\n\xC8\xCD\xCD\xBC\n");
    return 0;
}