Questão 01. Anatomia de uma Função e o Papel do Protótipo — Observe o programa abaixo:

#include <stdio.h>

float celsius(float);

int main() {
    float c, f = 100.0;
    c = celsius(f);
    printf("Celsius = %.2f\n", c);
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}

a) Identifique no código o protótipo, a chamada e a definição da função celsius(). Explique o papel de cada uma dessas três etapas.
Protótipo: 5 float celsius(float);
Chamada: 9 c = celsuis(f);
Definição: 14 float celsius(float fahr) {
    15 return (fahr - 32.0) * 5.0 / 9.0;
16 }
O protótipo serve para informar ao compilador o tipo e os argumentos da função.
A chamada é quando a função é de fato usada.
A definição é quando a função é definida, ou seja, todos os cálculos ou ações que essa função executará estão descritos aqui.

b) Qual é a função do protótipo para o compilador? O que aconteceria, em termos de verificação de parâmetros, se ele fosse omitido e a função fosse definida depois da main()?
O protótipo informa ao compilador que a função existe, o nome dela, o tipo de retorno esperado e os parâmetros que ela recebe antes da implementação. Caso a função for definida depois da main, sem declaração do protótipo previamente, o código dá erro, pois o compilador não tem como verificar o tipo de dado dos parâmetros e nem do retorno da função. 

c) Qual é o tipo da função celsius()? Explique por que o tipo de uma função é determinado pelo valor retornado e não pelos parâmetros recebidos.
O tipo da função celsius() é float. O tipo da função é determinado pelo valor retornado porque é ele quem define o tipo de dado que a função produz. Os parâmetros determinam o tipo de dado de entrada.



Questão 02. O Comando return e suas Limitações — Analise os trechos a seguir:

int calcular(int a, int b, int c) {
    int soma = a + b + c;
    int media = soma / 3;
    return soma, media;
}

void imprime_mensagem(int erro) {
    if (erro < 0) {
        printf("Erro invalido\n");
        return;
    }
    printf("Codigo processado: %d\n", erro);
}

a) Quantos valores uma função em C pode devolver por meio do comando return? O que o programador pretendia fazer na função calcular() e por que a abordagem não cumpre esse objetivo?
Uma função deve retornar apenas um valor. Em calcular(), o programador pretendia calcular a soma dos três números e a média deles. No entanto, a função não consegue retornar dois valores.

b) Qual é o efeito do comando return; dentro da função void imprime_mensagem()? Ele é obrigatório no final de uma função void? Justifique.
Esse comando return; não é obrigatório no fim da função imprime_mensagem() porque ela é do tipo void e funções do tipo void não requerem um retorno, já que seu retorno não é nada.

c) Reescreva a função calcular() para que ela retorne apenas a média dos três valores. Em seguida, crie uma segunda função, separada, que retorne apenas a soma. Explique por que, em C, precisamos de duas funções para devolver dois resultados diferentes quando usamos apenas o comando return.

int calcular(int a, int b, int c) {
    int media = (a + b + c) / 3;
    return media;
}

int soma(int a, int b, int c) {
    int soma = a + b + c;
    reutrn soma;
}

Porque return só retorna um valor.



Questão 03. Funções void, Parâmetros e Assinaturas — Considere os três protótipos abaixo:

void exibe_mensagem(char* msg);
int obter_codigo(void);
void limpar_tela(void);

a) Classifique cada protótipo quanto à existência de parâmetros de entrada e de valor de retorno.
void exibe_mensagem(char* msg); - recebe parâmetros e sem retorno
int obter_codigo(void); - não recebe parâmetros e tem retorno
void limpar_tela(void); - não recebe parâmetros e sem retorno

b) Qual é a diferença prática entre uma função com retorno e um procedimento (função void)? Dê um exemplo de situação em que cada um é a escolha mais adequada.
A função com retorno devolve um valor ao final, e a de procedimento só executa algo, sem devolver nada. Por exemplo, para imprimir um menu, a função void é excelente, já para calcular uma soma é necessário que a função retorne o valor final da soma.

c) Uma chamada como x = limpar_tela(); é válida? Justifique com base no tipo da função.
Não, porque ela é uma função void, executa apenas um procedimento, e a variável 'x' precisa ter um valor atrelado à ela.



Questão 04. Recursão: Caso Base, Passo Recursivo e Pilha de Execução — Analise a função recursiva:

long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}

a) Identifique o caso base e o passo recursivo. O que aconteceria se o caso base fosse removido?
O caso base é (n == 0). Se o caso base, condição de parada, for removido, a função será um loop infinito até dar estouro de memória, overflow.

b) Faça o rastreamento completo da chamada fatorial(4), mostrando a fase de empilhamento e a fase de desempilhamento, com o valor devolvido por cada chamada.
n = 4
fatorial(4)
4 * fatorial(4 - 1)
               3 * fatorial(3 - 1)
                               2 * fatorial(2 - 1)
                                                1 * fatorial(1 - 1)
                                                             n == 0
                                                                1
                                                1        *
                               2       *
               3       *
4       *         

c) Explique, em termos de pilha de execução, o que acontece na memória a cada chamada recursiva e por que uma recursão sem caso base pode causar falha no programa.
A cada chamada recursiva, o programa cria um registro de ativação na pilha de execução, armazenando os parâmetros e informações necessárias para continuar a execução da função. As chamadas ficam empilhadas na memória até atingir o caso base, por isso que, sem caso base, a função continua sendo chamada e as informações continuam sendo armazenadas na pilha de execução infinitamente. Isso pode causar um estouro de pilha e uma falha no programa.



Questão 05. Diretiva #define, Constantes e Macros com Argumentos — Analise o código:

#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2

int main() {
    printf("%d\n", SQR(2+3));
    printf("%d\n", DOBRO(2+3));
    return 0;
}

a) Qual será a saída de cada printf? Explique por que SQR e DOBRO se comportam de maneira diferente, relacionando o resultado ao uso de parênteses de proteção.
O primeiro printf() tem como saída 25 e, o segundo, 8. Isso acontece porque define DOBRO não usou parênteses para proteger o cálculo. O correto seria #define DOBRO(x) (x) * 2 para garantir que a soma seja executada antes da multiplicação, caso contrário, a multiplicação 3 * 2 acontece antes da soma 2 + 3. 

b) Por que a diretiva #define não termina com ponto e vírgula? Por que, por convenção, usamos identificadores em maiúsculas?
A diretiva #define não termina com ponto e vírgula porque ela não é uma instrução de C, ela é uma diretiva do pré-processador. Usa-se maiúsculas para facilitar a leitura do código e diferenciar macros de variáveis e funções.

c) Explique por que #define PRN (n) printf("%d", n) está incorreto e qual é a forma correta. Aponte também uma diferença entre uma macro com argumentos e uma função comum.
Não deve haver espaço entre o identificar e os parênteses da macro. O correto seria #define PRN(n) printf("%d", n). A macro com argumentos tem um texto substituído pelo pré-processador antes da compilação, já a função tem uma execução propriamente dita, recebe parâmetros e retorna valores, tudo feito pelo compilador.



Questão 06. Diretivas #include, #undef e Compilação Condicional — Considere o trecho:

#include <stdio.h>
#include "areas.h"

#define SOMA(x,y) ((x)+(y))
#undef SOMA

#ifdef DEBUG
    printf("Modo de depuracao\n");
#else
    printf("Modo normal\n");
#endif

a) Qual é a diferença entre #include <stdio.h> e #include "areas.h"? Em que situação usamos cada sintaxe?
#include <stadio.h> com <> é usado para importar bibliotecas do próprio sistema, já #include "areas.h" é usado quando é uma biblioteca local, criada pelo programador, ou seja, um outro arquivo do projeto.

b) Qual é o efeito de #undef SOMA? Por que a forma #undef SOMA(x,y) está incorreta?
#undef SOMA cancela a macro SOMA. Não pode incluir os argumentos na hora de remover a definição, o correto seria #undef SOMA.

c) Se DEBUG não foi definido, qual mensagem será impressa? Explique em que momento (pré-processamento ou execução) essa decisão é tomada e por que as diretivas não aparecem no executável final.
Como DEBUG não foi definido, a mensagem que aparece impressa é a do #else: "Modo normal". Essa decisão acontece na fase de pré-processamento. As diretivas são instruções do pré-processador, não são instruções executadas pelo programa, por isso não aparecem no executável final.
