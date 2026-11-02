Questão 07. Descreva a saída exata (incluindo quebras de linha e tabulações) que será impressa no
console por cada uma das seguintes instruções independentes do printf():

a) printf("\n\tBom dia! Shirley.");
saída:

    Bom dia! Shirley. (o \n pula uma linha e o \t cria uma tabulação)

b) printf("Você já tomou café? \n");
saída:
Você já tomou café? 
                   (aqui dá um espaço após a frase e o \n pula uma linha)

c) printf("\n\nA solução não existe!\nNão insista.");
saída:


A solução não existe!
Não insista. (os dois \n no início pula duas linhas, o \n entre as frases pula mais uma)

d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
saída:
Duas    linhas  de  saída   ou  uma? (o \t cria uma tabulação entra cada palavra)

e) printf("%s\n%s\n%s\n", "um", "dois", "três");
saída:
um
dois
três
     (ao fim de cada palavra pula-se uma linha pelo \n)



Questão 08. Explique detalhadamente o comportamento do programa abaixo quando executado no
console. Apresente qual será a saída exata gerada pelas sequências de escape utilizadas no formato de
controle:

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n\t\"Primeiro programa\"");
    system("PAUSE");
    return 0;
}

saída:

    "\Primeiro programa\" (o \n no início pula uma linha, o \t cria uma tabulação)



Questão 09. Determine a saída exata do programa a seguir e explique como o compilador C
interpreta os argumentos do tipo caractere simples ('\n', '\t', '\"') passados para o modificador %c:

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
    printf("%c", "\"");
    system("PAUSE");
    return 0;
}

saída:

    "Primeiro programa" (o \n pula uma linha, o \t cria uma tabulação e o \" cria as áspas duplas como string, porém para %c representar o caracter ", ele deveria ter sixdo escrito com áspas simples '\"' e não com áspas duplas. No entanto, ele ainda sai no console como áspas duplas porque criou-se uma string, um texto. Como não tem \n no fim do primeiro printf, as áspas duplas, em string, do segundo printf sai logo em seguida do primeiro printf)



Questão 10. A Linguagem C é conhecida por ser sensível a caixa alta e baixa (case sensitive). Explique
o significado prático desse conceito. Identificadores como 'peso', 'Peso' e 'PESO' representam a mesma
variável na memória? Assinale a alternativa correta e complemente com sua justificativa:

a) Depende exclusivamente da implementação do compilador utilizado no sistema.
b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).
c) Falso (letras maiúsculas e minúsculas são interpretadas como equivalentes pelo compilador).

Resposta: b - C é case sensitive, ou seja, variáveis em caixa alta ou em caixa baixa representam diferentes lugares de memória.



Questão 11. Para cada um dos valores constantes descritos na tabela abaixo, indique a classificação
correta (por exemplo: constante inteira decimal, constante de ponto flutuante, constante de caractere,
constante string ou sequência de escape) e o tipo de dado base correspondente em C (como char, int,
float, double):

Constante Classificação (Tipo de Constante) Tipo Base em C
\r [ Sequência de Escape ] [ char ]
2130 [ Sequência Inteira Decimal ] [ int ]
-123 [ Sequência Inteira Decimal ] [ int ]
33.28 [ Constante de Ponto Flutuante ] [ double ]
0XFA [ Constante Inteira Hexadecimal ] [ int ]
0101 [ Constante Inteira Octal ] [ int ]
2.0e30 [ Constante de Ponto Flutuante ] [ double ]
\xDC [ Sequência de Escape ] [ char ]
'\"' [ Constante de Caractere ] [ char ]
'\\' [ Constante de Caractere ] [ char ]
'F' [ Constante de Caractere ] [ char ]
0 [ Constante Inteira Decimal ] [ int ]
'\0' [ Constante de Caractere ] [ char ]
"F" [ Constante String ] [ char[] ]
-4567.89 [ Constante de Ponto Flutuante ] [ double ]



Questão 12. A declaração de variáveis define o tipo e o identificador de cada espaço reservado na
memória. Analise cada uma das declarações na tabela a seguir, preencha o seu status (Correto ou
Incorreto) e, caso seja incorreto, justifique detalhadamente o erro sintático:

Instrução Status (C/I) Justificativa Teórica
a) int a; [ Correto  ] [ - ]
b) float b; [ Correto ] [ - ]
c) double float c; [ Incorreto ] [ Ou é double, ou é float, não pode os dois tipos primitivos ]
d) unsigned char d; [ Correto ] [ - ]
e) unsigned e; [ Correto ] [ - ]
f) long float f; [ Incorreto ] [ não podemos usar o modificador de tamanho long com o tipo primitivo float, apenas int e double ]
g) long g; [ Incorreto ] [ é preciso determinar o tipo de g, int out double ]
h) long double h; [ Correto ] [ - ]



Questão 13. No desenvolvimento de programas em C, o que são conceitualmente os arquivos de
inclusão (headers com extensão .h)?

a) São bibliotecas pré-compiladas em formato binário contendo funções estruturadas.
b) São utilitários do sistema que realizam a linkedição dos programas.
c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e
tipos.
d) São módulos de controle executados diretamente pelo microprocessador em tempo de execução.

Resposta: b - os arquivos de inclusão são bibliotecas padrões de C, como o <stdio.h>, ou bibliotecas criadas por outros programadores. Nelas estão funções que o programador pode usar sem precisar criar novas funções.



Questão 14. Qual é o papel e o objetivo principal do programador ao incluir arquivos de cabeçalho
(como <stdio.h>)?

a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o
código-fonte.
b) Linkeditar os arquivos binários do projeto automaticamente.
c) Executar e testar as saídas de vídeo diretamente no console de depuração.
d) Converter automaticamente o código-fonte C em arquivos executáveis (.EXE).

Resposta: a - Ao usar o #include, o programador está importando uma biblioteca, as funções dessa biblioteca serão usadas ao decorrer do código, portanto, é necessário importá-las logo no início do código.



Questão 15. A diretiva #include, amplamente utilizada no topo dos arquivos C, é classificada como:

a) Uma instrução C nativa (compilada diretamente em linguagem de máquina).
b) Uma instrução específica de linguagens de programação orientadas a objetos.
c) Uma diretiva especial para o pré-processador C, executada antes da compilação.
d) Um objeto de classe de armazenamento dinâmico na memória heap.

Resposta: c - #include é uma diretiva para importar bibliotecas.



Questão 16. As diretivas de pré-processador em C (todas iniciadas com o caractere #) são lidas e
interpretadas pelo:

a) Linkeditor do sistema no momento de montagem do arquivo executável final.
b) Microprocessador diretamente em tempo de execução.
c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).
d) Depurador integrado da IDE durante os testes de execução.

Resposta: c - As diretivas não são instruções da linguagem C, são comandos para o pré-processador executá-los antes da compilação.



Questão 17. Dentre as instruções de escrita abaixo, quais estão sintaticamente corretas? O que essas
variações demonstram sobre a flexibilidade de espaçamento e formatação do compilador C?

a) printf ( "Primeiro programa" ); - Correta
b) printf( "Primeiro programa" ); - Correta
c) printf("Primeiro programa"); - Correta
d) printf "Primeiro programa" ; - Incorreta

Resposta: C não deixa de processar por conta dos espaços entre o nome da função e o ( ou entre os parênteses e a string, por exemplo, ou ao redor dos operadores. No entanto, as boas práticas indicam que não coloque espaços no printf ou retire os espaços ao redor dos operadores para ajudar na legibilidade e organização do código.
