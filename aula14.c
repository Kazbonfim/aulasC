// Mais laços de repetição, com DO/WHILE
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula14 (void)
{
    int n;

    do
    {
        n = get_int("Tamanho: \n");
    }
    while (n < 1);

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
