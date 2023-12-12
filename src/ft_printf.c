/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:17:29 by apetitco          #+#    #+#             */
/*   Updated: 2023/12/07 16:37:37 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char c, va_list args)
{
	if (c == 'c')
		ft_print_char(va_arg(args, int));
	if (c == 's')
		ft_print_string(va_arg(args, char *));
	if (c == 'p')
		ft_print_pointer(va_arg(args, int *)); // <- PAS FAIT
	if (c == 'd')
		ft_print_number(va_arg(args, int), 10, "0123456789");
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	vars;

	va_start(vars, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_print_format(str[i], vars);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	return (0);
}
