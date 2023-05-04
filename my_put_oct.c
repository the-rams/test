/*
** ETNA PROJECT, 20/03/2020 by saiden_o
** my_put_oct
** File description:
**      print octal
*/

#include "my_lib.h"

void my_put_oct(int n)
{
    if (n < 0)
        my_putstr("error");
        //error;
    else if (n >= 8)
    {
        my_put_oct(n / 8);
        my_put_oct(n % 8);
    }
    else if (n < 8)
    {
        n = n + '0';
        my_putchar(n);
    }
}
