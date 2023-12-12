/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:35:53 by apetitco          #+#    #+#             */
/*   Updated: 2023/12/07 16:37:28 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_number(int num, int base_value, char *base)
{
	int	sign;

	sign = 1;
	if (num < 0)
	{
		sign *= -1;
		ft_print_number(num * sign, base_value, base);
		write(1, "-", 1);
	}
	if (num > base_value)
		ft_print_number(num / base_value, base_value, base);
	if (num < base_value && num >= 0)
		write(1, &base[num % base_value], 1);
}
