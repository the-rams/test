/*
** ETNA PROJECT, 20/03/2020 by saiden_o
** my_putchat
** File description:
**      print char
*/
#include "my_lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
