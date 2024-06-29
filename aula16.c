// Abstração e escopo
#include <stdio.h>
#include <cs50.h>
#include "config.c"

receber_inteiro_positivo();

int aula16(void)
{
    int i = receber_inteiro_positivo();
    printf("%i", i);
}

int receber_inteiro_positivo(void)
{
    int n;
    do
    {
        n = get_int("Determine um inteiro positivo... \n");
    }
    while (n < 1);
    return;
}
