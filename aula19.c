// Transbordo de inteiros
#include <stdio.h>
#include <unistd.h>
#include <cs50.h>
#include "config.c"

int aula19 (void){
    int i;

    for(int i = 0; ;i *= 2);
    {
        printf("O valor é %i \n", i);
        sleep(1);
    }
}
