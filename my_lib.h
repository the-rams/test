/*
** ETNA PROJECT, 20/03/2020 by saiden_o
** my_lib
** File description:
**      header
*/

#ifndef MY_PRINTF_MY_LIB_H
#define MY_PRINTF_MY_LIB_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

#define HEXA_MIN "0123456789abcdef"
#define HEXA_CAP "0123456789ABCDEF"

void put_unsigned(unsigned int nb);
void my_putnbr(int n);
void my_put_oct(int n);
void my_put_hexa(unsigned int nb, char *base);
void my_putstr(char *str);
void my_putchar(char c);
void my_printf(const char *str, ...);

#endif //MY_PRINTF_MY_LIB_H
