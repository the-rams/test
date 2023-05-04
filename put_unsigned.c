/*
** ETNA PROJECT, 20/03/2020 by saiden_o
** put_unsigned
** File description:
**      print unsigned int
*/
#include "my_lib.h"

void put_unsigned(unsigned int nb)
{
    unsigned int n = nb;

    if (n > 9) {
        my_putnbr(n / 10);
        my_putnbr(n % 10);
    } else
        my_putchar(n + '0');
}