/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:07:14 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/24 17:54:42 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *input, ...);
char	*ft_itoa_long(long n);
int		ft_strlen(char *str);
int		ft_puthex(unsigned long dec, int isupper);
int		ft_putstr(char	*str);
int		ft_putnum(int n);
int		ft_putnum_unsig(unsigned int n);

#endif
