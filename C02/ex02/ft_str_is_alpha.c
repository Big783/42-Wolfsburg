/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrida <aafrida@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:35:21 by aafrida           #+#    #+#             */
/*   Updated: 2021/02/22 10:33:19 by aafrida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned i;

	i = 0;
	if(str[i] == '0')
		return (1);
	while(str[i] != '\0')
	{
		if(str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return(1);
}
