/*Questão 04. Um estudante iniciante de programação em C escreveu o programa abaixo e encontrou
diversos erros que impedem a sua compilação. Analise o código atentamente, aponte cada um dos
erros presentes e escreva a versão corrigida e funcional desse programa:

#include <stdio.h>
#include <stdlib.h>;
int Main{}
(
    printf( Existem %d semanas no ano.,52);
    cout << endl;
    system("PAUSE");
    return 0;
)*/


#include <stdio.h>
#include <stdlib.h>; /* Não se coloca ; após as bibliotecas */
int Main{} /* Aqui falta o parênteses seguindo a função main(), além de iniciar com letra maiúscula. Outro ponto são as {}, o corpo da função deve estar dentro das chaves, e aqui as chaves estão vazias */
( /* O corpo da função deve estar entre chaves e não entre parênteses */
    printf( Existem %d semanas no ano.,52); /* Aqui faltam as "" */
    cout << endl; /* Este comando é de C++, deve-se usar \n */
    system("PAUSE");
    return 0;
) /* para fechar o corpo da função usa-se {} */



#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}