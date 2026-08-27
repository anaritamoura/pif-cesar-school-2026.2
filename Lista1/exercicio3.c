/*Questão 03. O uso correto de comentários é fundamental para documentar e tornar o código
compreensível. Com base nos tipos de comentários estudados (múltiplas linhas e linha única), escreva
um programa simples em C e documente-o de forma clara. Siga o modelo de formatação de código
ilustrado abaixo:

/* Esse programa mostra o uso de comentários em várias linhas
* e mostra também o uso de comentários em uma única linha
*
* Primeiro programa
***************************************************************/
/* Prog1.C */

//#include <stdio.h> /* Para printf() */
//#include <stdlib.h>/* Para system() */
//int main() /* Função main */
//{ /* início do corpo da função main */
//printf("Primeiro programa."); /* Chamada à função printf */
//system("PAUSE"); /* Chamada à função system */
//return 0;
//}/* Fim do corpo da função main */


/* Este programa mostra o uso de comentário em várias linhas e mostra também o uso de comentários em uma única linha.
*
* Primeiro programa
***************************************************************/
/*Prog1.C*/

#include <stdio.h> /* Para o printf() */

int main() /* Função main */
{ /* Início do corpo da função main */
    float euler = 2.71828;
    printf("O valor da constante de Euler é %.3f.\n", euler); /* Chamada à função printf */
    return 0;
} /* Fim do corpo da função main */