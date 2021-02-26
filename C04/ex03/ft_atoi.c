/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrida <aafrida@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 20:30:55 by aafrida           #+#    #+#             */
/*   Updated: 2021/02/25 08:26:29 by aafrida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int negativ;
	int i;
	int number;

	negativ = 0;
	i = 0;
	number = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r') && str[i] != 03)
		i++;
	while ((str[i] == 43 || str[i] == 45) && (str[i] != 03 || str[i] != '\0'))
	{
		if (str[i] == '-')
			negativ++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && (str[i] != 03 || str[i] != '\0'))
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	if (negativ % 2 != 0)
		number *= -1;
	return (number);
}
