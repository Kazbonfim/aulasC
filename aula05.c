// Condicionais e operadores relacionais
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula05 (void)
{
    configurar_localidade();

    int x = get_int("Determine um valor para x: \n");
    int y = get_int("Determine um valor para y: \n");

    if(x < y) // X � MENOR que Y?
    {
        printf("X � menor que Y"); // Se sim
    } else if (x > y) // X � MAIOR que Y?
    {
        printf("Y � menor que X"); // Se n�o
    } else
    {
        printf("X � igual a Y"); // Se equivalentes
    }
}
