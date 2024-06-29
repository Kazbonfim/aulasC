// Condicionais e operadores relacionais
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula05 (void)
{
    configurar_localidade();

    int x = get_int("Determine um valor para x: \n");
    int y = get_int("Determine um valor para y: \n");

    if(x < y) // X é MENOR que Y?
    {
        printf("X é menor que Y"); // Se sim
    } else if (x > y) // X é MAIOR que Y?
    {
        printf("Y é menor que X"); // Se não
    } else
    {
        printf("X é igual a Y"); // Se equivalentes
    }
}
