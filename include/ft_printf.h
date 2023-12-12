
#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_printf(const char *,...);
int		ft_print_format(char c, va_list args);
int		ft_print_pointer(int pointer);

void	ft_print_char(int c);
void	ft_print_number(int num, int base_value, char *base);
void	ft_print_string(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int num, char *base);

#endif
