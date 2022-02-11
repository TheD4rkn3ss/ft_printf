/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:31:27 by lucferna          #+#    #+#             */
/*   Updated: 2021/10/30 21:31:27 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_x(int nb, char x)
{
	if (nb == 0)
		return (write(1, "0", 1));
	if (x == 'x')
		return (dec_to_hex(nb, x));
	else
		return (dec_to_hex(nb, x));
}
