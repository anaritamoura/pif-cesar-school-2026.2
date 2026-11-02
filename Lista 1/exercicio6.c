/* Questão 06. Identifique e liste todos os erros de sintaxe (que violam as regras da linguagem C) e de
lógica contidos no programa abaixo:

main()
{
    int a=1; b=2; c=3:
    printf("0s números são: %d%d%d\n, a, b, c, d);
    system("pause");
} */


/* Está faltando a diretiva #include <stdio.h> para rodar o printf() */
/* Está faltando a diretiva #include <stdlib.h> para rodar o system("PAUSE") */

main() /* Aqui falta o int de inicialização */
{
    int a=1; b=2; c=3: /* Separa-se com , variáveis declaradas na mesma linha de código e finaliza com ; */
    printf("0s números são: %d%d%d\n, a, b, c, d); /* É necessário fechar as ", separar os %d com espaço e apagar a variável d, pois ela não existe */
    system("pause"); /* pause deve ser em caixa alta PAUSE para o Lynux ler */
    /* Aqui faltou o return 0; */
}

#include <stdio.h>

int main()
{
    int a=1, b=2, c=3;
    printf("Os números são: %d %d %d\n", a, b, c);
    return 0;
}