// Operadores lógicos
#include <stdio.h>
#include <cs50.c>
#include "config.c"

int aula04 (void)
{
    configurar_localidade(); //config.c

    char c = get_char("Você concorda com as captanias hereditárias?\n");

    if(c == 'S' || c == 's')
    {
        printf("Você concorda\n");
    } else if (c == 'N' || c == 'n')
    {
        printf("Você discorda\n");
    }
}
