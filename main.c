/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yridgway <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:40:30 by yridgway          #+#    #+#             */
/*   Updated: 2022/05/23 18:36:08 by yridgway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	main()
{
	char	*p;

	p = "hello";
//	printf("\n\n[%d]\n\n", printf("hello my name  %i is banana", 65));
//	printf("\n{%ld}\n", write(1, "Buhejdjgh", 10));
	printf("\n\n[%d]\n\n", printf("sup%ppr", &p));
	printf("\n\n[%d]\n\n", printf("sup%xpr", &p));
	return (0);
}
