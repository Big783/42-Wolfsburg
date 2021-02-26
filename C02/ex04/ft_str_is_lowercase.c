/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrida <aafrida@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:23:34 by aafrida           #+#    #+#             */
/*   Updated: 2021/02/21 18:03:34 by aafrida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned i;

	i = 0;
	if(str[i] == '0')
		return (1);
	while(str[i] != '\0')
	{
		if(str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
