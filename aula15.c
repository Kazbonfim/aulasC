// Calcula o resto da divisão
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula15 (void)
{
    printf("Aqui vamos calcular o resto de divisão de um valor N... \n");
    int n = get_int("Determine o valor de N: \n");

    if(n % 2 == 0)
    {
        printf("O valor é par");
    }
    else
    {
        printf("O valor é ímpar");
    }
    return 0;
}
