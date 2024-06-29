#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula11 (void)
{
    int n;
    do // FAÇA
    {
        n = get_int("Largura: \n");
    }
    while (n < 1); // ENQUANTO QUE

    for(int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}
