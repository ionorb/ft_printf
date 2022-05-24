/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:18:43 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/24 18:58:34 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_isint(int c)
{
	if (c == 'c' || c == 'd' || c == 'u' || c == 'p'
		|| c == 'i' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_writeint(long long arg, int c)
{
	int	wordcount;

	wordcount = 0;
	if (c == 'c')
		wordcount += write(1, &arg, 1);
	else if (c == 'd' || c == 'i')
		wordcount += ft_putnum((int)arg);
	else if (c == 'u')
		wordcount += ft_putnum_unsig((unsigned int)arg);
	else if (c == 'x')
		wordcount += ft_puthex((unsigned int)arg, 0);
	else if (c == 'X')
		wordcount += ft_puthex((unsigned int)arg, 1);
	else if (c == '%')
		wordcount += write(1, "%", 1);
	else if (c == 'p')
	{
		if (arg == 0)
			return (wordcount += write(1, "(nil)", 5));
		wordcount += write(1, "0x", 2);
		wordcount += ft_puthex(arg , 0);
	}
	return (wordcount);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		wordcount;
	va_list	args;

	va_start(args, input);
	wordcount = 0;
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			if (ft_isint(input[i]))
				wordcount += ft_writeint(va_arg(args, long long), input[i]);
			else if (input[i] == 's')
				wordcount += ft_putstr(va_arg(args, char *));
			else
				printf(" ***dat aint right!***");
		}
		else
			wordcount += write(1, &input[i], 1);
		i++;
	}
	va_end(args);
	return (wordcount);
}
