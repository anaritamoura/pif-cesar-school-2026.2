Questão 01. Truncamento de Tipos e Coerção Implícita — Um estudante do curso de ADS
escreveu o programa em C abaixo visando entender o comportamento de variáveis e atribuições
de tipos incompatíveis. Analise o código, compile mentalmente ou em seu ambiente de
desenvolvimento e responda às questões indicadas.

#include <stdio.h>
#include <stdlib.h>
    int main() {
    int valor_inteiro;
    valor_inteiro = 2.97;
    printf("O valor armazenado eh: %d\n", valor_inteiro);
    system("PAUSE");
    return 0;
}

a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse programa?
O valor numérico que será exibido é 2.

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?
C preserva o tipo, como foi indicado que a variável valor_inteiro seria do tipo inteiro, C guarda apenas a parte inteira do número flutuante, imprimindo só o "2" e descartando o ".97". O nome desse fenômeno é Conversão de Tipo. Isso acontece porque o lugar de memória é estático, depois de criado aquele espaço, com aquele tipo, ele aceitará só aquele tipo. Não haverá erro na atribuição, porém, apenas na hora de mostrar a saída.

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo programador caso ele necessite arredondar o valor ou manter a precisão?
Nesse caso, é necessário usar a Conversão Explícita como o operador de molde (cast). Pra manter a precisão, é necessário que coloque (float) ou (double) antes da operação, já para arrendondar, usa-se o (round) antes da operação.



Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas — Historicamente, literaturas de C utilizam funções unbuffered de entrada definidas na biblioteca legada e não-padrão <conio.h>, tais como getch() e getche(), para ler caracteres imediatamente sem exigir que o usuário pressione [ENTER]. Sob a perspectiva da portabilidade moderna da linguagem e do padrão ANSI C:

a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos (Linux, macOS, servidores)?
Porque são funções específicas para leitura de teclado em ambientes Windows.

b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h> para entrada e saída de caracteres?
Para entrada se usa getchar() e para saída usa-se putchar().

c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.

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



Questão 03. Formatação de Saída em Bases Numéricas e ASCII — A função de saída printf() oferece controle total sobre a representação dos dados na tela através de especificadores de formato de base numérica. Desenvolva as instruções em C necessárias para realizar a seguinte tarefa:

Leia um único número inteiro fornecido pelo usuário e exiba uma única mensagem no console que mostre esse mesmo valor nas seguintes representações simultâneas: base decimal (%d), base hexadecimal em caixa baixa (%x), base octal (%o) e o caractere correspondente à tabela ASCII (%c).

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite aqui um número inteiro: ");
    scanf("%d", &numero);
    printf("O valor em base decimal é %d,\no valor em base hexadecimal em caixa baixa é %x,\no valor em base octal é %o,\ne o caractere correspondente à tabela ACII do valor é %c.", numero, numero, numero, numero);
    return 0;
}



Questão 04. Operadores de Atribuição Composta e Precedência — Os operadores de atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma atribuição simultaneamente. Determine quais serão os valores das variáveis a, b, c e d após a execução sequencial completa das seguintes instruções de inicialização e atribuição em C. Justifique seus cálculos apresentando a ordem de avaliação passo a passo:

int a = 1, b = 2, c = 3, d = 4;

a += b + c;
c + b = 5
a += 5
a = 6
Valor final de a = 6.

b *= c = d + 2;
d + 2 = 6
c = 6
b *= 6
b = 12
Valores finais de b = 12,  c = 6.

d %= a + a + a;
a + a + a = 3
d %= 3 = 1
d = 1
Valor final de d = 1

d -= c -= b -= a;
b -= a = 1
b = 1
c -= 1 = 2
c = 2
d -= 2 = 2
d = 2
Valor final de d = 2, c = 2, b = 1.

a += b += c += 7;
c += 7 = 10
c = 10
b += 10 = 12
b = 12
a += 12 = 13
a = 13
Valor final de a = 13, b = 12, c = 10.



Questão 05. Avaliação de Expressões Lógicas e Relacionais — Determine o resultado lógico (1 para verdadeiro, 0 para falso) de cada uma das expressões relacionais e lógicas a seguir, assumindo que as variáveis foram inicializadas como: int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y = 4.4;. Consulte a tabela de precedência do Capítulo 2 de Viviane.

int i = 1, j = 2, k = 3, n = 2;]
float x = 3.3, y = 4.4;

a) i < j + 3 => Resultado: Verdadeiro
j + 3 = 5
i < 5 = V

b) 2 * i - 7 <= j - 8 => Resultado: Falso
2 * i = 2
2 - 8 = -6
2 - 7 = -5
-5 <= -6 = F

c) -x + y >= 2.0 * y => Resultado: Falso
2.0 * y = 8.8
-3.3 + 4.4 = 1.1
1.1 >= 8.8 = F

d) x == y => Resultado: Falso
3.3 == 4.4 = F

e) !(n - j) => Resultado: Verdadeiro
2 - 2 = 0
!0 = V

f) !n - j => Resultado: Verdadeiro
!n = !2 = 0
0 - 2 = -2 = V

g) i && j && k => Resultado: Verdadeiro
1 E 2 E 3 = V

h) i || j - 3 && k => Resultado: Verdadeiro
2 - 3 = -1
-1 E 3 = V
1 OU 2 = V
V + V = V

i) i < j && 2 >= k => Resultado: Falso
1 < 2 = V
2 >= 3 = F
V E F = F

j) i == 2 || j == 4 || k == 5 => Resultado: Falso
1 == 2 = F
2 == 4 = F
3 == 5 = F
F OU F OU F = F



Questão 06. Comportamento e Precedência dos Incrementos — O comportamento de incrementos prefixados e pós-fixados (++x e x++) é uma fonte frequente de erros sutis na Linguagem C. Analise os dois trechos de código independentes abaixo e responda:

// Trecho A
int n = 5;
int x = ++n;
printf("Trecho A: n = %d, x = %d\n", n, x);

// Trecho B
int m = 5;
int y = m++;
printf("Trecho B: m = %d, y = %d\n", m, y);

a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?
O operador pré-fixado (++n) incrementa a variável e depois a utiliza para alguma operação, seja printf, seja conta. Já o operador pós-fixado (m++) faz com que a variável seja primeiro usada e só depois ele incrementa e guarda o novo valor.
No Trecho A, os valores impressos são n = 6 e x = 6. No trecho B,os valores impressos são m = 6, y = 5.

b) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do compilador adotado (comportamento indefinido).
Nesse caso, a mesma váriavel está sendo usada e alterada na mesma operação (printf). C não tem uma ordem definida de avaliação de argumentos de uma função, então um compilador pode compilar em uma ordem e outro compilador em outra ordem. Ou seja, C não consegue prever esse comportamento.
