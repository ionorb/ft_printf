/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:24:18 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/24 17:50:21 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_numlen(long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa_long(long n)
{
	int		sign;
	int		i;
	char	*result;

	sign = 1;
	i = ft_numlen(n);
	if (n <= 0)
	{
		sign = -1;
		i++;
	}
	result = malloc((i + 1) * sizeof (char));
	if (!result)
		return (NULL);
	result[0] = '-';
	if (n == 0)
		result[0] = '0';
	result[i] = '\0';
	while (--i >= 0 && n != 0)
	{
		result[i] = (n % 10) * sign + 48;
		n /= 10;
	}
	return (result);
}
