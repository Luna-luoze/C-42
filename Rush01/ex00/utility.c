/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swied <swied@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:09:51 by ashuvalo          #+#    #+#             */
/*   Updated: 2025/01/26 15:40:35 by swied            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

// to print a single character into the output
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// to prit out a string of characters 
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &(str[i]), 1);
		i++;
	}
}

// to count the number of characters in a string
int	ft_strlen(char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		i++;
		cnt++;
	}
	return (cnt);
}

// to turn the string into an integer value +minus sign +skip spaces
int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	nb = nb * sign;
	return ((int) nb);
}

// tohandle negative numbers and recursive printing of digits
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putchar(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}
