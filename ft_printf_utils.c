/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:31:30 by lucferna          #+#    #+#             */
/*   Updated: 2021/10/31 13:42:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_numlen(int num)
{
	size_t	len;

	len = 1;
	if (num < 0)
		len++;
	num /= 10;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

int	dec_to_hex(unsigned int nbr, char x)
{
	char	tmp;
	int		a;

	a = 0;
	if (nbr != 0)
	{
		a = dec_to_hex(nbr / 16, x);
		if (nbr % 16 < 10)
			tmp = nbr % 16 + '0';
		else if (x == 'x')
			tmp = (nbr % 16) - 10 + 'a';
		else
			tmp = (nbr % 16) - 10 + 'A';
		write(1, &tmp, 1);
		a++;
	}
	return (a);
}
