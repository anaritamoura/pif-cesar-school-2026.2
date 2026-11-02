Questão 01. Avaliação de Expressões Condicionais e Atribuição vs. Igualdade — Em relação à sintaxe e semântica do comando if na Linguagem C, responda analiticamente:

a) Qual é o efeito prático de escrever if (x = 0) em vez de if (x == 0)? Explique o que acontece com a variável x e qual bloco de código será executado.
Ao escrever "if (x = 0)" estamos apenas atribuindo um valor à variável x. C entende '0' como falso e qualquer número diferente de '0' como verdadeiro. Portanto, a condição será '0', falsa, o bloco de código relacionado ao 'if' não é executado.
Já ao escrever "if (x == 0)" estamos comparando o valor da variável x ao valor numérico '0', caso a variável x seja 0, o bloco de código relacionado ao 'if' será executado, caso contrário, esse bloco não é executado. Em um caso temos uma atribuição, já dando o valor à variável, e, no outro temos uma comparação direta.

b) Como a Linguagem C interpreta valores numéricos inteiros ou reais dentro da condição do comando if? O que significa um resultado ser avaliado como 'falso' ou 'verdadeiro'?
Como dito na questão acima, o valor '0' é considerado 'falso' em C e, qualquer valor diferente disso, será verdadeiro, independente de ser inteiro, float ou double.  

c) Analise a instrução if (x = -5) e determine se o bloco de código associado será executado ou ignorado. Justifique sua resposta com base no padrão ANSI C.
O código será executado pois '-5' é diferente de '0', sendo verdadeiro.



Questão 02. Associação do Comando else e Aninhamento de Decisões — Analise o trecho de código C abaixo que contém estruturas condicionais aninhadas:

int x = 15, y = 5;
if (x > 10)
  if (y > 10)
    printf("Opção A\n");
else
  printf("Opção B\n");

a) Qual mensagem será impressa no console ao executar o código acima? Justifique por que a Opção B é ou não exibida.
A mensagem impressa será "Opção B". Ela é exibida porque, em expressões sem {}, o 'else' se relaciona com o 'if' sem 'else' mais próximo.

b) Qual é a regra oficial da Linguagem C para associar uma cláusula else a um comando if em códigos sem chaves de bloco?
Como dito na resposta acima, o 'else' se relaciona com o 'if' sem 'else' mais próximo quando o código não tem {}.

c) Reescreva o código acima utilizando chaves { } para garantir explicitamente que a Opção B seja impressa apenas quando x <= 10.

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 15, y = 5;

    if (x > 10) {
        if (y > 10) {
            printf("Oção A\n");
        }
    } else {
        printf("Opção B\n");
    }

    return 0;
}



Questão 03. Operador Condicional Ternário vs. Estrutura if-else — O operador condicional ternário (? :) é uma forma concisa de tomada de decisão. Observe a instrução abaixo:

media = (nota1 + nota2) / 2.0;
situacao = (media >= 7.0) ? 'A' : 'R';

a) Explique detalhadamente o funcionamento da segunda linha de código e qual valor será armazenado na variável situacao se media = 6.8.
Se "media" for >= 7.0, então situacao = 'A', caso "media" for menor que 7.0, situacao = 'R'. Como 6.8 é menor que 7.0, situacao será 'R'.

b) Reescreva o trecho de código acima utilizando obrigatoriamente a estrutura tradicional if-else.

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota1 = 6.6;
    float nota2 = 5.0;
    float media;
    char situacao;

    media = (nota1 + nota2) / 2.0;

    if (media >= 7.0) {
        situacao = 'A';
    } else {
        situacao = 'R';
    }

    printf("%c", situacao);

    return 0;
}

c) O operador ternário pode substituir qualquer estrutura if-else na Linguagem C? Explique as limitações do operador ternário em relação a blocos com múltiplos comandos.
Não. O operador ternário só pode ser utilizado quando existe um if-else simples, com apenas uma condição verdadeira e uma condição falsa e apenas um comando.



Questão 04. Seleção Múltipla com switch-case e Efeito Fall-Through — O comando switch é utilizado para seleção entre múltiplas alternativas. Observe o programa a seguir:

#include <stdio.h>
int main() {
  int codigo = 2;
  switch (codigo) {
    case 1:
      printf("Bronze\n");
    case 2:
      printf("Prata\n");
    case 3:
      printf("Ouro\n");
      break;
    default:
      printf("Sem Medalha\n");
  }
  return 0;
}

a) Escreva a saída exata gerada no terminal ao executar este programa. Explique por que ocorreu mais de uma impressão.
Saída:
Prata
Ouro
Isso acontece porque o case2 não possui um 'break', então o código vai para o próximo case, que é o case3, e executa.

b) Qual é o papel da instrução break dentro de um bloco switch-case e qual é o nome do fenômeno que ocorre quando ela é omitida?
O nome do fenômeno é "Efeito Fall-Through", o break serve para justamente parar a execução do código naquele ponto.

c) Quais tipos de dados de variáveis ou expressões podem ser utilizados como argumento no comando switch (expressão)? É permitido usar float ou double? Justifique.
Switch usa valores inteiros exatos, então double ou float não funcionam com o comando. 



Questão 05. Avaliação de Curto-Circuito em Operadores Lógicos — Os operadores lógicos (&& e ||) realizam a avaliação de curto-circuito (short-circuit evaluation). Considere as variáveis inteiras a = 0, b = 5, c = 10 e analise o código:

if (a != 0 && ++b > 5)
  c += 10;
else
  c -= 2;
printf("a = %d, b = %d, c = %d\n", a, b, c);

a) Qual será a saída exata impressa pelo comando printf? Observe se o incremento ++b foi executado ou ignorado.
Saída:
a = 0, b = 5, c = 8
O incremento ++b não foi executado porque precisava-se que a fosse diferente de 0.

b) Explique o conceito de avaliação de curto-circuito para o operador lógico E (&&) e para o operador lógico OU (||).
Operação curto-circuito é quando o programa não precisa avaliar as duas condições para determinar se ela será verdadeira. Por exemplo, para && ser verdadeira ambas precisam ser verdade, se a primeira for falsa, ele não avalia a segunda, o resultado já será falso. No caso de ||, basta que apenas uma seja verdadeira, então se a primeira já for verdade, ele não avalia a segunda, o resultado já é verdadeiro.

c) Qual seria o valor final de b e c se a condição fosse alterada para if (a == 0 || ++b > 5)?
b = 7, c = 20



Questão 06. Construções else-if e Análise Lógica de Intervalos — Um programador escreveu o código abaixo para classificar a faixa etária de um indivíduo, mas o programa apresenta comportamento inconsistente para certas idades:

int idade = 25;
if (idade >= 60)
    printf("Idoso\n");
if (idade >= 18)
    printf("Adulto\n");
if (idade >= 12)
    printf("Jovem\n");
else
    printf("Criança\n");

a) Qual será a saída do programa para idade = 65? Explique por que múltiplas mensagens são exibidas.
Saída:
Idoso
Adulto
Jovem
Todas as condições serão avaliadas de acordo com a maneira que o código foi escrito. Como 65 é maior que 60, é maior que 18 e é maior que 12, todas essas condições são executadas, não há uma parada ao validar alguma delas. A condição 'Criança' não é executada porque ela se associa apenas com o último if, e, como esse if é verdadeiro, o else não é executado. 

b) Qual é a diferença fundamental de execução entre uma sequência de comandos if independentes e uma cadeia else-if?
A cadeia else-if impede que todas as condições sejam analisadas e executadas, assim que a primeira for validada como verdadeira, o programa para ali.

c) Reescreva o programa utilizando a estrutura elegante e correta else-if para garantir que apenas uma categoria seja impressa.

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade = 25;

    if (idade >= 60) {
        printf("Idoso\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    } else if (idade >= 12) {
        printf("Jovem\n");
    } else {
        printf("Criança\n");
    }

    return 0;
}
