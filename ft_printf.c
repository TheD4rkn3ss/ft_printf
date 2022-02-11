/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:31:34 by lucferna          #+#    #+#             */
/*   Updated: 2022/02/02 20:12:35 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	select_conversion(const char *s, va_list args)
{
	s++;
	if (*s == 'c')
		return (convert_c(va_arg(args, int)));
	else if (*s == 's')
		return (convert_s(va_arg(args, char *)));
	else if (*s == 'p')
		return (convert_p(va_arg(args, void *)));
	else if (*s == 'd' || *s == 'i')
		return (convert_d_i(va_arg(args, int)));
	else if (*s == 'u')
		return (convert_u(va_arg(args, int)));
	else if (*s == 'x' || *s == 'X')
		return (convert_x(va_arg(args, int), *s));
	else if (*s == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		x;

	x = 0;
	va_start(args, s);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			x += select_conversion(s, args);
			s += 2;
		}
		else
		{
			write(1, s++, 1);
			x++;
		}
	}
	va_end(args);
	return (x);
}

int	main(void)
{
	ft_printf("lucas");
	return (0);
}
