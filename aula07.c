// get_float e printf com %f
#include <stdio.h>
#include <cs50.h>
#include "config.c"

int aula07 (void)
{
    float preco = get_float("Digite o valor do seu produto: \n");
    printf("O valor total é $%.2f. \n", preco * 1.0625); // Multiplica o valor do produto com uma taxa de 6,25%
    // %.nf, onde n é o valor de casas decimais
    // %m.nf, onde m é o valor de largura mínima do campo, e n o valor de casas decimais
    // %-m.nf, onde -m definirá o valor de larguma minima á ESQUERDA, e n o valor de casas decimais
    printf("O valor total de seus produtos sem taxa é de: $3.2f", preco * 0);
}
