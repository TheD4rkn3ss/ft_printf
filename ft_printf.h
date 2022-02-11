/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:31:37 by lucferna          #+#    #+#             */
/*   Updated: 2021/11/01 16:45:47 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

size_t	ft_numlen(int num);
int		convert_d_i(int nb);
int		convert_c(int nb);
int		convert_s(char *ptr);
int		convert_u(unsigned int nb);
int		convert_x(int nb, char x);
int		convert_p(void *ptr);
int		ft_printf(const char *s, ...);
int		dec_to_hex(unsigned int nb, char x);

#endif
