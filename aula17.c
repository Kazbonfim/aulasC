// Bibliotecas de matemática
#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include "config.c"

int aula17 (void)
{
    double base = get_double("Base: \n");
    double expoente = get_double("Expoente: \n");
    printf("Resultado: %.0f", pow(base, expoente));
}
