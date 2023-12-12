
#include "ft_printf.h"
#include "libft.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_len += ft_printpercent();
	return (print_len);
}

int	ft_printf(const char *string, ...)
{
	int		i;
	int		print_len;
	va_list	args;

	if (!string || *string == 0)
		return (0);
	print_len = 0;
	va_start(args, string);
	i = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			print_len += ft_formats(args, string[i + 1]);
			i++;
		}
		else
			print_len += ft_printchar(string[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}
