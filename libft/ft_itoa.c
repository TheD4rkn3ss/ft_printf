/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:29:03 by lucferna          #+#    #+#             */
/*   Updated: 2021/10/31 17:29:48 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert_itoa(char *str, size_t size,
							unsigned int num, unsigned int is_neg)
{
	str[size] = '\0';
	while (size)
	{
		str[--size] = (num % 10) + 48;
		num /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}

static size_t	ft_numlen(int num)
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

char	*ft_itoa(int nb)
{
	size_t			digits;
	unsigned int	is_neg;
	char			*str;

	digits = ft_numlen(nb);
	is_neg = 0;
	if (nb < 0)
	{
		is_neg = 1;
		nb = -nb;
	}
	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	return (convert_itoa(str, digits, (unsigned int)nb, is_neg));
}
