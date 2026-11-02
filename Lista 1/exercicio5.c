/* Questão 05. Analise o seguinte trecho de código em C. Sob a perspectiva do padrão ANSI C, o
programa está correto para compilação e execução imediata? Caso negativo, descreva quais elementos
cruciais e diretivas estão faltando no código abaixo:

main()
{
    printf("Linguagem C");
    system("pause");
} */


/* Está faltando a diretiva #include <stdio.h> para rodar o printf() */
/* Está faltando a diretiva #include <stdlib.h> para rodar o system("PAUSE") */

main() /* Aqui falta o int de inicialização */
{
    printf("Linguagem C");
    system("pause"); /* Aqui o pause deve ser em maiúsculo PAUSE para o Lynux ler */
    /* Aqui falta o return 0; */
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Linguagem C\n");
    system("PAUSE");
    return 0;
}