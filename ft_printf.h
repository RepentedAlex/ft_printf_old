
#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_printf(const char *,...);
int		ft_print_format(char c, va_list args);

void	ft_print_char(int c);
void	ft_print_number(int num, char *base);
void	ft_print_pointer(int address);
void	ft_print_string(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int num, char *base);

#endif
