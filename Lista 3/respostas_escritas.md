Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços — A linguagem C disponibiliza três estruturas de controle para execução iterativa de código: for, while e do-while. Analise o funcionamento dessas estruturas e responda:

a) Qual é a diferença essencial entre as estruturas while e do-while em relação ao número
mínimo de execuções do bloco de código e ao momento em que a condição de teste é avaliada?
Do-while garante que o código seja executado pelo menos uma vez, ao fim da primeira execução ocorre o teste, caso seja verdadeiro, continua repetindo o código. Já o while testa logo no início e, caso a condição seja verdadeira, ele executa o código. Ou seja, do-while roda pelo menos uma vez e testa a condição no fim e while pode ser que nem execute pois já testa a condição no início.

b) Em que situações de programação cada uma das três estruturas (for, while e do-while) se
apresenta como a escolha mais elegante, legível e adequada?
No caso de conhecimento prévio do número de repetições, usa-se for. While usa quando não se sabe o número de repetições previamente e sua condição de teste é realizada antes de executar o código. Do-while garante que o trecho de código seja executado pelo menos uma vez antes que a condição de teste seja executada.

c) Análise de código: O trecho 'while (condicao);' (com ponto-e-vírgula ao final) é um erro de
compilação ou um erro de lógica? Explique detalhadamente o que ocorre durante a execução
se condicao for verdadeira.
Esse é um erro de lógica, pois o laço de repetição fica vazio, e é repetido infinitas vezes caso a condição seja verdadeira.



Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco — Um estudante escreveu o programa abaixo com o intuito de calcular a soma dos quadrados dos números inteiros de 1 a 9, mas encontrou falhas durante a compilação e execução:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 1; i < 10; i++) {
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

a) Por que o compilador emitirá um erro de sintaxe/declaração na instrução printf final?
Porque a variável soma existe apenas dentro do bloco de código do for e o printf() está fora desse bloco, portanto, não a reconhece.

b) Mesmo que a instrução printf fosse movida para dentro do bloco do laço for, por que o valor impresso para soma estaria conceitualmente incorreto a cada iteração?
Porque a variável soma será incrementada apenas com o valor daquela "rodada" do for. Ou seja, ela não acumula os valores anteriores, ela zera e inicia o cálculo novamente a cada iteração.

c) Apresente o código corrigido e explique o conceito de visibilidade, escopo de bloco e tempo de vida de variáveis na linguagem C.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

Resposta: Visibilidade consiste em que parte do código aquela variável é acessível, por exemplo, no código acima, a variável soma só é visível dentro do escopo do for. Escopo de bloco é todo bloco de código, ele é delimitado por {}. O tempo de vida de variável é o tempo que essa variável existe na memória. Quando o escopo é finalizado, ela deixa de existir.



Questão 03. Flexibilidade do Laço for e Omissão de Expressões — A sintaxe do laço for em C consiste em três expressões separadas por ponto-e-vírgulas: inicialização, teste e incremento. Analise os três trechos de código abaixo:

// Trecho A: Incremento por divisão
for (a = 36; a > 0; a /= 2)
    printf("%d\t", a);

// Trecho B: Omissão de inicialização e incremento
for (; (ch = getch()) != 'X' ;)
    printf("%c", ch + 1);

// Trecho C: Omissão completa de expressões
for (;;)
    printf("Laço Infinito\n");

a) Qual é a sequência exata de valores impressos no console ao executar o Trecho A?
36 18 9 4 2 1

b) Explique o comportamento do Trecho B. O que faz a operação 'ch + 1' e por que os parênteses em '(ch = getch())' são estritamente necessários antes da comparação com 'X'?
Primeiramente, ch é um caractere, cada caractere tem um índice na tabela ASCII. Portanto, quando o usuário insere um caractere, o programa soma + 1 a esse índice e imprime o caractere desse novo índice. Os parênteses são necessários por causa da ordem de precedência, != tem precedência a =, nesse caso o teste != 'X' seria realizado antes da atribuição.

c) Como o programa pode interromper a execução do laço infinito do Trecho C de forma programática sem forçar o encerramento do processo pelo sistema operacional?
Ao digitar 'X' o programa é interrompido.



Questão 04. Comandos de Desvio de Fluxo: break vs. continue — Os comandos break e continue são instruções de controle de desvio que alteram a execução normal de laços de repetição:

a) Descreva a ação exata executada pelo programa quando o comando break é acionado dentro de um laço for ou while.
O código é interrompido imediatamente e finalizado.

b) Descreva a ação exata executada pelo programa quando o comando continue é acionado dentro de um laço for. Qual das três expressões do cabeçalho do for é executada imediatamente após o continue?
Continue faz com que aquele trecho de código seja ignorado, passando a execução para o próximo trecho de código, seguindo para o incremento.

c) Em uma estrutura de laços aninhados (um laço for interno dentro de outro laço for externo), qual laço é interrompido quando a instrução break é executada dentro do laço interno?
O laço interno.



Questão 05. Operador Vírgula e Múltiplas Variáveis de Controle — O operador vírgula (,) permite agrupar múltiplas expressões em um único comando, garantindo a avaliação da esquerda para a direita. Observe o trecho abaixo:

int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}

a) Exatamente quantas iterações o laço acima executará antes de ser encerrado?
O laço executará a iteração 5 vezes.

b) Escreva a saída exata produzida pelo comando printf em cada uma das iterações executadas.
i = 0, j =  10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c) Reescreva a lógica deste mesmo laço utilizando obrigatoriamente a estrutura while.

#include <stdio.h>
#include <windows.h>

int main() {
    int i = 0, j = 10;

    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }
}



Questão 06. Laço Sem Corpo e Incremento Pós-fixado — Analise o trecho de código abaixo que utiliza um laço de repetição com corpo vazio:

int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);

a) Qual é o valor final da variável x que será impresso pela instrução printf?
O valor final da variável x impresso é 6. 

b) Explique passo a passo a sequência de incrementos e comparações lógicas que ocorrem durante a execução do teste 'x++ < 5'.
O primeiro teste ocorre em x = 0 < 5, isso sendo verdadeiro, x recebe o incremento e passa a ser 1. O segundo teste ocorre em x = 1 < 5, que também é verdadeiro, então x é incrementado com 1, passando a ser 2. O terceiro teste ocorre em x = 2 < 5, x é incrementado com 1 e vira 3. O seguite teste é x = 3 < 5, x é incrementado e torna-se 4. O quinto teste ocorre em x = 4 < 5, x é incrementado com 1, passando a ser 5. O último teste ocorre em x = 5 < 5 que é falso, porém x é incrementado com 1 e vira 6.

c) Reescreva esse código de forma explícita e clara (sem corpo vazio), mantendo exatamente o mesmo resultado final de x.

#include <stdio.h>
#include <windows.h>

int main() {
    int x = 0;

    while (x < 5) {
        x++;
    }
    printf("Valor final de x = %d\n", x);
}
