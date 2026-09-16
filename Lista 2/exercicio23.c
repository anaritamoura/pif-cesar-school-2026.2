/*Questão 23. Cálculo de Horário de Término de Experimento Biológico — Desenvolva um
programa em C que auxilie na medição do tempo de experimentos científicos de laboratório. O
programa deve receber do usuário: a) O horário de início do experimento no formato Horas,
Minutos e Segundos de forma independente; b) A duração total da experiência expressa
estritamente em segundos. O programa deve calcular e exibir na tela o horário exato de término
do experimento no formato hh:mm:ss. Utilize os operadores de divisão (/) e resto da divisão (%)
para obter os novos valores de tempo de forma estruturada.*/


#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int hora_inicial, minuto_inicial, segundo_inicial;
    int total, quant_hora, quant_min, quant_seg;
    int hora_final, minuto_final, segundo_final;

    printf("Digite aqui a hora inicial do experimento: ");
    scanf("%d", &hora_inicial);

    printf("Digite aqui o minuto inicial do experimento: ");
    scanf("%d", &minuto_inicial);

    printf("Digite aqui o segundo inicial do experimento: ");
    scanf("%d", &segundo_inicial);

    printf("Digite aqui, em segundos, a duração total da experiência: ");
    scanf("%d", &total);

    quant_hora = total / 3600;
    quant_min = (total % 3600) / 60;
    quant_seg =  total % 60;

    hora_final = hora_inicial + quant_hora;
    minuto_final = minuto_inicial + quant_min;
    segundo_final = segundo_inicial + quant_seg;

    minuto_final += segundo_final / 60;
    segundo_final %= 60;
    hora_final += minuto_final / 60;
    minuto_final %= 60;

    printf("O horário de término do experimento foi %02d:%02d:%02d.\n", hora_final, minuto_final, segundo_final);

    return 0;
}