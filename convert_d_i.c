/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_d_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:31:15 by lucferna          #+#    #+#             */
/*   Updated: 2021/10/30 21:31:15 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_d_i(int nb)
{
	char	*ptr;

	ptr = ft_itoa(nb);
	nb = write(1, ptr, ft_numlen(nb));
	free(ptr);
	return (nb);
}
