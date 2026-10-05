Questão 01. Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C (Cap. 1) — A linguagem
C diferencia rigorosamente letras maiúsculas e minúsculas na formação de nomes de identificadores e
palavras-chave. Com base nessa premissa, analise os pares de identificadores abaixo e assinale a
alternativa correta:

a) Os nomes de variáveis 'numero' e 'Numero' referenciam o mesmo endereço de memória.
b) A palavra-chave 'Main' com 'M' maiúsculo é reconhecida pelo compilador como ponto de entrada válido.
c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente distintos para o compilador.
d) A sensibilidade a caixa baixa/alta depende exclusivamente do sistema operacional utilizado na compilação.

Resposta: c - por C ser case sensitive, variáveis em diferentes caixas, apontam para diferentes endereços de memória.



Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)
— Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com
quebras de linha e tabulações, mas enfrentou erros de compilação. Identifique os três erros
sintáticos/estruturais presentes no código:

#include <stdio.h>
#include <stdlib.h>;
int Main()
{
    int idade = 20;
    printf( A idade do aluno eh: %d anos.. , idade);
    cout << endl;
    system("PAUSE");
    return 0;
}

Resposta: O primeiro erro é o ponto e vírgula logo após a diretiva da biblioteca stdlib, não se coloca nada após a inclusão de bibliotecas. O segundo erro é a função main() ser escrita com a primeira letra maiúscula. Em C, as funções são escritas em caixa baixa. O terceiro erro é a falta de áspas no início do printf() e no fim da string. As áspas são necessárias para transformar o conteúdo do printf() antes da vírgula em string e ser possível a leitura do %d. Há ainda um quarto erro, a inclusão do cout << endl, ele não pertence à C e sim à C++.



Questão 03. Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2) — Os
operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser
combinados com operadores aritméticos. Determine os valores finais de a, b, c e d após a execução da
sequência abaixo:

int a = 2, b = 4, c = 5, d = 10;

a += b + c;
b + c = 9
a += 9
a = 11
Valor final de a = 11.

b *= c = d - 2;
d - 2 = 8
c = 8
b *= 8
b = 32
Valores finais de b = 32, e c = 8.

d %= a + 3;
a + 3 = 5
a = 5
d %= 5
d = 10 % 5
d = 0
Valor final de d = 0.

a += b += c += 5;
c += 5 = 10
c = 10
b += 10 = 14
b = 14
a += 14 = 16
a = 16
Valores finais de a 16, b = 14, c = 10.



Questão 04. Avaliação de Expressões Lógicas, Relacionais e Precedência (Cap. 2) — Considere as
variáveis inteiras i = 2, j = 3, k = 0 e as variáveis de ponto flutuante x = 2.5, y = 5.0. Avalie cada
expressão abaixo e determine seu resultado lógico em C (1 para Verdadeiro, 0 para Falso):

int i = 2, j = 3, k = 0;
float x = 2.5, y = 5.0;

a) i < j + 2 => Resultado: Verdadeiro
j + 2 = 5
i < 5 = V

b) 2 * i - 5 <= j - 4 => Resultado: Verdadeiro
2 * i = 4
4 - 5 = -1
j - 4 = -1
-1 <= -1 = V

c) !k && (x + y >= 7.5) => Resultado: Verdadeiro
2.5 + 5.0 = 7.5
7.5 >= 7.5 = V
!k = !0 = V
V E V = V

d) !(i == j) || (y / x == 2.0) => Resultado: Verdadeiro
2 === 3 = F
5.0 / 2.5 == 2.0 = V
!F = V
V OU V = V

e) i == 2 && j == 4 || k == 0 => Resultado: Verdadeiro
2 == 2 = V
3 == 4 = F
0 == 0 = V
V E F = F
F OU V = V



Questão 05. Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3) — As
estruturas de repetição permitem a execução iterativa de instruções em C. Analise as características de
for, while e do-while e responda fundamentadamente:

a) Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento do teste condicional?
Do-while garante que o código seja rodado pelo menos uma vez, após a primeira execução é que se verifica a condição. Já while verifica logo no início, se for verdadeiro, o código roda, caso contrário, o código não roda nem uma vez sequer.

b) Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?
Usa-se for quando a quantidade de repetições for conhecida, por exemplo, com listas. For é uma estrutura de repetição mais robusta que while e do-while.

c) O trecho de código 'while (condicao);' (com ponto-e-vírgula ao final do cabeçalho) constitui um erro de compilação ou de lógica? O que acontece se condicao for verdadeira?
É um erro de lógica. Caso a condição seja verdadeira, o while repete o corpo do laço que está vazio infinitamente. O ponto e vírgula fecha o código logo após a condição, fazendo com que o próximo trecho de código não pertença ao laço de repetição.



Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3) — Analise o
programa abaixo que calcula a soma acumulada de quadrados dentro de um laço for contendo um
comando de desvio e controle de escopo interno:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

a) Por que o compilador emitirá um erro de compilação na instrução printf final?
Porque a variável soma existe apenas dentro do laço for e o printf que está tentando acessá-la está fora desse bloco.

b) Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e break no fluxo?
As iterações executadas vão até o valor de i ser 7, pulando a iteração de 5, quando i é 8, o laço para. Continue faz com que o código passe para o próximo trecho de código, sem alteração alguma, break para o código imediatamente, interrompendo a execução ali mesmo.

c) Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no console.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, soma = 0;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

saída:
    "Soma final = 115"
