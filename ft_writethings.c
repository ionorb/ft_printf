/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writethings.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:34:35 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/24 17:36:43 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_convert(unsigned long dec, int isupper)
{
	char	*base;

	if (isupper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (dec == 0)
		return (0);
	else
	{
		ft_convert(dec / 16, isupper);
		write(1, &base[dec % 16], 1);
	}
	return (1);
}

int	ft_puthex(unsigned long dec, int isupper)
{
	int	count;

	count = 0;
	if (dec == 0)
		write(1, "0", 1);
	ft_convert(dec, isupper);
	while (dec > 0)
	{
		dec /= 16;
		count++;
	}
	return (count);
}

int	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	return (i);
}

int	ft_putnum(int n)
{
	int		count;
	char	*num;

	num = ft_itoa_long(n);
	count = ft_strlen(num);
	write(1, num, count);
	return (count);
}

int	ft_putnum_unsig(unsigned int n)
{
	int		count;
	char	*num;

	num = ft_itoa_long(n);
	count = ft_strlen(num);
	write(1, num, count);
	return (count);
}
