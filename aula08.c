// Aritmética usando números de ponto-flutuante (float)
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula08 (void)
{
    float x = get_float("Determine o valor de X: \n");
    float y = get_float("Determine o valor de Y: \n");

    printf("X/Y = %.50f", x / y);
    //
}
