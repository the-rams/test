/*
** ETNA PROJECT, 20/03/2020 by saiden_o
** my_printf
** File description:
**      reimplementation printf
*/
#include "my_lib.h"

void my_printf(const char *str, ...)
{
    va_list ap;
    va_start(ap, str);
    int i = 0;

    while (str[i]) {
        if (str[i] == '%') {
            switch (str[i + 1]) {
                case 's':
                    my_putstr(va_arg(ap, char *));
                    break;
                case 'd':
                case 'i':
                    my_putnbr(va_arg(ap, int));
                    break;
                case 'c':
                    my_putchar((char) va_arg(ap, int));
                    break;
                case 'x' :
                case 'X' :
                    my_put_hexa(va_arg(ap, unsigned int), (str[i + 1] == 'x' ? HEXA_MIN : HEXA_CAP));
                    break;
                case 'o' :
                    my_put_oct(va_arg(ap, unsigned int));
                    break;
                case 'u' :
                    put_unsigned(va_arg(ap, unsigned int));
                    break;
                case '\0':
                    break;
                default :
                        my_putchar(str[i + 1]);
                    break;
            }
            if (str[i + 1] != '\0')
                i++;
        } else
            my_putchar(str[i]);
        i++;
    }
    va_end(ap);
}


