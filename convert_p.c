/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:31:18 by lucferna          #+#    #+#             */
/*   Updated: 2021/10/31 15:09:00 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	long_hex(unsigned long int nbr)
{
	char	tmp;
	int		a;

	a = 0;
	if (nbr != 0)
	{
		a = long_hex(nbr / 16);
		if (nbr % 16 < 10)
			tmp = nbr % 16 + '0';
		else
			tmp = (nbr % 16) - 10 + 'a';
		write(1, &tmp, 1);
		a++;
	}
	return (a);
}

int	convert_p(void *ptr)
{
	int		len;
	long	*i_ptr;

	if (ptr == 0 && !IS_MACOS)
		return (write(1, "(nil)", 5));
	else if (ptr == 0 && IS_MACOS)
		return (write(1, "0x0", 3));
	i_ptr = (long int *)&ptr;
	len = write(1, "0x", 2) + long_hex(*i_ptr);
	return (len);
}
