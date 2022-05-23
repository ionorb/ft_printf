/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:18:43 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/23 18:29:04 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_putdec(int dec)

int	ft_puthex(int dec, int isupper)

int	ft_isint(int c)
{
	if (c == 'c' || c == 'd' || c == 'u'
		|| c == 'x' || c == 'X' || c == 'x' || c == '%')
		return (1);
	return (0);
}

int	ft_writeint(va_list *arg, int c)
{
	int	wordcount;

	wordcount = 0;
	if (c == 'c')
		wordcount += write(1, &arg, 1);
	else if (c == 'd' || c == 'i')
		wordcount += ft_putdec(arg);
	else if (c == 'u')
		wordcount += ft_putdec((unsigned int)arg);
	else if (c == 'x')
		wordcount += ft_putdec((unsigned int)arg);
	else if (c == 'X')
		wordcount += ft_putdec((unsigned int)arg);
	else if (c == '%')
		wordcount += write(1, "%", 1);
	return (wordcount);
}

int	ft_printf(char *input, ...)
{
	int	i;
	int	wordcount;
	va_list args;

	va_start(args, input);
	wordcount = 0;
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			if (ft_isint(input[i]))
				wordcount += ft_writeint(va_arg(args, int), input[i]);
			else if (input[i] == 's')
				wordcount = ft_putstr(va_arg(args, char *), 1);
			else if (input[i] == 'p')
				printf("[%p]", va_arg(args, void *));
			else
				printf(" ***dat aint right!***");
		}
		else
		{
			wordcount++;
			write(1, &input[i], 1);
		}
		i++;
	}
	va_end(args);
	return (0);
}
