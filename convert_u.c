/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:31:24 by lucferna          #+#    #+#             */
/*   Updated: 2021/10/31 13:42:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*convert_itoa_u(char *str, size_t size,
							long num)
{
	str[size] = '\0';
	while (size)
	{
		str[--size] = (num % 10) + 48;
		num /= 10;
	}
	return (str);
}

static int	u_numlen(long nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa_u(long nb)
{
	size_t		digits;
	char		*str;

	digits = u_numlen(nb);
	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	return (convert_itoa_u(str, digits, nb));
}

int	convert_u(unsigned int nb)
{
	char	*ptr;

	ptr = ft_itoa_u(nb);
	nb = write(1, ptr, u_numlen(nb));
	free(ptr);
	return (nb);
}
