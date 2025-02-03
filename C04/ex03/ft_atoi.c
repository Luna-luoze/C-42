/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luoguo <luoguo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:25:14 by luoguo            #+#    #+#             */
/*   Updated: 2025/01/30 20:25:39 by luoguo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//transform first encountered char numbers into integer,
//stop when encounter other char. return integer found

int	ft_findnumber(char *str, int sign)
{
	int	nbr;
	int	part;

	part = 0;
	nbr = 0;
	while (*str >= '0' && *str <= '9')
	{
		part = *str - '0';
		nbr = nbr * 10 + part;
		str++;
	}
	return (nbr * sign);
}
//deal with minus sign and ignore the plus
//ignore the space

int	ft_atoi(char *str)
{
	int	sign;

	sign = 1;
	while (*str == ' ')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '+')
			str++;
		else if (*str == '-')
		{
			sign = -1 * sign;
			str++;
		}
	}
	return (ft_findnumber(str, sign));
}
