/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:40:30 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/24 13:33:02 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	main()
{
	char	*p;

	p = "hello";
//	printf("\n\n[%d]\n\n", printf("hello my name  %i is banana", 65));
//	printf("\n{%ld}\n", write(1, "Buhejdjgh", 10));
	printf("[%d]\n\n", printf("sup%derdup%s%s%serflooper", 123200000, p, p, p));
	printf("[%d]\n\n", ft_printf("sup%derdup%s%s%serflooper", 123200000, p, p, p));
	return (0);
}
