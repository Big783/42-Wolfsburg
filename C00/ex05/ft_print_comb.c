/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrida <aafrida@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:54:30 by aafrida           #+#    #+#             */
/*   Updated: 2021/02/15 09:24:11 by aafrida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0' - 1;
	while (a++ < '7')
	{
		b = a;
		while (b++ < '8')
		{
			c = b;
			while (c++ < '9')
			{
				if (!(c == '0' && b == '1' && c == '2'))
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					if (a < '7')
						write(1, ", ", 2);
				}
			}
		}
	}
}
