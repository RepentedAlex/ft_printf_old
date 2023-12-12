/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:28:48 by apetitco          #+#    #+#             */
/*   Updated: 2023/12/07 16:34:02 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		pointer_len(int number)
{
	int	len;

	len = 0;
	while (number != 0)
	{
		len++;
		number /= 16;
	}
	return (len);
}

void	ft_write_pointer(int number)
{
	if (number >= 16)
	{
		ft_write_pointer(number / 16);
		ft_write_pointer(number % 16);
	}
	else
	{
		if (number <= 9)
			ft_putchar_fd((number + '0'), 1);
		else
			ft_putchar_fd((number - 10 + 'a'), 1);
	}
}

int		ft_print_pointer(int pointer)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (pointer == 0)
		len += write(1, "0", 1);
	else
	{
		ft_print_pointer(pointer);
		len += pointer_len(pointer);
	}
	return (len);
}
