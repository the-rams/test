/*
** ETNA PROJECT, 20/03/2020 by saiden_o
** my_putnbr
** File description:
**      print number
*/
#include "my_lib.h"

void my_putnbr(int n)
{
    if (n < 0)
        my_putchar('-');
    if (n == -2147483648)
    {
        my_putchar('2');
        my_putnbr(147483648);
    }
    else if (n < 0)
        my_putnbr (-n);
    else if (n > INT_MAX) {
        my_putnbr(INT_MAX - 1);
    } else if (n >= 10) {
        my_putnbr(n / 10);
        my_putnbr(n % 10);
    }
    else if (n < 10)
    {
        n = n + '0';
        my_putchar(n);
    }
}
