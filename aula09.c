// get_int e printf com %i
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula09 (void)
{
    int idade = get_int("Escreva sua idade aqui: \n");
    printf("Ent�o voc� t�m %i dias de vida at� ent�o?", idade * 365);
}
