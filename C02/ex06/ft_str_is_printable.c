/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrida <aafrida@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:51:22 by aafrida           #+#    #+#             */
/*   Updated: 2021/02/24 21:05:00 by aafrida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned i;

	i = 0;
	if(str[i] == 0)
		return (1);
	while(str[i] != 0)
	{
		if(str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
