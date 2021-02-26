/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrida <aafrida@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:42:24 by aafrida           #+#    #+#             */
/*   Updated: 2021/02/22 19:53:25 by aafrida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if(str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		while(str[i] < '0' ||( str[i] > '9' && str[i] < 'A' ) || 
				(str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			i++;
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return(str);
}
