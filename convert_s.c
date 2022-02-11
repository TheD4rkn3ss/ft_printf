/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:31:21 by lucferna          #+#    #+#             */
/*   Updated: 2021/10/30 21:31:21 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_s(char *ptr)
{
	if (!ptr)
		return (write(1, "(null)", 6));
	return (write(1, ptr, ft_strlen(ptr)));
}
