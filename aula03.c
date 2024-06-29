// Abstração
#include <stdio.h>
#include "config.c"
#include <cs50.h>

int aula03 (void){
    for(int i; i < 3; i++)
    {
        espirrar();
    }
printf("Agora sim, bem melhor!");
}


int espirrar (void)
{
    printf("Atchim!\n");
}
