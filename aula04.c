// Operadores l�gicos
#include <stdio.h>
#include <cs50.c>
#include "config.c"

int aula04 (void)
{
    configurar_localidade(); //config.c

    char c = get_char("Voc� concorda com as captanias heredit�rias?\n");

    if(c == 'S' || c == 's')
    {
        printf("Voc� concorda\n");
    } else if (c == 'N' || c == 'n')
    {
        printf("Voc� discorda\n");
    }
}
