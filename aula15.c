// Calcula o resto da divis�o
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula15 (void)
{
    printf("Aqui vamos calcular o resto de divis�o de um valor N... \n");
    int n = get_int("Determine o valor de N: \n");

    if(n % 2 == 0)
    {
        printf("O valor � par");
    }
    else
    {
        printf("O valor � �mpar");
    }
    return 0;
}
