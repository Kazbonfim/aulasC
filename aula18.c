// Retornando um valor com o comando return + escopo e fun��es
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int raizQuadrada(int n);

int aula18(void)
{
    int num = get_int("Determine um n�mero para que possamos verificar sua ra�z quadrada? \n");
    printf("O resultado � %i \n", raizQuadrada(num));
    }

int raizQuadrada(int n)
{
    return n * n;
}
