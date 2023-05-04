/*
** ETNA PROJECT, 20/03/2020 by saiden_o
** my_putstr
** File description:
**      print string
*/
#include "my_lib.h"

void my_putstr(char *str)
{
    int i = 0;

    if (str)
        while (str && str[i] != '\0')
            my_putchar(str[ i++ ]);

}
