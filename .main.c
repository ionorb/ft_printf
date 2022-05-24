/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:40:30 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/24 17:03:30 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	main()
{
	char	*p;

	p = "hello";
	printf("\nprintf:\t\t[%d]\n", printf("sup%Xerdup%p%s%serf%%looper", -123200000, p, p, p));
	printf("\nft_printf:\t[%d]\n\n", ft_printf("sup%Xerdup%p%s%serf%%looper", -123200000, p, p, p));
	return (0);
}
