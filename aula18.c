// Retornando um valor com o comando return + escopo e funções
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int raizQuadrada(int n);

int aula18(void)
{
    int num = get_int("Determine um número para que possamos verificar sua raíz quadrada? \n");
    printf("O resultado é %i \n", raizQuadrada(num));
    }

int raizQuadrada(int n)
{
    return n * n;
}
