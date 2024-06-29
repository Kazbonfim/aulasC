// Mais laços de repetição, com DO/WHILE
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula13(void)
{
    int n;

    do
    {
        n = get_int("Altura: \n");
    }
    while (n < 1);
    {
        for(int i = 0; i < n; i++)
        {
            printf("# \n");
        }
    }
}
