/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrida <aafrida@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 09:30:59 by aafrida           #+#    #+#             */
/*   Updated: 2021/02/23 21:46:54 by aafrida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int src_it;
	int dest_it;

	src_it = 0;
	dest_it = 0;
	while (dest[dest_it] != '\0')
	{
		dest_it++;
	}
	while (src[src_it] != '\0')
	{
		dest[dest_it] = src[src_it];
		dest_it++;
		src_it++;
	}
	dest[dest_it] = '\0';
	return (dest);
}
