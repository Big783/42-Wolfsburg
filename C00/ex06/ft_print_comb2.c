/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrida <aafrida@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:55:01 by aafrida           #+#    #+#             */
/*   Updated: 2021/02/19 17:25:13 by aafrida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b)
{
	char c;

	c = a / 10 + 48;
	write(1, &c, 1);
	c = a % 10 + 48;
	write(1, &c, 1);
	write(1, " ", 1);
	c = b / 10 + 48;
	write(1, &c, 1);
	c = b % 10 + 48;
	write(1, &c, 1);
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	while (a++ < 99)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar(a, b);
		}
	}
}
