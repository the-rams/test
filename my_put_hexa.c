/*
** ETNA PROJECT, 20/03/2020 by saiden_o
** my_put_hexa
** File description:
**      print hexadecimal
*/
#include "my_lib.h"

void my_put_hexa(unsigned int nb, char *base)
{
    unsigned int beg = 0;
    unsigned int end = 0;

    end = nb % 16;
    beg = (nb - end) / 16;
    if (beg)
        my_put_hexa(beg, base);
    my_putchar(base[end]);
}
