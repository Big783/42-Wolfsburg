/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrida <aafrida@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 08:04:45 by aafrida           #+#    #+#             */
/*   Updated: 2021/02/24 08:50:57 by aafrida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int it_find;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		it_find = 0;
		while (str[i + it_find] == to_find[it_find] &&
					str[i + it_find] != '\0')
		{
			if (to_find[it_find + 1] == '\0')
				return (&str[i]);
			it_find++;
		}
		i++;
	}
	return (0);
}