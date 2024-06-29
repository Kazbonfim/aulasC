// Aritmética, usando pontos flutuantes
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula06 (void)
{
    double x = get_double("Determine o valor de X: \n");
    double y = get_double("Determine o valor de Y: \n");

    printf("X/Y = %.50f \n", x / y);

}
